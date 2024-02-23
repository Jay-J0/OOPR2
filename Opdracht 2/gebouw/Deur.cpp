#include "Deur.h"

#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Deur::Deur(int x, int y, unsigned int length) : slot(NULL), x(x), y(y), status(false), length(length) {
}

Deur::Deur(int x, int y, unsigned int length, Slot *slot) : slot(slot), x(x), y(y), status(false), length(length) {
}

Deur::~Deur(){

}

void Deur::sluit() {
    status = false;
}

void Deur::open() {
    if(!slot->isVergrendeld()){
    status = true;
    }
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

    if (isDeurOpen())
        p.drawLine(x,y,x-length,y);
    else
        p.drawLine(x,y,x,y+length);
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

Slot* Deur::getSlot(){
    return slot;
}
