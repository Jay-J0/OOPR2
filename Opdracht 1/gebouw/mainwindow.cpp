#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>

#include "HallSensor.h"
#include "Schuifdeur.h"
#include "Draaideur.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //s1=new HallSensor(515,160);
    //vd=new Schuifdeur(503,250,80,s1);
    //d1=new Draaideur(295, 290, 30, true, true);
    //d2=new Draaideur(248, 140, 40, false, false);

    //deuren.push_back(new Schuifdeur(503,250,80,s1)); // Voordeur toevoegen aan de vector
    //deuren.push_back(new Draaideur(248, 140, 40, false, false));// d1 toevoegen aan de vector
    //deuren.push_back(new Draaideur(295, 290, 30, true, true));//d2 toevoegen aan de vector

    s1 = std::make_unique<HallSensor>(515, 160);
    deuren.push_back(std::make_unique<Schuifdeur>(503, 250, 80, s1.get()));
    deuren.push_back(std::make_unique<Draaideur>(248, 140, 40, false, false));
    deuren.push_back(std::make_unique<Draaideur>(295, 290, 30, true, true));
}

MainWindow::~MainWindow()
{
    //Niet meer nodig door de smartpointers
    //delete ui;
    //delete s1;

    //delete vd;
    //delete d1;
    //delete d2;

    //for (auto& deur : deuren) // Loop over de vector en verwijder elke deur
        //delete deur;
}

void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    QPen pen;
    QImage image("C:/Users/User/Desktop/Q3/OOPR2/Practicum/Opdracht 1/gebouw/Gebouw.png");

    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawImage(10,10,image);

    s1->teken(this);
    //vd->teken(this);
    //d1->teken(this);
    //d2->teken(this);
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
    }
    else
        deuren[0]->open();
    update();
}

void MainWindow::on_d1Knop_clicked(){
    if(deuren[1]->isDeurOpen()){
        deuren[1]->sluit();
    }
    else
        deuren[1]->open();
    update();
}

void MainWindow::on_d2Knop_clicked(){
    if(deuren[2]->isDeurOpen()){
        deuren[2]->sluit();
    }
    else
        deuren[2]->open();
    update();
}
