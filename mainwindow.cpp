#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "insider.h"

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
        std::string temp = "Connexion reussie en temp que :\n" + mod->getConnect()->getType() + " : "+ident;
        //std::wstring stemp = std::wstring(temp.begin(), temp.end());
        //const wchar_t * sw = stemp.c_str();
        QMessageBox qmb;
        QString str = QString::fromUtf8(temp.c_str());
        qmb.setText(str);
        qmb.exec();
        //InsiderUI iui = InsiderUI(mod);
        //iui.show();
    }
}

void MainWindow::on_inscripButton_clicked()
{
    std::string pass = MainWindow::findChild<QLineEdit*>("inscripMDP")->text().toStdString();
    std::string ident = MainWindow::findChild<QLineEdit*>("inscripIdentifiant")->text().toStdString();
    mod->inscription(ident,pass);
}
