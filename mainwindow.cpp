#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mod = new Modele();
    setCentralWidget(new Contenu(this,mod));
    dynamic_cast<QStackedWidget*>(centralWidget())->setCurrentWidget(dynamic_cast<QStackedWidget*>(centralWidget())->widget(varConnexion));
}

MainWindow::~MainWindow()
{
    delete ui;
}
