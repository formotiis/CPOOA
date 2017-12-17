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

void Contenu::on_connexionButton_clicked()
{
    std::string pass = QStackedWidget::findChild<QLineEdit*>("connexionMDP")->text().toStdString();
    std::string ident = QStackedWidget::findChild<QLineEdit*>("connexionIdentifiant")->text().toStdString();
    dynamic_cast<MainWindow*>(parent())->connecter(ident, pass);
}
