#include "mainwindow.h"
#include "IdKaart.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineEdit>

#include "HallSensor.h"
#include "Schuifdeur.h"
#include "Draaideur.h"

#include "SleutelSlot.h"
#include "CodeSlot.h"
#include "KaartSlot.h"

#include "HerkenningsSlot.h"
#include "Drukbox.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s1 = std::make_unique<HallSensor>(515, 160);
    Drukbox *afdrukker = new Drukbox(ui->autorisatieNaamBrowser);

    std::list<Slot*> sloten1;
    sloten1.push_back(new SleutelSlot("W"));
    sloten1.push_back(new SleutelSlot("K"));
    sloten1.push_back(new KaartSlot("Voordeur"));
    deuren.push_back(std::make_unique<Schuifdeur>(503, 250, 80, s1.get(), sloten1));

    std::list<Slot*> sloten2;
    sloten2.push_back(new CodeSlot(1));
    sloten2.push_back(new CodeSlot(2));
    deuren.push_back(std::make_unique<Draaideur>(248, 140, 40, true, sloten2));

    std::list<Slot*> sloten3;
    sloten3.push_back(new CodeSlot(3));
    sloten3.push_back(new HerkenningsSlot(afdrukker));
    deuren.push_back(std::make_unique<Draaideur>(295, 290, 30, false, sloten3));
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QPen pen;
    QImage image("C:/Users/User/Desktop/OOPR2 Practicum/gebouw/Gebouw.png");

    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawImage(10,10,image);

    s1->teken(this);
    for (auto& deur : deuren) // Loop over de vector en teken elke deur
        deur->teken(this);
}

void MainWindow::on_sensor_act_clicked()
{
    if(s1->isGeactiveerd())
        s1->deactiveer();
    else
        s1->activeer();
    update();
}

void MainWindow::on_schuifdeurKnop_clicked(){
    if(deuren[0]->isDeurOpen()){
        deuren[0]->sluit();
        for (auto& slot : deuren[0]->getSlot())
            slot->vergrendel();
    } else {
        std::string eenSleutel1 = ui->lineEdit1->text().toStdString();
        std::string eenSleutel2 = ui->lineEdit2->text().toStdString();
        std::string waardeID = ui->lineGeefIDvd->text().toStdString();

        for (auto& slot : deuren[0]->getSlot()) {
            slot->ontgrendel(eenSleutel1);
            slot->ontgrendel(eenSleutel2);
            slot->ontgrendel(waardeID);
        }

        for (auto& slot : deuren[0]->getSlot()) {
            if (!slot->isVergrendeld()) {
                deuren[0]->open();
                break;
            }
        }

        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineGeefIDvd->setText("");
    }
    update();
}

void MainWindow::on_d1Knop_clicked(){
    if(deuren[1]->isDeurOpen()){
        deuren[1]->sluit();
        for (auto& slot : deuren[1]->getSlot())
            slot->vergrendel();
    } else {
        std::string eenCode1 = ui->lineEdit2->text().toStdString();
        std::string eenCode2 = ui->lineEdit3->text().toStdString();

        for (auto& slot : deuren[1]->getSlot()) {
            slot->ontgrendel(eenCode1);
            slot->ontgrendel(eenCode2);
        }
        for (auto& slot : deuren[1]->getSlot()) {
            if (!slot->isVergrendeld()) {
                deuren[1]->open();
                break;
            }
        }

        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
    }
    update();
}

void MainWindow::on_d2Knop_clicked(){
    if(deuren[2]->isDeurOpen()){
        deuren[2]->sluit();
        for (auto& slot : deuren[2]->getSlot())
            slot->vergrendel();
    } else {
        std::string eenCode = ui->lineEdit3->text().toStdString();
        std::string eenAuthorisatie = ui->autorisatieEdit->text().toStdString();

        for (auto& slot : deuren[2]->getSlot()) {
            slot->ontgrendel(eenCode);
            slot->ontgrendel(eenAuthorisatie);

        }
        for (auto& slot : deuren[2]->getSlot()) {
            if (!slot->isVergrendeld()) {
                deuren[2]->open();
                break;
            }
        }

        ui->lineEdit3->setText("");
        ui->autorisatieEdit->setText("");
    }
    update();
}

void MainWindow::on_geautoriseerd_clicked() {
    isGegeautoriseerd(true);
}

void MainWindow::on_nietGeautoriseerd_clicked() {
    isGegeautoriseerd(false);
}

void MainWindow::isGegeautoriseerd(bool Autorisatie){
    for (auto& slot : deuren[2]->getSlot()) {

        HerkenningsSlot* herkenningsSlotPtr = dynamic_cast<HerkenningsSlot*>(slot);
        /*Dynamic_cast gebruikt om te controleren of een pointer naar een
        Slot-object kan worden gedowncast naar een pointer HerkenningsSlot-object.
        Als slot een geldige pointer naar een HerkenningsSlot-object is, zal dynamic_cast een pointer naar dat object retourneren.
        Als slot niet naar een HerkenningsSlot-object wijst, retourneert dynamic_cast een nullpointer.*/

        if (herkenningsSlotPtr != nullptr && !ui->autorisatieEdit->text().isEmpty()){ //dynamic_cast GEEN nullptr en Autorisatie vak is leeg
            herkenningsSlotPtr->voegAutorissatieToe(ui->autorisatieEdit->text().toStdString(), Autorisatie);//Voeg "Naam" en "Authorisatie" toe aan de QtTextBrowser
            herkenningsSlotPtr->toonKaartenbak(); //Toon "Naam" en "Authorisatie" in de QtTextBrowser
        }
    }
}

void MainWindow::on_idErbij_clicked(){
    // Nieuw ID-kaart object aanmaken
   IdKaart* nieuweIDkaart = new IdKaart(ui->lineUniekID->text().toStdString(), ui->lineNaamID->text().toStdString(), ui->lineAdresID->text().toStdString());

    // Loop door alle deuren
    for (const auto& deur : deuren) {
        // Krijg de lijst van sloten voor deze deur
        std::list<Slot*> sloten = deur->getSlot();

        // Loop door alle sloten
        for (auto& slot : sloten) {
            // Controleer of dit slot een KaartSlot is
            if (KaartSlot* kaartSlot = dynamic_cast<KaartSlot*>(slot)) {
                // Als het een KaartSlot is, voeg de ID-kaart toe
                kaartSlot->voegIdKaartToe(nieuweIDkaart);

                nieuweIDkaart->geefToegang(kaartSlot);
            }
        }
    }

    ui->lineUniekID->setText("");
    ui->lineNaamID->setText("");
    ui->lineAdresID->setText("");
}

void MainWindow::on_idEraf_clicked(){
    std::string verwijderIDkaart = ui->lineUniekID->text().toStdString();

    // Loop door alle deuren
    for (const auto& deur : deuren) {
        // Krijg de lijst van sloten voor deze deur
        std::list<Slot*> sloten = deur->getSlot();

        // Loop door alle sloten
        for (auto& slot : sloten) {
            // Controleer of dit slot een KaartSlot is
            if (KaartSlot* kaartSlot = dynamic_cast<KaartSlot*>(slot)) {
                // Als het een KaartSlot is, probeer de ID-kaart te verwijderen
                kaartSlot->verwijderIdKaart(verwijderIDkaart);

            }
        }
    }

    ui->lineUniekID->setText("");
}

std::string MainWindow::on_heeftToegang_clicked(){
    std::string heeftToegang = ui->lineGeefIDvd->text().toStdString();
    return heeftToegang;
}

std::string MainWindow::on_geenToegang_clicked(){
    std::string geenToegang = ui->lineGeefIDvd->text().toStdString();
    return geenToegang;
}
