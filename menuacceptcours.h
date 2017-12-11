#ifndef MENUACCEPTCOURS_H
#define MENUACCEPTCOURS_H

#include <QWidget>

namespace Ui {
class MenuAcceptCours;
}

class MenuAcceptCours : public QWidget
{
    Q_OBJECT

public:
    explicit MenuAcceptCours(QWidget *parent = 0);
    ~MenuAcceptCours();

private:
    Ui::MenuAcceptCours *ui;
};

#endif // MENUACCEPTCOURS_H
