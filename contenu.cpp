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

void Contenu::on_inscripButton_clicked()
{
    std::string pass = QStackedWidget::findChild<QLineEdit*>("inscripMDP")->text().toStdString();
    std::string ident = QStackedWidget::findChild<QLineEdit*>("inscripIdentifiant")->text().toStdString();
    dynamic_cast<MainWindow*>(parent())->inscription(ident, pass);
}

void Contenu::on_b_deco_2_clicked()
{
    setCurrentWidget(widget(varConnexion));
}

void Contenu::on_b_deco_3_clicked()
{
    setCurrentWidget(widget(varConnexion));
}

void Contenu::on_b_deco_clicked()
{
    setCurrentWidget(widget(varConnexion));
}

void Contenu::on_b_addcours_clicked()
{
    setCurrentWidget(widget(varAjoutCour));
}

void Contenu::on_b_cancel_clicked()
{
    setCurrentWidget(widget(varMenuEnseignant));
}
