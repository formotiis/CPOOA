#ifndef INISDER_H
#define INISDER_H

#include <QWidget>

namespace Ui {
class Inisder;
}

class Inisder : public QWidget
{
    Q_OBJECT

public:
    explicit Inisder(QWidget *parent = 0);
    ~Inisder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Inisder *ui;
};

#endif // INISDER_H
