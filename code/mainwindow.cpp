#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <QDir>
#include <QWidget>
#include <QPalette>
#include <QDesktopWidget>
#include <QPixmap>

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

    QPixmap bkgnd(":/podaci/slike/pozadina9.png");
    // definsiemo velicinu pozadine
    QSize sizeBck;
    QDesktopWidget dw;
    sizeBck.setWidth(dw.width() - 65);
    sizeBck.setHeight(dw.height());

    bkgnd = bkgnd.scaled(sizeBck, Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    // dodajemo minimize dugme
    this->setWindowFlags(windowFlags() & Qt::WindowMinimizeButtonHint);

    // definisemo ime programa
    this->setWindowTitle("Glavni program");
    ui->label_3->setVisible(false);

    // definisemo pozadinu za help dugme
    ui->pushButton_5->setAutoFillBackground(true);
    ui->pushButton_5->setIcon(QIcon(":/podaci/slike/help.png"));
    ui->pushButton_5->setIconSize(QSize(30,30));
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
    dp.setFixedSize(dw.width()-65, dw.height());
    dp.exec();
}

// klik na dugme "pocetnik"
void MainWindow::on_pushButton_2_clicked()
{
    tezina = 1;

    ui->pushButton_2->setStyleSheet({"background-color:#FF851B;; border-radius: 10px; font-size:18px;"});
    ui->pushButton_3->setStyleSheet({"background-color:aqua; border-radius: 10px; font-size:18px;"});
    ui->pushButton_4->setStyleSheet({"background-color:aqua; border-radius: 10px; font-size:18px;"});
}

// klik na dugme "prosek"
void MainWindow::on_pushButton_3_clicked()
{
   tezina = 2;

   ui->pushButton_3->setStyleSheet({"background-color:#FF851B;; border-radius: 10px; font-size:18px;"});
   ui->pushButton_2->setStyleSheet({"background-color:aqua; border-radius: 10px; font-size:18px;"});
   ui->pushButton_4->setStyleSheet({"background-color:aqua; border-radius: 10px; font-size:18px;"});
}

// klik na dugme "profesionalac"
void MainWindow::on_pushButton_4_clicked()
{
    tezina = 3;

    ui->pushButton_4->setStyleSheet({"background-color:#FF851B;; border-radius: 10px; font-size:18px;"});
    ui->pushButton_2->setStyleSheet({"background-color:aqua; border-radius: 10px; font-size:18px;"});
    ui->pushButton_3->setStyleSheet({"background-color:aqua; border-radius: 10px; font-size:18px;"});
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

