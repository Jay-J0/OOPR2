#include "Schuifdeur.h"

#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Schuifdeur::Schuifdeur(int x, int y, unsigned int length, Sensor *sensor) : Deur(x,y,length), safetySensor(sensor) {};

void Schuifdeur::teken(QPaintDevice *tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);

    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if (isDeurOpen())
        p.drawLine(x,y,x,y+length);
    else
        p.drawLine(x,y,x,y-length);
}

void Schuifdeur::sluit() {
    if (!safetySensor->isGeactiveerd()) {
        status = false;
        safetySensor->activeer();
    }
}

void Schuifdeur::open() {
    if (safetySensor->isGeactiveerd()) {
        status = true;
        safetySensor->deactiveer();
    }
}
