#include "menuetudiant.h"
#include "ui_menuetudiant.h"

MenuEtudiant::MenuEtudiant(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuEtudiant)
{
    ui->setupUi(this);
}

MenuEtudiant::~MenuEtudiant()
{
    delete ui;
}
