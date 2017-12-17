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

private:
    Ui::Contenu *ui;
};

#endif // CONTENU_H
