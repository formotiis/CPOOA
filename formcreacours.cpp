#include "formcreacours.h"
#include "ui_formcreacours.h"

FormCreaCours::FormCreaCours(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormCreaCours)
{
    ui->setupUi(this);
}

FormCreaCours::~FormCreaCours()
{
    delete ui;
}
