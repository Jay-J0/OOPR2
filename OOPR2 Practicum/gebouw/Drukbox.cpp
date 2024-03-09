#include "Drukbox.h"
#include "QTextBrowser"

Drukbox::Drukbox(QTextBrowser *qtextbrowser) : qtextbrowser(qtextbrowser) {

}

void Drukbox::toonText(std::string text) {
    qtextbrowser->append(QString::fromStdString(text));
}

void Drukbox::clearMedium() {
    qtextbrowser->clear();
}
