#ifndef CONTENU_H
#define CONTENU_H

#include <QStackedWidget>

namespace Ui {
class Contenu;
}

class Contenu : public QStackedWidget
{
    Q_OBJECT

public:
    explicit Contenu(QWidget *parent = 0);
    ~Contenu();

private:
    Ui::Contenu *ui;
};

#endif // CONTENU_H
