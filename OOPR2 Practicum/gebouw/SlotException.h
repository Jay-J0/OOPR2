#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include <exception>
#include <string>

class IdKaart;
class KaartSlot;

class SlotException : public std::exception {
public:
    SlotException(IdKaart *idkaart, KaartSlot *kaartslot);
    virtual std::string kaartVanBinnendringer();
    virtual std::string plaatsVanHetSlot();
private:
    std::string kaartId;
    std::string slotPlaats;
};

#endif // SLOTEXCEPTION_H
