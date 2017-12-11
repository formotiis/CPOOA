#ifndef MENUETUDIANT_H
#define MENUETUDIANT_H

#include <QWidget>

namespace Ui {
class MenuEtudiant;
}

class MenuEtudiant : public QWidget
{
    Q_OBJECT

public:
    explicit MenuEtudiant(QWidget *parent = 0);
    ~MenuEtudiant();

private:
    Ui::MenuEtudiant *ui;
};

#endif // MENUETUDIANT_H
