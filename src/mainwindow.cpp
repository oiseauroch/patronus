#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <vector>
#include <QGraphicsView>
#include <QListView>

#include <iostream>
#include <QStringListModel>
#include <QMessageBox>

#define CONFIG_FILE "./data/config.txt"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->conf = &(config::CreateInstance(CONFIG_FILE));
    ui->setupUi(this);
    QPixmap cat(conf->Getproperty("imageChat").c_str());
    ui->chat->setPixmap(cat);

    this->controller = &(Controller::getInstance());
    ui->accueil1->setVisible(false);
    
    auto modelRare = new QStringListModel(this);
    auto modelCom = new QStringListModel(this);
    modelRare->setStringList(controller->getPatronusListName(Patronus::Type::rare));
    ui->patronus_rares->setModel(modelRare);
    modelCom->setStringList(controller->getPatronusListName(Patronus::Type::commun));
    ui->patronus_norm->setModel(modelCom);
   
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_son_clicked()
{
    
    if(controller->invertMusic()) {
        ui->son->setText("son");
    } else {
        ui->son->setText("mute");
    }
}

void MainWindow::on_demarrer_clicked()
{
    ui->fenetres->setCurrentIndex(4);
    ui->accueil1->setVisible(true);
    controller->SetRare(utils::getRandom(10) >7);
    controller->SetnbIt(utils::getRandom(10)+5);
        
    afficherQuestion();
    
    
}

void MainWindow::afficherQuestion() {
    int i ;
    do {
        i = utils::getRandom(controller->GetSizeQ());   
    } while (controller->IsQPosee(i));
    
  if( controller->IsRare() & (controller->GetNbIt() == 4)) 
  {
    QMessageBox::information( 
    this, 
    tr("Patronus"), 
    tr("Tu as un patronus rare ! Nous allons te poser d'autre questions.") );  
  }
    if(controller->decreasenbIt() > 0)
 {
    controller->AddQposee(i);
    Question q = controller->getQuestion(i);
    ui->choix1->setText(q.getChoice1().c_str());
    ui->choix2->setText(q.getChoice2().c_str());
    ui->choix3->setText(q.getChoice3().c_str());
 } else {
     afficherPatronus();
    }
}

void MainWindow::afficherPatronus() {
    Patronus* p;
    if(controller->IsRare()) {
        p = controller->getPatronus(Patronus::Type::rare,utils::getRandom(controller->GetSizePR()));
    } else {
        p = controller->getPatronus(Patronus::Type::commun,utils::getRandom(controller->GetSizePC()));
    }
    ui->text_fin->setText(p->getDesc().c_str());
    ui->titre_fin->setText(p->getName().c_str());
    auto str = std::string(conf->Getproperty("ImPatronusFolder")).append(p->getImageLoc());
    QPixmap image(str.c_str());
    ui->image_fin->setPixmap(image);
    ui->fenetres->setCurrentIndex(3);
}

void MainWindow::on_source_clicked()
{

    ui->fenetres->setCurrentIndex(1);
    ui->accueil1->setVisible(true);
}

void MainWindow::on_quitter_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_suite_clicked()
{
    //suite remerciements
    ui->fenetres->setCurrentIndex(2);
}


void MainWindow::on_choix1_clicked()
{
    afficherQuestion();
}

void MainWindow::on_choix2_clicked()
{
    afficherQuestion();
}

void MainWindow::on_choix3_clicked()
{
    
    afficherQuestion();
}

void MainWindow::on_accueil1_clicked()
{
    
    ui->fenetres->setCurrentIndex(0);
    ui->accueil1->setVisible(false);
}
