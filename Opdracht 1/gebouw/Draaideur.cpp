#include "Draaideur.h"

#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Draaideur::Draaideur(int x,int y,unsigned int length, bool liggend, bool linksom): Deur(x,y,length), liggend(liggend), linksom(linksom) {

}
void Draaideur::teken(QPaintDevice *tp) {
    QPainter p(tp);
    p.setBrush(Qt::SolidPattern);
    p.setBrush(Qt::black);

    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if (liggend) {
        if (isDeurOpen()) {
            if (linksom)
                p.drawLine(x, y, x, y - length);
            else
                p.drawLine(x, y, x, y + length);
        } else {
            p.drawLine(x, y, x - length, y);
        }
    } else {
        if (isDeurOpen()) {
            if (linksom)
                p.drawLine(x, y, x - length, y);
            else
                p.drawLine(x, y, x + length, y);
        } else {
            p.drawLine(x, y, x, y - length);
        }
    }

}
