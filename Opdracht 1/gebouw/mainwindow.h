#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Deur.h"
#include <QMainWindow>
#include <vector>

#include <memory>


namespace Ui {
class MainWindow;
}
class HallSensor;
class Schuifdeur;
class Draaideur;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
      ~MainWindow();

private slots:
    void on_sensor_act_clicked();
    void on_schuifdeurKnop_clicked();
    void on_d1Knop_clicked();
    void on_d2Knop_clicked();

private:
    std::unique_ptr<Ui::MainWindow> ui;
    //HallSensor *s1;
    //Schuifdeur *vd;
    //Draaideur *d1;
    //Draaideur *d2;
    //std::vector<Deur*> deuren;
    std::unique_ptr<HallSensor> s1;
    std::vector<std::unique_ptr<Deur>> deuren;
};

#endif // MAINWINDOW_H
