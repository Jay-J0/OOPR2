#include "SlotException.h"
#include "IdKaart.h"
#include "KaartSlot.h"
#include <iostream>

SlotException::SlotException(IdKaart *idkaart, KaartSlot *kaartslot, std::string id) {
    if (idkaart != nullptr) {
        kaartId = idkaart->userID();
    } else {
        kaartId = "geen idkaart voor ID " + id;
    }

    slotPlaats = kaartslot->getPlaats();
}


std::string SlotException::kaartVanBinnendringer() {
    return kaartId;
}

std::string SlotException::plaatsVanHetSlot() {
    return slotPlaats;
}

void SlotException::generateExceptionMessage() {
    if (kaartId.find("geen idkaart") != std::string::npos) {
        std::cout << "Exception: " << kaartId << " op locatie " << slotPlaats << std::endl;
    } else {
        std::cout << "Exception: ID " << kaartId << " heeft geen toegang tot ID slot op locatie " << slotPlaats << std::endl;
    }
}
