#ifndef IDKAART_H
#define IDKAART_H

#include <string>
#include <vector>

class KaartSlot;

class IdKaart {
public:
    IdKaart(std::string, std::string, std::string);
    virtual ~IdKaart();
    virtual std::string userID();
    virtual void geefToegang(KaartSlot*);
    virtual void verwijderToegang(KaartSlot*);
    virtual bool heeftToegangTot(KaartSlot*);
private:
    std::string ID;
    std::vector<KaartSlot*> toegang;
    std::string naamEigenaar;
    std::string adresEigenaar;
};

#endif // IDKAART_H
