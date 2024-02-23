#ifndef CODESLOT_H
#define CODESLOT_H

#include "Slot.h"

class CodeSlot : public Slot {
public:
    CodeSlot(const unsigned int code);
    void vergrendel() override;
    bool isVergrendeld() override;
    void ontgrendel(const std::string sleutel) override;
private:
    unsigned int code;
    bool vergrendeld;
};

#endif // CODESLOT_H
