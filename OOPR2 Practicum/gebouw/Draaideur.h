#ifndef DRAAIDEUR_H
#define DRAAIDEUR_H

#include "Deur.h"

class Draaideur : public Deur {
public:
    Draaideur(int,int,unsigned int, bool);
    Draaideur(int,int,unsigned int, bool, std::list<Slot*> sloten);
    void teken(QPaintDevice *) override;
private:
    bool liggend;
};

#endif // DRAAIDEUR_H
