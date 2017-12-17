#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mod = new Modele();
    setCentralWidget(new Contenu(this));
    dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connexionButton_clicked()
{
    std::string pass = MainWindow::findChild<QLineEdit*>("connexionMDP")->text().toStdString();
    std::string ident = MainWindow::findChild<QLineEdit*>("connexionIdentifiant")->text().toStdString();
    if(mod->connexion(ident, pass)){
        if(mod->getConnect()->getType() == "Enseignant"){
            std::cout << "aaaaaaaaa" << std::endl;//dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(1));
        }
    }
}

void MainWindow::on_inscripButton_clicked()
{
    std::string pass = MainWindow::findChild<QLineEdit*>("inscripMDP")->text().toStdString();
    std::string ident = MainWindow::findChild<QLineEdit*>("inscripIdentifiant")->text().toStdString();
    mod->inscription(ident,pass);
}

void MainWindow::connecter(std::string ident, std::string pass){
    if(mod->connexion(ident, pass)){
        if(mod->getConnect()->getType() == "Enseignant"){
            dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(1));
        }
    }
}
