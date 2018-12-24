#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <QDir>
#include <QWidget>
#include <QPalette>

static int tezina = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    this->setWindowTitle("Glavni program");
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_clicked(){
    // Upisujemo duzinu treninga u fajl nivo.txt
    QString str = QDir::currentPath() + "/podaci/tekstualniFajlovi/nivo.txt";
    QFile file(str);
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text)){
        qDebug() << "Cannot open the File nivo.txt";
        return;
    }
    QTextStream out(&file);
    if(tezina == 0){
        QMessageBox::information(this, "Push Button", "Moramo odabrati nivo!");
        return;
    }

    out << tezina << endl;
    out << 1 << endl;   // upisujemo dan treninga
    out << 1 << endl;   // upisujemo indikator dana treninga

    file.close();

    // sakrivamo pocetni prozor
    hide();
    // pravimo naredni prozor i pozivamo ga
    drugiProzor = new drugiprozor(this);
    drugiProzor->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    tezina = 1;

    ui->pushButton_2->setStyleSheet({"background-color:red;"});
    ui->pushButton_3->setStyleSheet({"background-color:aqua;"});
    ui->pushButton_4->setStyleSheet({"background-color:aqua;"});

}

void MainWindow::on_pushButton_3_clicked()
{
   tezina = 2;

   ui->pushButton_3->setStyleSheet({"background-color:red;"});
   ui->pushButton_2->setStyleSheet({"background-color:aqua;"});
   ui->pushButton_4->setStyleSheet({"background-color:aqua;"});
}

void MainWindow::on_pushButton_4_clicked()
{
    tezina = 3;

    ui->pushButton_4->setStyleSheet({"background-color:red;"});
    ui->pushButton_2->setStyleSheet({"background-color:aqua;"});
    ui->pushButton_3->setStyleSheet({"background-color:aqua;"});
}
