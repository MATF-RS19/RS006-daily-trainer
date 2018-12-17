#ifndef UNESIPODATKE_H
#define UNESIPODATKE_H

#include <QDialog>
#include "statistika.h"


namespace Ui {
class unesiPodatke;
}

class unesiPodatke : public QDialog
{
    Q_OBJECT

public:
    explicit unesiPodatke(QWidget *parent = nullptr);
    ~unesiPodatke();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::unesiPodatke *ui;
    statistika *s;

};

#endif // UNESIPODATKE_H
