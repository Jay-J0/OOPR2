#include "Schuifdeur.h"
#include "sensor.h"

#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Schuifdeur::Schuifdeur(int x, int y, unsigned int length, Sensor *sensor) : Deur(x,y,length), sensor(sensor) {

      };

Schuifdeur::Schuifdeur(int x, int y, unsigned int length, Sensor *sensor, std::list<Slot*> sloten): Deur(x, y, length, sloten), sensor(sensor) {

}


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
    if (!sensor->isGeactiveerd()) {
        Deur::sluit();
        sensor->activeer();
    }
}

void Schuifdeur::open() {
    if (sensor->isGeactiveerd()) {
        Deur::open();
        if(Deur::isDeurOpen()){
        sensor->deactiveer();
        }
    }
}
