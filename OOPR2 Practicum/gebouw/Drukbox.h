#ifndef DRUKBOX_H
#define DRUKBOX_H

#include "Afdrukker.h"

class QTextBrowser;

class Drukbox : public Afdrukker {
public:
    Drukbox(QTextBrowser*);
    void toonText(std::string) override;
    void clearMedium() override;
private:
    QTextBrowser *qtextbrowser;
};

#endif // DRUKBOX_H
