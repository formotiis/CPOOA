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
    void connecter(std::string ident, std::string pass);

private slots:
    void on_connexionButton_clicked();

    void on_inscripButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
