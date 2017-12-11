#include "menuenseignant.h"
#include "ui_menuenseignant.h"

MenuEnseignant::MenuEnseignant(QWidget *parent, Modele* m) :
    QWidget(parent),
    ui(new Ui::MenuEnseignant)
{
    ui->setupUi(this);
    mod = m;
}

MenuEnseignant::~MenuEnseignant()
{
    delete ui;
}

void MenuEnseignant::on_b_deco_clicked()
{
    mod->deconnecter();
    MainWindow(this->parentWidget()).connect();
}
