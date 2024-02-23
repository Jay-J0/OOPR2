#include "CodeSlot.h"

#include <sstream>

CodeSlot::CodeSlot(unsigned int code) : code(code), vergrendeld(true) {}

void CodeSlot::vergrendel() {
    vergrendeld = true;
}

bool CodeSlot::isVergrendeld() {
    return vergrendeld;
}

void CodeSlot::ontgrendel(const std::string sleutel) {
    std::stringstream intSleutel(sleutel); //String omzetten en opslaan in een unsigned int
    unsigned int deSleutel;
    intSleutel >> deSleutel;

    if (code == deSleutel) {
        vergrendeld = false;
    }
}
