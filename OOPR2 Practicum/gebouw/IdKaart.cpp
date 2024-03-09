#include "IdKaart.h"
#include "SlotException.h"
#include "KaartSlot.h"

IdKaart::IdKaart(std::string id, std::string naam, std::string adres) : ID(id), naamEigenaar(naam), adresEigenaar(adres) {

}

IdKaart::~IdKaart() {

}

std::string IdKaart::userID() {
    return ID;
}

void IdKaart::geefToegang(KaartSlot *eenKaartSlot) {
    toegang.push_back(eenKaartSlot);
}

void IdKaart::verwijderToegang(KaartSlot *eenKaartSlot) {
    for (auto item = toegang.begin(); item != toegang.end(); item++) {

        if (*item == eenKaartSlot) {
            toegang.erase(item);
        }
    }

}

bool IdKaart::heeftToegangTot(KaartSlot *eenKaartSlot) {
    for (std::vector<KaartSlot*>::iterator item = toegang.begin(); item != toegang.end(); item++) {
        if (*item == eenKaartSlot) {
            return true;
        }
    }

    throw SlotException(this, eenKaartSlot);

    return false;
}
