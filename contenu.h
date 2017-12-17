#ifndef CONTENU_H
#define CONTENU_H

#include <QStackedWidget>
#include "mainwindow.h"

namespace Ui {
class Contenu;
}

class Contenu : public QStackedWidget
{
    Q_OBJECT

public:
    explicit Contenu(QWidget *parent = 0);
    ~Contenu();

private slots:
    void on_connexionButton_clicked();

    void on_inscripButton_clicked();

    void on_b_deco_2_clicked();

    void on_b_deco_3_clicked();

    void on_b_deco_clicked();

    void on_b_addcours_clicked();

    void on_b_cancel_clicked();

private:
    Ui::Contenu *ui;
    //numéro des widgets
    const int varConnexion = 0;
    const int varMenuAdmin = 1;
    const int varMenuEtu = 2;
    const int varMenuEnseignant = 3;
    const int varAjoutCour = 4;
};

#endif // CONTENU_H
