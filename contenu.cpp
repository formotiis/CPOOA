#include "contenu.h"
#include "ui_contenu.h"

Contenu::Contenu(QWidget *parent, Modele *m) :
    QStackedWidget(parent),
    ui(new Ui::Contenu)
{
    ui->setupUi(this);
    mod = m;
}

Contenu::~Contenu()
{
    delete ui;
}

void Contenu::on_connexionButton_clicked()
{
    std::string pass = QStackedWidget::findChild<QLineEdit*>("connexionMDP")->text().toStdString();
    std::string ident = QStackedWidget::findChild<QLineEdit*>("connexionIdentifiant")->text().toStdString();
    if(mod->connexion(ident, pass)){
        if(mod->getConnect()->getType() == "Enseignant"){
            setCurrentWidget(widget(varMenuEnseignant));
        }
        if(mod->getConnect()->getType() == "Etudiant"){
            setCurrentWidget(widget(varMenuEtu));
        }
        if(mod->getConnect()->getType() == "Admin"){
            setCurrentWidget(widget(varMenuAdmin));
        }
    }
}

void Contenu::on_inscripButton_clicked()
{
    std::string pass = QStackedWidget::findChild<QLineEdit*>("inscripMDP")->text().toStdString();
    std::string ident = QStackedWidget::findChild<QLineEdit*>("inscripIdentifiant")->text().toStdString();
    mod->inscription(ident,pass);
}

void Contenu::on_b_deco_2_clicked()
{
    mod->deconnexion();
    setCurrentWidget(widget(varConnexion));
}

void Contenu::on_b_deco_3_clicked()
{
    mod->deconnexion();
    setCurrentWidget(widget(varConnexion));
}

void Contenu::on_b_deco_clicked()
{
    mod->deconnexion();
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

void Contenu::on_b_creaCour_clicked()
{
    std::string titre = QStackedWidget::findChild<QLineEdit*>("f_titreCour")->text().toStdString();
    std::string description = QStackedWidget::findChild<QPlainTextEdit*>("f_desc")->toPlainText().toStdString();
    std::string nbHeures = QStackedWidget::findChild<QLineEdit*>("f_nhCours")->text().toStdString();
    std::string nbPlaces = QStackedWidget::findChild<QLineEdit*>("f_plCours")->text().toStdString();

    if(titre != "" && description != "" && nbHeures != "" && nbPlaces != ""){
        mod->creaCours(titre,nbHeures,nbPlaces,description);
        QStackedWidget::findChild<QLineEdit*>("f_plCours")->setText("");
        QStackedWidget::findChild<QLineEdit*>("f_titreCour")->setText("");
        QStackedWidget::findChild<QLineEdit*>("f_nhCours")->setText("");
        QStackedWidget::findChild<QPlainTextEdit*>("f_desc")->setPlainText("");
    }
}
