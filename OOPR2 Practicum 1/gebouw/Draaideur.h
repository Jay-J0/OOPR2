#ifndef DRAAIDEUR_H
#define DRAAIDEUR_H

#include "Deur.h"
#include <QPaintDevice>

class Draaideur : public Deur {
public:
    Draaideur(int,int,unsigned int, bool);
    void teken(QPaintDevice *) override;
private:
    bool liggend;
};

#endif // DRAAIDEUR_H
