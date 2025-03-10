/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *sensor_act;
    QPushButton *schuifdeurKnop;
    QPushButton *d2Knop;
    QPushButton *d1Knop;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit3;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QPushButton *geautoriseerd;
    QPushButton *nietGeautoriseerd;
    QLineEdit *autorisatieEdit;
    QTextBrowser *autorisatieNaamBrowser;
    QPushButton *idErbij;
    QPushButton *idEraf;
    QLineEdit *lineUniekID;
    QLineEdit *lineNaamID;
    QLineEdit *lineAdresID;
    QTextEdit *textEdit;
    QLineEdit *lineGeefIDvd;
    QPushButton *heeftToegangButton;
    QPushButton *geenToegangButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(670, 431);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        sensor_act = new QPushButton(centralWidget);
        sensor_act->setObjectName("sensor_act");
        sensor_act->setGeometry(QRect(510, 100, 31, 31));
        schuifdeurKnop = new QPushButton(centralWidget);
        schuifdeurKnop->setObjectName("schuifdeurKnop");
        schuifdeurKnop->setGeometry(QRect(520, 210, 41, 24));
        d2Knop = new QPushButton(centralWidget);
        d2Knop->setObjectName("d2Knop");
        d2Knop->setGeometry(QRect(340, 250, 31, 20));
        d1Knop = new QPushButton(centralWidget);
        d1Knop->setObjectName("d1Knop");
        d1Knop->setGeometry(QRect(260, 160, 31, 20));
        lineEdit1 = new QLineEdit(centralWidget);
        lineEdit1->setObjectName("lineEdit1");
        lineEdit1->setGeometry(QRect(550, 0, 113, 24));
        lineEdit2 = new QLineEdit(centralWidget);
        lineEdit2->setObjectName("lineEdit2");
        lineEdit2->setGeometry(QRect(550, 30, 113, 24));
        lineEdit3 = new QLineEdit(centralWidget);
        lineEdit3->setObjectName("lineEdit3");
        lineEdit3->setGeometry(QRect(550, 60, 113, 24));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(510, 0, 41, 21));
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(510, 30, 41, 21));
        textBrowser_3 = new QTextBrowser(centralWidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(510, 60, 41, 21));
        textBrowser_4 = new QTextBrowser(centralWidget);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(390, 290, 281, 91));
        geautoriseerd = new QPushButton(centralWidget);
        geautoriseerd->setObjectName("geautoriseerd");
        geautoriseerd->setGeometry(QRect(170, 320, 111, 24));
        nietGeautoriseerd = new QPushButton(centralWidget);
        nietGeautoriseerd->setObjectName("nietGeautoriseerd");
        nietGeautoriseerd->setGeometry(QRect(170, 350, 111, 24));
        autorisatieEdit = new QLineEdit(centralWidget);
        autorisatieEdit->setObjectName("autorisatieEdit");
        autorisatieEdit->setGeometry(QRect(170, 290, 113, 24));
        autorisatieNaamBrowser = new QTextBrowser(centralWidget);
        autorisatieNaamBrowser->setObjectName("autorisatieNaamBrowser");
        autorisatieNaamBrowser->setGeometry(QRect(10, 290, 151, 81));
        idErbij = new QPushButton(centralWidget);
        idErbij->setObjectName("idErbij");
        idErbij->setGeometry(QRect(0, 0, 71, 24));
        idEraf = new QPushButton(centralWidget);
        idEraf->setObjectName("idEraf");
        idEraf->setGeometry(QRect(0, 30, 71, 24));
        lineUniekID = new QLineEdit(centralWidget);
        lineUniekID->setObjectName("lineUniekID");
        lineUniekID->setGeometry(QRect(80, 0, 113, 24));
        lineNaamID = new QLineEdit(centralWidget);
        lineNaamID->setObjectName("lineNaamID");
        lineNaamID->setGeometry(QRect(80, 30, 113, 24));
        lineAdresID = new QLineEdit(centralWidget);
        lineAdresID->setObjectName("lineAdresID");
        lineAdresID->setGeometry(QRect(80, 60, 113, 24));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(200, 0, 81, 81));
        lineGeefIDvd = new QLineEdit(centralWidget);
        lineGeefIDvd->setObjectName("lineGeefIDvd");
        lineGeefIDvd->setGeometry(QRect(560, 210, 101, 24));
        heeftToegangButton = new QPushButton(centralWidget);
        heeftToegangButton->setObjectName("heeftToegangButton");
        heeftToegangButton->setGeometry(QRect(570, 240, 80, 24));
        geenToegangButton = new QPushButton(centralWidget);
        geenToegangButton->setObjectName("geenToegangButton");
        geenToegangButton->setGeometry(QRect(570, 270, 80, 24));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 670, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sensor_act->setText(QCoreApplication::translate("MainWindow", "s1", nullptr));
        schuifdeurKnop->setText(QCoreApplication::translate("MainWindow", "vd", nullptr));
        d2Knop->setText(QCoreApplication::translate("MainWindow", "d2", nullptr));
        d1Knop->setText(QCoreApplication::translate("MainWindow", "d1", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">vd</p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">d1</p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">d2</p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">WACHTWOORDEN &amp; INSTRUCTIES</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">De Voordeur (vd) heeft drie sloten:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px;\">Wachtwoord vd = W</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Wachtwoord d1 = K</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ID Authenticatie</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">ID AUTHENTICATIE INSTRUCTIES</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Voeg een ID kaart toe met 'ID Kaart+'</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Verwijder een ID kaart met 'ID Ka"
                        "art -'</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vul het unieke ID van de kaart in op de 'Line Edit' naast 'vd'</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Geef deze ID 'Toegang' of 'Geen Toegang'</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">De binnen deur 1 (d1) heeft twee sloten:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Wachtwoord d1 = 1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"
                        "\">Wachtwoord d2 = 2</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">De binnen deur 2 (d2) heeft twee sloten:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Wachtwoord d2 = 3</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Autorisatie</p></body></html>", nullptr));
        geautoriseerd->setText(QCoreApplication::translate("MainWindow", "Geautoriseerd", nullptr));
        nietGeautoriseerd->setText(QCoreApplication::translate("MainWindow", "Niet Geautoriseerd", nullptr));
        idErbij->setText(QCoreApplication::translate("MainWindow", "ID Kaart +", nullptr));
        idEraf->setText(QCoreApplication::translate("MainWindow", "ID Kaart -", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Uniek ID</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Naam</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. Adres</p></body></html>", nullptr));
        heeftToegangButton->setText(QCoreApplication::translate("MainWindow", "Toegang", nullptr));
        geenToegangButton->setText(QCoreApplication::translate("MainWindow", "Geen Toegang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
