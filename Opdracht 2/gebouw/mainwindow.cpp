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
    deuren.push_back(std::make_unique<Schuifdeur>(503, 250, 80, s1.get(), new SleutelSlot("Wablief")));
    deuren.push_back(std::make_unique<Draaideur>(248, 140, 40, true, new CodeSlot(1111)));
    deuren.push_back(std::make_unique<Draaideur>(295, 290, 30, false, new CodeSlot(2222)));
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QPen pen;
    QImage image("C:/Users/User/Desktop/Q3/OOPR2/Practicum/Opdracht 2/gebouw/Gebouw.png");

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
        deuren[0]->getSlot()->vergrendel();
    }

    else{
        std::string eenSleutel = ui->lineEdit1->text().toStdString();
        deuren[0]->getSlot()->ontgrendel(eenSleutel);
        ui->lineEdit1->setText("");
        if(!deuren[0]->getSlot()->isVergrendeld())
            deuren[0]->open();
    }

    update();
}

void MainWindow::on_d1Knop_clicked(){
    if(deuren[1]->isDeurOpen()){
        deuren[1]->sluit();
        deuren[1]->getSlot()->vergrendel();
    }
    else{
        std::string eenCode = ui->lineEdit2->text().toStdString();
        deuren[1]->getSlot()->ontgrendel(eenCode);
        ui->lineEdit2->setText("");
        deuren[1]->open();
    }
    update();
}

void MainWindow::on_d2Knop_clicked(){
    if(deuren[2]->isDeurOpen()){
        deuren[2]->sluit();
        deuren[2]->getSlot()->vergrendel();
    }
    else{
        std::string eenCode = ui->lineEdit3->text().toStdString();
        deuren[2]->getSlot()->ontgrendel(eenCode);
        ui->lineEdit3->setText("");
        deuren[2]->open();
    }
    update();
}
