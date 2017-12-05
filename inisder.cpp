#include "inisder.h"
#include "ui_inisder.h"

/// Fenetre 2 en "principe"

Inisder::Inisder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inisder)
{
    ui->setupUi(this);
}

Inisder::~Inisder()
{
    delete ui;
}

void Inisder::on_pushButton_clicked()
{
    mod.deconnexion();
}
