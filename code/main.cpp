#include "mainwindow.h"
#include "drugiprozor.h"
#include <QApplication>
#include <QDir>
#include <QDebug>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    drugiprozor dp;

    // otvaramo fajl nivo.txt i ako je u njemu != 0
    // prelazimo odmah na drugi prozor!

    int val;
    // Upisujemo duzinu treninga u fajl nivo.txt
    QString str = QDir::currentPath() + "/podaci/tekstualniFajlovi/nivo.txt";
    QFile file(str);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "Cannot open the File nivo.txt";
        return -1;
    }

    QTextStream in(&file);
    in >> val;
    file.close();

    // Ako je vrednost != 0, znaci da smo vec odabrali
    // tezinu treninga i odmah idemo na drugi prozor
    if(val > 0){
        dp.show();
    } else {
        w.show();
    }
    return a.exec();
}
