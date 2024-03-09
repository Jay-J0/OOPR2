#ifndef KAARTSLOT_H
#define KAARTSLOT_H

#include "Slot.h"
#include <map>

class IdKaart;

class KaartSlot : public Slot {
public:
    KaartSlot(std::string);
    void ontgrendel(const std::string sleutel) override;
    void vergrendel() override;
    bool isVergrendeld() override;
    virtual void voegIdKaartToe(IdKaart*);
    virtual void verwijderIdKaart(std::string);
    virtual std::string getPlaats();
private:
    std::string plaats;
    bool vergrendeld;
    static std::map<std::string, IdKaart*> idKaarten;
};

#endif // KAARTSLOT_H
