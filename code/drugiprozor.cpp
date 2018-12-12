#include "drugiprozor.h"
#include "ui_drugiprozor.h"
#include <QDebug>
#include <iostream>
#include <QFile>
#include <QDir>

drugiprozor::drugiprozor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drugiprozor)
{
    // kod koji nije hteo da radi, a koji je trebao da ubaci vrednost u lcd ekran
    //koji definise dan treninga

    // ucitavamo broj treninga i dodajemo ga u nas lcd ekran
    //QString putanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/nivo.txt";
    //QFile fajl(putanja);
    //if(!fajl.open(QIODevice::ReadWrite | QIODevice::Append)){
        //qDebug() << "Cannot open the File sklekovi.txt";
        //return;
    //}
    //QTextStream in(&fajl);
    //int tezina, dan;
    //in >> tezina;
    //in >> dan;
    //ui->lcdNumber->display(dan);


    // povecavamo broj dana za 1 i upisujemo ponovo u fajl
    //dan++;
    //in << tezina << endl << dan << endl;
    //fajl.close();

    ui->setupUi(this);
}

drugiprozor::~drugiprozor()
{
    delete ui;
}
void drugiprozor::on_pushButton_clicked()
{
    // prikazujemo naredni prozor
    hide();

    unesipodatke = new unesiPodatke(this);
    unesipodatke->show();
}
