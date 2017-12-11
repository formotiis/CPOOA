#ifndef MENUENSEIGNANT_H
#define MENUENSEIGNANT_H

#include <QWidget>
#include "modele.h"
#include "mainwindow.h"

namespace Ui {
class MenuEnseignant;
}

class MenuEnseignant : public QWidget
{
    Q_OBJECT

public:
    MenuEnseignant(QWidget *parent,Modele* m);
    ~MenuEnseignant();

private slots:
    void on_b_deco_clicked();

private:
    Ui::MenuEnseignant *ui;
    Modele* mod;
};

#endif // MENUENSEIGNANT_H
