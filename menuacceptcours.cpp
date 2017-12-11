#include "menuacceptcours.h"
#include "ui_menuacceptcours.h"

MenuAcceptCours::MenuAcceptCours(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuAcceptCours)
{
    ui->setupUi(this);
}

MenuAcceptCours::~MenuAcceptCours()
{
    delete ui;
}
