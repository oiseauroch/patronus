#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controller.h"
#include "config.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void afficherQuestion();
private slots:

    void on_quitter_clicked();

    void on_son_clicked();

    void on_demarrer_clicked();

    void on_source_clicked();

    void on_accueil1_clicked();

    void on_suite_clicked();

    void on_choix1_clicked();

    void on_choix2_clicked();

    void on_choix3_clicked();


private:
    Ui::MainWindow *ui;
    Controller* controller;
    void afficherPatronus();
    config* conf;
};

#endif // MAINWINDOW_H
