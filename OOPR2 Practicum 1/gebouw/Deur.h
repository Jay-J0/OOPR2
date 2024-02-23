#ifndef DEUR_H
#define DEUR_H

#include <QPaintDevice>

class Deur {
public:
    Deur(int, int, unsigned int);
    virtual ~Deur();
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice *);
    virtual bool isDeurOpen();
    virtual unsigned int deurLengte();
    virtual int getX() const;
    virtual int getY() const;
private:
    int x;
    int y;
    bool status;
    unsigned int length;
};

#endif // DEUR_H
