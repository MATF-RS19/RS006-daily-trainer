#include "statistika.h"
#include "ui_statistika.h"

statistika::statistika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistika)
{
    ui->setupUi(this);
}

statistika::~statistika()
{
    delete ui;
}
