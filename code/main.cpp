#include <QApplication>
#include <QDir>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDesktopWidget>

#include "mainwindow.h"
#include "drugiprozor.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    drugiprozor dp;

    // otvaramo fajl nivo.txt i ako je u njemu != 0
    // prelazimo odmah na drugi prozor!
    int val;
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
    QDesktopWidget dw;
    if(val > 0){
        dp.setFixedSize(dw.width(), dw.height());
        dp.setModal(true);
        dp.exec();
    } else {
        w.setFixedSize(dw.width(), dw.height());
        w.showMaximized();
    }
    return a.exec();
}
