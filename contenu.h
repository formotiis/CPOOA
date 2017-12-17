#ifndef CONTENU_H
#define CONTENU_H

#include <QStackedWidget>
#include "mainwindow.h"
#include <iostream>

namespace Ui {
class Contenu;
}

class Contenu : public QStackedWidget
{
    Q_OBJECT

public:
    Contenu(QWidget *parent, Modele *m);
    ~Contenu();

private slots:
    /**
     * @brief on_connexionButton_clicked dans widget connexion, connexion d'une personne
     */
    void on_connexionButton_clicked();

    /**
     * @brief on_inscripButton_clicked dans widget inscription , inscription d'une personne
     */
    void on_inscripButton_clicked();

    /**
     * @brief on_b_deco_2_clicked : deconnexion
     */
    void on_b_deco_2_clicked();

    /**
     * @brief on_b_deco_3_clicked : deconnexion
     */
    void on_b_deco_3_clicked();

    /**
     * @brief on_b_deco_clicked : deconnexion
     */
    void on_b_deco_clicked();

    /**
     * @brief on_b_addcours_clicked : dans menu enseignant, aller au widget ajouter un cour
     */
    void on_b_addcours_clicked();

    /**
     * @brief on_b_cancel_clicked : retour au menu enseignant dans ajouter un cour
     */
    void on_b_cancel_clicked();

    /**
     * @brief on_b_creaCour_clicked : creer un cour avec les données saisie
     */
    void on_b_creaCour_clicked();

    void on_b_acccours_2_clicked();

    void on_b_cancel_2_clicked();

private:
    Ui::Contenu *ui;
    Modele* mod;
    //numéro des widgets
    const int varConnexion = 0;
    const int varMenuAdmin = 1;
    const int varMenuEtu = 2;
    const int varMenuEnseignant = 3;
    const int varAjoutCour = 4;
    const int varAccepterCour = 5;
};

#endif // CONTENU_H
