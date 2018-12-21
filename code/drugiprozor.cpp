#include "drugiprozor.h"
#include "ui_drugiprozor.h"
#include "stopwatch.h"
#include <QDebug>
#include <iostream>
#include <QFile>
#include <QDir>

#include <QPushButton>
#include <QPlainTextEdit>
#include <QTime>
#include <QTimer>


drugiprozor::drugiprozor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drugiprozor),
    watch(new Stopwatch()){

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
       //qDebug()<<tezina;
   // povecavamo broj dana za 1 i upisujemo ponovo u fajl

    ui->setupUi(this);
    QObject::connect(ui->startStopButton, &QPushButton::clicked,
                     this, &drugiprozor::startStopTimer);
    QObject::connect(ui->resetButton, &QPushButton::clicked,
                     this, &drugiprozor::resetTimer);

     ui->lcdNumber->display(1);
     //dan++;
     //in << tezina << endl << dan << endl;
     //fajl.close();
     QTimer *timer = new QTimer(this);
     connect(timer, SIGNAL(timeout()), this, SLOT(update()));
     timer->start(10);
}

drugiprozor::~drugiprozor(){
    delete ui;
    delete watch;
}

void drugiprozor::startStopTimer() {
    if(watch->isRunning()) {
        ui->startStopButton->setText("Restart");
        watch->pause();
    }
    else {
        ui->startStopButton->setText("Pause");
        watch->start();
    }
}

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

    QString stotinke=ui->hundredthsText->toPlainText();
    QString sekundi=ui->secondsText->toPlainText();
    QString minuti =ui->minutesText->toPlainText();


    QString Putanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/trcanje.txt";
    QFile trcanje(Putanja);
    if(!trcanje.open(QIODevice::ReadWrite | QIODevice::Append)){
        qDebug() << "Cannot open the File trcanje.txt";
        return;
    }
    QTextStream outtrcanje(&trcanje);

    outtrcanje << minuti<<sekundi<<stotinke<< endl;
    trcanje.close();
    hide();

    unesipodatke = new unesiPodatke(this);
    unesipodatke->show();
}
