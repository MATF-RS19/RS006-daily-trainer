#ifndef UNESIPODATKE_H
#define UNESIPODATKE_H

#include <QDialog>
#include "statistika.h"


namespace Ui {
class unesiPodatke;
}

class unesiPodatke : public QDialog{
    Q_OBJECT

public:
    explicit unesiPodatke(QWidget *parent = nullptr);
    ~unesiPodatke();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::unesiPodatke *ui;


};

#endif // UNESIPODATKE_H
