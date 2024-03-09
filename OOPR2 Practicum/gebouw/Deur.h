#ifndef DEUR_H
#define DEUR_H


#include <list>

class Slot;
class QPaintDevice;

class Deur {
public:
    Deur(int, int, unsigned int);
    Deur(int, int, unsigned int, const std::list<Slot*>&);
    virtual ~Deur();
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice *);
    virtual bool isDeurOpen();
    virtual unsigned int deurLengte();
    virtual int getX() const;
    virtual int getY() const;
    virtual std::list<Slot*>& getSlot();

private:
    std::list<Slot*> sloten;
    int x;
    int y;
    bool status;
    unsigned int length;
};

#endif // DEUR_H
