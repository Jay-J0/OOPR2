#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include <exception>
#include <string>

class IdKaart;
class KaartSlot;

class SlotException : public std::exception {
public:
    SlotException(IdKaart *idkaart, KaartSlot *kaartslot, std::string id);
    virtual std::string kaartVanBinnendringer();
    virtual std::string plaatsVanHetSlot();
    virtual void generateExceptionMessage();
private:
    std::string kaartId;
    std::string slotPlaats;
};

#endif // SLOTEXCEPTION_H
