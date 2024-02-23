#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H

#include "Deur.h"
#include "Sensor.h"

class Schuifdeur : public Deur {
public:
    Schuifdeur(int, int, unsigned int, Sensor *);
    Schuifdeur(int, int, unsigned int, Sensor *, Slot *);
    void teken(QPaintDevice *) override;
    void open() override;
    void sluit() override;
private:
    Sensor *sensor;
};

#endif // SCHUIFDEUR_H
