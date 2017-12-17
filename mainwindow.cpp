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
    dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(varConnexion));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connecter(std::string ident, std::string pass){
    if(mod->connexion(ident, pass)){
        if(mod->getConnect()->getType() == "Enseignant"){
            dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(varMenuEnseignant));
        }
        if(mod->getConnect()->getType() == "Etudiant"){
            dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(varMenuEtu));
        }
        if(mod->getConnect()->getType() == "Admin"){
            dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(varMenuAdmin));
        }
    }
}

void MainWindow::inscription(std::string ident, std::string pass){
    mod->inscription(ident,pass);
}

void MainWindow::deconnexion(){
    mod->deconnexion();
}
