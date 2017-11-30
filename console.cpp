#include "console.h"
#include "ui_console.h"

Console::Console(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Console)
{
    ui->setupUi(this);
}

Console::~Console()
{
    delete ui;
}
