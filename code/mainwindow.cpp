#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <QDir>
#include <QWidget>
#include <QPalette>
#include <QDesktopWidget>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "drugiprozor.h"
#include "statistika.h"

// posto tezinu treninga koristimo u vise funkcija,
// da je ne bismo mnogo puta citali iz fajla,
// najbolje je definisati kao staticku
static int tezina = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    this->setWindowTitle("Glavni program");
    ui->label_3->setVisible(false);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_clicked(){

    // Upisujemo tezinu treninga u fajl nivo.txt
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

    // prelazimo na sledeci prozor gde ce nam se
    // prikazati vezbe koje korisnik treba da radi
    hide();
    QDesktopWidget dw;

    drugiprozor dp;
    dp.setFixedSize(dw.width(), dw.height());
    dp.setModal(true);
    dp.exec();
}

// klik na dugme "pocetnik"
void MainWindow::on_pushButton_2_clicked()
{
    tezina = 1;

    ui->pushButton_2->setStyleSheet({"background-color:red;"});
    ui->pushButton_3->setStyleSheet({"background-color:aqua;"});
    ui->pushButton_4->setStyleSheet({"background-color:aqua;"});
}

// klik na dugme "prosek"
void MainWindow::on_pushButton_3_clicked()
{
   tezina = 2;

   ui->pushButton_3->setStyleSheet({"background-color:red;"});
   ui->pushButton_2->setStyleSheet({"background-color:aqua;"});
   ui->pushButton_4->setStyleSheet({"background-color:aqua;"});
}

// klik na dugme "profesionalac"
void MainWindow::on_pushButton_4_clicked()
{
    tezina = 3;

    ui->pushButton_4->setStyleSheet({"background-color:red;"});
    ui->pushButton_2->setStyleSheet({"background-color:aqua;"});
    ui->pushButton_3->setStyleSheet({"background-color:aqua;"});
}

// klik na "help" dugme
void MainWindow::on_pushButton_5_clicked()
{
    if(ui->label_3->isHidden() ){
        ui->label_3->setVisible(true);
        ui->label_3->setWordWrap(true);
    } else {
        ui->label_3->setVisible(false);
    }
}
