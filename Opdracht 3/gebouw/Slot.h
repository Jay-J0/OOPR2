#ifndef SLOT_H
#define SLOT_H

#include <string>

class Slot {
public:
    virtual ~Slot() = 0;
    virtual void ontgrendel(const std::string sleutel) = 0;
    virtual void vergrendel() = 0;
    virtual bool isVergrendeld() = 0;
};

#endif // SLOT_H
