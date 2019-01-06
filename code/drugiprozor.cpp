#include <QDebug>
#include <iostream>
#include <QFile>
#include <QDir>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QTime>
#include <QTimer>
#include <QMovie>
#include <QDesktopWidget>

#include "stopwatch.h"
#include "drugiprozor.h"
#include "ui_drugiprozor.h"
#include "unesipodatke.h"

drugiprozor::drugiprozor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drugiprozor),
    watch(new Stopwatch()){

    ui->setupUi(this);
    QObject::connect(ui->startStopButton, &QPushButton::clicked,
                     this, &drugiprozor::startStopTimer);
    QObject::connect(ui->resetButton, &QPushButton::clicked,
                     this, &drugiprozor::resetTimer);
     // dodajemo minimize dugme
     this->setWindowFlags(windowFlags() & Qt::WindowMinimizeButtonHint);
     //tajmer za stopericu
     QTimer *timer = new QTimer(this);
     connect(timer, SIGNAL(timeout()), this, SLOT(update()));
     timer->start(10);
      // prvi gif za cucnjeve
      QMovie *movie1 = new QMovie(":/podaci/gifovi/cucnjevi.gif");
      QSize size(150, 100);
      movie1->setScaledSize(size);
      movie1->setSpeed(100);
      if (!movie1->isValid())
      {
          qDebug() << ".gif file is not valid!" ;
          return;
      }
      ui->label_9->setMovie(movie1);
      movie1->start();

      // drugi gif za trbusnjake
      QMovie *movie2 = new QMovie(":/podaci/gifovi/trbusnjaci.gif");
      movie2->setScaledSize(size);
      if (!movie2->isValid())
      {
          qDebug() << ".gif file is not valid!" ;
          return;
      }
      ui->label_8->setMovie(movie2);
      movie2->start();

      // treci gif za sklekove
      QMovie *movie3 = new QMovie(":/podaci/gifovi/sklekovi.gif");
      movie3->setScaledSize(size);
      if (!movie3->isValid())
      {
          qDebug() << ".gif file is not valid!" ;
          return;
      }
      ui->label_5->setMovie(movie3);
      movie3->start();
      // citamo podatke iz fajla i upisujemo u deo za treninge
      QString putanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/nivo.txt";
      QFile fajl(putanja);
      if(!fajl.open(QIODevice::ReadOnly)){
          qDebug() << "Cannot open the File nivo.txt";
          return;
      }
      int nivo = fajl.readLine().toInt();
      int danTreninga = fajl.readLine().toInt();
      int indikatorRedaTreninga = fajl.readLine().toInt();

      fajl.close();

      // gledamo da li korisnik zeli da ima slobodan dan
      if((danTreninga==0) || ((nivo==1) && (nivo%4!=0)))
                ui->pushButton_2->setVisible(false);
            if((nivo==2) && (nivo%5!=0))
                ui->pushButton_2->setVisible(false);
            if((nivo==3) && (nivo%6!=0))
                ui->pushButton_2->setVisible(false);
     // u zavisnosti od nivoa, otvaramo odgovarajuci fajl sa vezbama
     QString s;
     if(nivo == 1){
         s = "Lako";
     } else if(nivo == 2){
         s = "Srednje";
     } else if(nivo == 3){
         s = "Tesko";
     }

     // otvaramo fajl u zavisnosti od tezine treninga, na primer vezbeLako.txt
     QString danasnjiTrening = QDir::currentPath() + "/podaci/tekstualniFajlovi/vezbe" + s + ".txt";
     QFile fajlTrening(danasnjiTrening);
     if(!fajlTrening.open(QIODevice::ReadWrite)){
         qDebug() << "Cannot open the File .txt";
         return;
     }

     // u zavisnosti od dana treninga citamo podatke iz n-tog reda, gde je n dan treninga
     QString str;
     QString sklekovi, trbusni, cucnjevi;
     int line = 1;
     while(!fajlTrening.atEnd()){
         if(line == indikatorRedaTreninga){
             str = fajlTrening.readLine();
             QStringList podaci = str.split(" ");
             sklekovi = podaci[0];
             trbusni = podaci[1];
             cucnjevi = podaci[2];
             break;
         } else {
             fajlTrening.readLine();
             line++;
         }
     }
     fajlTrening.close();

     // popunjavamo polja na ekranu na osnovu
     // procitanih vrednosti iz fajlova
     ui->label_11->setText(sklekovi);
     ui->label_12->setText(trbusni);
     ui->label_13->setText(cucnjevi);

     ui->lcdNumber->display(danTreninga);

     this->setWindowTitle("Plan treninga za danas");
}

drugiprozor::~drugiprozor(){
    delete ui;
    delete watch;
}

// dugme za start i stop na stoperici
void drugiprozor::startStopTimer() {
    if(watch->isRunning()) {
        ui->startStopButton->setText("Continue");
        watch->pause();
    }
    else {
        ui->startStopButton->setText("Pause");
        watch->start();
    }
}

// dugme za resetovanje stoperice
void drugiprozor::resetTimer() {
    ui->startStopButton->setText("Start");
    ui->hundredthsText->setText("00");
    ui->secondsText->setText("00");
    ui->minutesText->setText("00");
    watch->reset();
}

void drugiprozor::update()
{
    if(watch->isRunning())
    {
        qint64 time = watch->getTime();
        int h = time / 1000 / 60 / 60;
        int m = (time / 1000 / 60) - (h * 60);
        int s = (time / 1000) - (m * 60);
        int ms = time - ( s + ( m + ( h * 60)) * 60) * 1000;
        int ms_dis = ms / 10;
        if(ms_dis < 10) {
            ui->hundredthsText->setText(QStringLiteral("0%1").arg(ms_dis));
        }
        else {
            ui->hundredthsText->setText(QStringLiteral("%1").arg(ms_dis));
        }
        if(s < 10) {
            ui->secondsText->setText(QStringLiteral("0%1").arg(s));
        }
        else {
            ui->secondsText->setText(QStringLiteral("%1").arg(s));
        }
        if(m < 10) {
            ui->minutesText->setText(QStringLiteral("0%1").arg(m));
        }
        else {
            ui->minutesText->setText(QStringLiteral("%1").arg(m));
        }
    }
}


void drugiprozor::on_pushButton_clicked(){

    QString minuti = ui->minutesText->toPlainText();

    if(minuti != "00"){
        QString Putanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/trcanje.txt";
        QFile trcanje(Putanja);
        if(!trcanje.open(QIODevice::ReadWrite | QIODevice::Append)){
            qDebug() << "Cannot open the File trcanje.txt";
            return;
        }
        QTextStream outtrcanje(&trcanje);

        outtrcanje << minuti << endl;
        trcanje.close();
    }
    // sakrivamo trenutni prozor
    hide();

    // definisemo i pozivamo sledeci prozor
    QDesktopWidget dw;
    unesiPodatke up;

    up.setModal(true);
    up.setFixedSize(dw.width(), dw.height());
    up.exec();
}

void drugiprozor::on_pushButton_2_clicked()
{
    drugiprozor::close();
}
