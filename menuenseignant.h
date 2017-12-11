#ifndef MENUENSEIGNANT_H
#define MENUENSEIGNANT_H

#include <QWidget>

namespace Ui {
class MenuEnseignant;
}

class MenuEnseignant : public QWidget
{
    Q_OBJECT

public:
    explicit MenuEnseignant(QWidget *parent = 0);
    ~MenuEnseignant();

private:
    Ui::MenuEnseignant *ui;
};

#endif // MENUENSEIGNANT_H
