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
    for (auto toegangIterator = toegang.begin(); toegangIterator != toegang.end(); ) {
        if (*toegangIterator == eenKaartSlot) {
            toegangIterator = toegang.erase(toegangIterator); // item bijwerken naar het volgende element na verwijdering
        } else {
            ++toegangIterator; // Ga naar het volgende element
        }
    }
}

bool IdKaart::heeftToegangTot(KaartSlot *eenKaartSlot) {
    for (std::vector<KaartSlot*>::iterator toegangIterator = toegang.begin(); toegangIterator != toegang.end(); toegangIterator++) {
        if (*toegangIterator == eenKaartSlot) {
            return true;
        }
    }

    return false;
}
