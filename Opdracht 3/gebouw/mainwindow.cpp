#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineEdit>

#include "HallSensor.h"
#include "Schuifdeur.h"
#include "Draaideur.h"

#include "SleutelSlot.h"
#include "CodeSlot.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s1 = std::make_unique<HallSensor>(515, 160);
    std::list<Slot*> sloten1;
    sloten1.push_back(new SleutelSlot("Wablief"));
    deuren.push_back(std::make_unique<Schuifdeur>(503, 250, 80, s1.get(), sloten1));

    std::list<Slot*> sloten2;
    sloten2.push_back(new CodeSlot(1111));
    deuren.push_back(std::make_unique<Draaideur>(248, 140, 40, true, sloten2));

    std::list<Slot*> sloten3;
    sloten3.push_back(new CodeSlot(2222));
    deuren.push_back(std::make_unique<Draaideur>(295, 290, 30, false, sloten3));
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QPen pen;
    QImage image("C:/Users/User/Desktop/Q3/OOPR2/Practicum/Opdracht 3/gebouw/Gebouw.png");

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
        std::string eenSleutel = ui->lineEdit1->text().toStdString();
        for (auto& slot : deuren[0]->getSlot()) {
            slot->ontgrendel(eenSleutel);
            if (!slot->isVergrendeld()) {
                deuren[0]->open();
                break;
            }
        }
        ui->lineEdit1->setText("");
    }
    update();
}

void MainWindow::on_d1Knop_clicked(){
    if(deuren[1]->isDeurOpen()){
        deuren[1]->sluit();
        for (auto& slot : deuren[1]->getSlot())
            slot->vergrendel();
    } else {
        std::string eenCode = ui->lineEdit2->text().toStdString();
        for (auto& slot : deuren[1]->getSlot()) {
            slot->ontgrendel(eenCode);
            if (!slot->isVergrendeld()) {
                deuren[1]->open();
                break;
            }
        }
        ui->lineEdit2->setText("");
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
        for (auto& slot : deuren[2]->getSlot()) {
            slot->ontgrendel(eenCode);
            if (!slot->isVergrendeld()) {
                deuren[2]->open();
                break;
            }
        }
        ui->lineEdit3->setText("");
    }
    update();
}
