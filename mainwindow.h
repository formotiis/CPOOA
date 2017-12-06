#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "modele.h"

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
    void on_connexionButton_clicked();

    void on_inscripButton_clicked();

    void on_pageConnexion_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
