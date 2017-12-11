#include "menuenseignant.h"
#include "ui_menuenseignant.h"

MenuEnseignant::MenuEnseignant(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuEnseignant)
{
    ui->setupUi(this);
}

MenuEnseignant::~MenuEnseignant()
{
    delete ui;
}
