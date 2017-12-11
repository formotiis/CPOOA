#include "contenu.h"
#include "ui_contenu.h"

Contenu::Contenu(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::Contenu)
{
    ui->setupUi(this);
}

Contenu::~Contenu()
{
    delete ui;
}
