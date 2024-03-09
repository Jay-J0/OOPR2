#include "SlotException.h"
#include "IdKaart.h"
#include "KaartSlot.h"

SlotException::SlotException(IdKaart *idkaart, KaartSlot *kaartslot) {
    if (idkaart != nullptr) {
        kaartId = idkaart->userID();
    } else {
        kaartId = "Geen Kaart";
    }

    if (kaartslot != nullptr) {
        slotPlaats = kaartslot->getPlaats();
    } else {
        slotPlaats = "Geen Slot";
    }
}

std::string SlotException::kaartVanBinnendringer() {
    return kaartId;
}

std::string SlotException::plaatsVanHetSlot() {
    return slotPlaats;
}
