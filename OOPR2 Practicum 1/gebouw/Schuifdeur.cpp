#include "Schuifdeur.h"

#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Schuifdeur::Schuifdeur(int x, int y, unsigned int length, Sensor *sensor) : Deur(x,y,length), deurSensor(sensor) {};

void Schuifdeur::teken(QPaintDevice *tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);

    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if (isDeurOpen())
        p.drawLine(getX(), getY(), getX() , getY() + deurLengte());
    else
        p.drawLine(getX(), getY(), getX() , getY() - deurLengte());
}

void Schuifdeur::sluit() {
    if (!deurSensor->isGeactiveerd()) {
        Deur::sluit();
        deurSensor->activeer();
    }
}

void Schuifdeur::open() {
    if (deurSensor->isGeactiveerd()) {
        Deur::open();
        deurSensor->deactiveer();
    }
}
