#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_clicked(){
    // Uzimamo odabrane podatke podatke
    int diff = 0;
    if(ui->radioButton->isChecked())
        diff = 1;
    else if(ui->radioButton_2->isChecked())
        diff = 2;
    else if (ui->radioButton_3->isChecked())
        diff = 3;

    // Ako nismo cekirali nijedno dugme, ispisujemo poruku korisniku i
    // cekamo da ga cekira.
    if(diff == 0){
        QMessageBox::information(this, "Radio Button", "Moramo odabrati tezinu treninga!");
        return;
    }


    // Upisujemo duzinu treninga u fajl nivo.txt
    QString str = QDir::currentPath() + "/podaci/tekstualniFajlovi/nivo.txt";
    QFile file(str);
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text)){
        qDebug() << "Cannot open the File nivo.txt";
        return;
    }
    QTextStream out(&file);
    out << diff << endl;
    out << 1 << endl;
    file.close();

    // sakrivamo pocetni prozor
    hide();
    // pravimo naredni prozor i pozivamo ga
    drugiProzor = new drugiprozor(this);
    drugiProzor->show();
}

