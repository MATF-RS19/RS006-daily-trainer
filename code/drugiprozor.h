#ifndef DRUGIPROZOR_H
#define DRUGIPROZOR_H

#include <QDialog>
#include "statistika.h"

namespace Ui {
class drugiprozor;
}

class drugiprozor : public QDialog
{
    Q_OBJECT

public:
    explicit drugiprozor(QWidget *parent = nullptr);
    ~drugiprozor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::drugiprozor *ui;
    statistika *stat;
};

#endif // DRUGIPROZOR_H
