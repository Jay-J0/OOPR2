#include "Deur.h"
#include "Slot.h"

#include <QPainter>
#include <QPen>

Deur::Deur(int x, int y, unsigned int length) : x(x), y(y), status(false), length(length) {
}

Deur::Deur(int x, int y, unsigned int length, const std::list<Slot*>& sloten) : sloten(sloten), x(x), y(y), status(false), length(length) {
}

Deur::~Deur() {
    // Verwijder alle sloten uit de lijst en ruim het geheugen op
    for (auto& slot : sloten) {
        delete slot;
    }

}

void Deur::sluit() {
    status = false;
}

void Deur::open() {
    // Controleer of alle sloten ontgrendeld zijn voordat de deur wordt geopend
    for (auto& slot : sloten) {
        if (slot->isVergrendeld()) {
            return; // Stoppen met openen als minstens één slot vergrendeld is
        }
    }
    status = true;
}

unsigned int Deur::deurLengte() {
    return length;
}

void Deur::teken(QPaintDevice * tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);

    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if (isDeurOpen()) {
        p.drawLine(x, y, x - length, y);
    } else {
        p.drawLine(x, y, x, y + length);
    }
}

bool Deur::isDeurOpen() {
    return status;
}

int Deur::getX() const {
    return x;
}

int Deur::getY() const {
    return y;
}

std::list<Slot*>& Deur::getSlot() {
    return sloten;
}
