#ifndef HERKENNINGSSLOT_H
#define HERKENNINGSSLOT_H

#include <map>
#include "Slot.h"

class Afdrukker;

class HerkenningsSlot : public Slot
{
public:
    HerkenningsSlot(Afdrukker*);
    ~HerkenningsSlot();
    void vergrendel() override;
    bool isVergrendeld() override;
    void ontgrendel (const std::string key) override;
    virtual void toonKaartenbak();
    virtual void voegAutorissatieToe(std::string, bool);
private:
    std::map<std::string, bool> Kaartenbak;
    bool vergrendeld;
    Afdrukker* afdrukker;
};

#endif // HERKENNINGSSLOT_H
