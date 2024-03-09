#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H

#include "Deur.h"

class Sensor;

class Schuifdeur : public Deur {
public:
    Schuifdeur(int, int, unsigned int, Sensor *);
    Schuifdeur(int x, int y, unsigned int length, Sensor *sensor, std::list<Slot*> sloten);
    void teken(QPaintDevice *) override;
    void open() override;
    void sluit() override;
private:
    Sensor *sensor;
};

#endif // SCHUIFDEUR_H
