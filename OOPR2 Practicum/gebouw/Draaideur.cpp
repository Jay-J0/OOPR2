#include "Draaideur.h"

#include <QPainter>
#include <QPen>

Draaideur::Draaideur(int x,int y,unsigned int length, bool liggend): Deur(x,y,length), liggend(liggend) {

}

Draaideur::Draaideur(int x,int y,unsigned int length, bool liggend, std::list<Slot*> sloten): Deur(x,y,length, sloten), liggend(liggend) {

}

void Draaideur::teken(QPaintDevice *tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);

    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if (!liggend) { // Verticale deur
        if (isDeurOpen()) {
            // Deur sluiten
            p.drawLine(getX(), getY(), getX(), getY() + deurLengte());
        } else {
            // Deur openen
            p.drawLine(getX(), getY(), getX() - deurLengte(), getY());
        }
    } else { // Horizontale deur
        if (isDeurOpen()) {
            // Deur sluiten
            p.drawLine(getX(), getY(), getX() - deurLengte(), getY());
        } else {
            // Deur openen
            p.drawLine(getX(), getY(), getX(), getY() - deurLengte());
        }
    }
}

