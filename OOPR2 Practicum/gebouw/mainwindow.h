#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

#include <memory>

namespace Ui {
class MainWindow;
}
class Deur;
class Sensor;
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
    void on_geautoriseerd_clicked();
    void on_nietGeautoriseerd_clicked();
    void on_idErbij_clicked();
    void on_idEraf_clicked();
    void on_heeftToegangButton_clicked();
    void on_geenToegangButton_clicked();
    void isGegeautoriseerd(bool);

private:
    std::unique_ptr<Ui::MainWindow> ui;
    std::unique_ptr<Sensor> s1;
    std::vector<std::unique_ptr<Deur>> deuren;
};

#endif // MAINWINDOW_H
