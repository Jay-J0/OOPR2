#include "HerkenningsSlot.h"
#include "Afdrukker.h"

HerkenningsSlot::HerkenningsSlot(Afdrukker *afdrukker) : vergrendeld(true), afdrukker(afdrukker) {

}

HerkenningsSlot::~HerkenningsSlot() {
    delete afdrukker;
}

void HerkenningsSlot::vergrendel() {
    vergrendeld = true;
}

bool HerkenningsSlot::isVergrendeld() {
    return vergrendeld;
}

void HerkenningsSlot::ontgrendel(const std::string naam) {
    if (Kaartenbak.count(naam) == 0) // Check of de naam niet bestaat
        return;

    // Haal de geautoriseerde status op
    bool isGeautoriseerd = Kaartenbak.at(naam);

    // Als niet geautoriseerd, doe niets
    if (!isGeautoriseerd)
        return;

    // Wel geautoriseerd, ontgrendel
    vergrendeld = false;
}

void HerkenningsSlot::toonKaartenbak() {
    std::string outputString;
    afdrukker->clearMedium();

    for (const auto& persoon : Kaartenbak) {
        std::string status;
        if (persoon.second) {
            status = "Geautoriseerd";
        } else {
            status = "Niet Geautoriseerd";
        }
        outputString += persoon.first + " : " + status + "\n";
    }
    afdrukker->toonText(outputString);
}

void HerkenningsSlot::voegAutorissatieToe(std::string naam , bool autorisatie) {
    Kaartenbak[naam] = autorisatie;
}
