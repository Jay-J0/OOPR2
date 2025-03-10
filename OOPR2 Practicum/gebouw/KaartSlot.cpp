#include "KaartSlot.h"
#include "IdKaart.h"
#include "SlotException.h"

std::map<std::string, IdKaart*> KaartSlot::idKaarten;

KaartSlot::KaartSlot(std::string plaats) :  plaats(plaats), vergrendeld(true) {

}

void KaartSlot::vergrendel() {
    this->vergrendeld = true;
}

bool KaartSlot::isVergrendeld() {
    return this->vergrendeld;
}

void KaartSlot::ontgrendel(std::string eenSleutel) {
    auto idIterator = idKaarten.find(eenSleutel);

    if (idIterator->second == nullptr){
        SlotException exception(nullptr, this, eenSleutel);
        throw exception;
        return;
    }

    if (idIterator->second->heeftToegangTot(this)){
        this->vergrendeld = false;
    }else{
        SlotException exception(idIterator->second, this, eenSleutel);
        throw exception;
    }
}

void KaartSlot::voegIdKaartToe(IdKaart* eenIdKaart){
    idKaarten[eenIdKaart->userID()] = eenIdKaart;
}

void KaartSlot::verwijderIdKaart(std::string eenId){
    auto idIterator = idKaarten.find(eenId); // Iterator om door de map te bladeren

    if (idIterator != idKaarten.end()) { // Controleren of de iterator geldig is
        delete idIterator->second;  // Het object verwijderen dat aan de iterator is gekoppeld
        idKaarten.erase(idIterator);  // Het element uit de map verwijderen
    }
}

std::string KaartSlot::getPlaats(){
    return this->plaats;
}

IdKaart* KaartSlot::getIdKaart(std::string id) {
    auto idIterator = idKaarten.find(id);
    if (idIterator != idKaarten.end()) {
        return idIterator->second;
    } else {
        return nullptr; // ID-kaart niet gevonden
    }
}

