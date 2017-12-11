#ifndef FORMCREACOURS_H
#define FORMCREACOURS_H

#include <QWidget>

namespace Ui {
class FormCreaCours;
}

class FormCreaCours : public QWidget
{
    Q_OBJECT

public:
    explicit FormCreaCours(QWidget *parent = 0);
    ~FormCreaCours();

private:
    Ui::FormCreaCours *ui;
};

#endif // FORMCREACOURS_H
