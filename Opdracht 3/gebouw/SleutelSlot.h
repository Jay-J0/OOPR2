#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H

#include "Slot.h"

class SleutelSlot : public Slot {
public:
    SleutelSlot(const std::string code);
    void ontgrendel(const std::string sleutel) override;
    bool isVergrendeld() override;
    void vergrendel() override;
private:
    bool vergrendeld;
    std::string code;
};

#endif // SLEUTELSLOT_H
