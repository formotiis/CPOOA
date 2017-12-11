#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "menuenseignant.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mod = new Modele();
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
        if(mod->getConnect()->getType() == "Enseignant")
            setCentralWidget(new MenuEnseignant(this, mod));
    }
}

void MainWindow::on_inscripButton_clicked()
{
    std::string pass = MainWindow::findChild<QLineEdit*>("inscripMDP")->text().toStdString();
    std::string ident = MainWindow::findChild<QLineEdit*>("inscripIdentifiant")->text().toStdString();
    mod->inscription(ident,pass);
}

void MainWindow::connect(){
    //setCentralWidget();
}
