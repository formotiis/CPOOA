#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "modele.h"
#include "contenu.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Modele* mod;
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
    //numéro des widgets
    const int varConnexion = 0;
    const int varMenuAdmin = 1;
    const int varMenuEtu = 2;
    const int varMenuEnseignant = 3;
};

#endif // MAINWINDOW_H
