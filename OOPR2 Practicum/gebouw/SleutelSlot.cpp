#include "SleutelSlot.h"

SleutelSlot::SleutelSlot(std::string code) : vergrendeld(true), code(code) {}

void SleutelSlot::vergrendel() {
    vergrendeld = true;
}

bool SleutelSlot::isVergrendeld() {
    return vergrendeld;
}

void SleutelSlot::ontgrendel(std::string key) {
    if (code.compare(key) == 0) {
        vergrendeld = false;
    }
}
