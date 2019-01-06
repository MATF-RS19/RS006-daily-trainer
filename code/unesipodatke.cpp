#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QPushButton>
#include <QPlainTextEdit>
#include <cctype>
#include <QDesktopWidget>

#include "unesipodatke.h"
#include "ui_unesipodatke.h"
#include "statistika.h"
#include "drugiprozor.h"
#include "mainwindow.h"

static bool popunjeniPodaci = false;

unesiPodatke::unesiPodatke(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::unesiPodatke)
{
    ui->setupUi(this);

    // dodajemo minimize dugme
    this->setWindowFlags(windowFlags() & Qt::WindowMinimizeButtonHint);


    this->setWindowTitle("Unesite podatke sa treninga");
    ui->label_3->setVisible(false);
}

unesiPodatke::~unesiPodatke()
{
    delete ui;
}

void unesiPodatke::on_pushButton_clicked()
{
    // Uzimamo vrednosti iz RadioButton-a
    // i smestamo u promenljivu difficult
    QString difficult;
    bool rButton = false;
    if(ui->radioButton->isChecked()){
        difficult = "lako";
        rButton = true;
    }
    else if(ui->radioButton_2->isChecked()){
        difficult = "srednje";
        rButton = true;
    } else if (ui->radioButton_3->isChecked()){
        difficult = "tesko" ;
        rButton = true;
    }

    // Ako nismo cekirali nijedno dugme, ispisujemo poruku korisniku i
    // cekamo da ga cekira.
    if(!rButton){
        QMessageBox::information(this, "Radio Button", "Moramo odabrati težinu treninga!");
        return;
        popunjeniPodaci = false;
    }

    // Uzimamo podatke koje smo uneli u checkBox-ove
    int trbusnjaci;
    int sklekovi;
    int cucnjevi;
    QString t = ui->textEdit->toPlainText();
    QString s = ui->textEdit_2->toPlainText();
    QString c = ui->textEdit_3->toPlainText();

    // Ako nismo popunili sva polja, necemo uneti podatke,
    // vec cemo dati poruku korisniku i sacekati da sve popuni
    if(t == nullptr || s == nullptr || c == nullptr ){
        QMessageBox::information(this, "Rezultati", "Nismo popunili sva polja!");
        popunjeniPodaci = false;
        return;
    } else {
        // Posto su podaci koje smoucitali tipa QString,
        // kastujemo ih int.
        trbusnjaci = t.toInt();
        sklekovi = s.toInt();
        cucnjevi = c.toInt();
        if (trbusnjaci < 0 || sklekovi < 0 || cucnjevi < 0){
            QMessageBox::information(this, "Rezultati", "Unete vrednosti moraju biti pozitivne!");
            popunjeniPodaci = false;
            return ;
        }

        // definisemo putanje do fajlova
        QString sklekoviPutanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/sklekovi.txt";
        QString trbusniPutanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/trbusnjaci.txt";
        QString cucnjeviPutanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/cucnjevi.txt";

        // otvaramo fajlove
        QFile sklekoviFajl(sklekoviPutanja);
        QFile trbusniFajl(trbusniPutanja);
        QFile cucnjeviFajl(cucnjeviPutanja);

        // proveravamo da li su fajlovi uspesno otvoreni
        if(!sklekoviFajl.open(QIODevice::WriteOnly | QIODevice::Append)){
            qDebug() << "Cannot open the File sklekovi.txt";
            return;
        }
        if(!trbusniFajl.open(QIODevice::WriteOnly | QIODevice::Append)){
            qDebug() << "Cannot open the File trbusnjaci.txt";
            return;
        }
        if(!cucnjeviFajl.open(QIODevice::ReadWrite | QIODevice::Append)){
            qDebug() << "Cannot open the File cucnjevi.txt";
            return;
        }

        // pisemo podatke u fajlove
        QTextStream outSklekovi(&sklekoviFajl);
        outSklekovi << sklekovi << endl;
        sklekoviFajl.close();

        QTextStream outTrbusni(&trbusniFajl);
        outTrbusni << trbusnjaci << endl;
        trbusniFajl.close();

        QTextStream outCucnjevi(&cucnjeviFajl);
        outCucnjevi << cucnjevi << endl;
        cucnjeviFajl.close();

        // Ako se sve izvrsilo kako treba iskace prozor na kome pise da smo uspesno uneli rezultate
        if(popunjeniPodaci){
            QMessageBox::information(this, "Rezultati", "Već smo uneli rezultate!");
        } else {
            QMessageBox::information(this, "Rezultati", "Uspešno smo uneli rezultate!");
            popunjeniPodaci = true;
        }
    }


    // u zavisnosti od unetih podataka podesavamo parametre za sledece vezbe
    QString putanja = QDir::currentPath() + "/podaci/tekstualniFajlovi/nivo.txt";
    QFile fajl(putanja);
    if(!fajl.open(QIODevice::ReadWrite)){
        qDebug() << "Cannot open the File nivo.txt";
        return;
    }
    int nivo = fajl.readLine().toInt();
    int danTreninga = fajl.readLine().toInt();
    int indikatorRedaTreninga = fajl.readLine().toInt();

    danTreninga++;
    if(difficult == "lako")
        indikatorRedaTreninga += 2;
    else if (difficult == "srednje")
        indikatorRedaTreninga += 1;
    fajl.close();

    // Upisujemo nove podatke u nivo.txt
    QFile fajl2(putanja);
    if(!fajl2.open(QIODevice::ReadWrite | QIODevice::Truncate)){
        qDebug() << "Cannot open the File nivo.txt";
        return;
    }
    QTextStream out(&fajl2);
    out << nivo << endl;
    out << danTreninga << endl;
    out << indikatorRedaTreninga;
    fajl2.close();
}

// klik na dugme "Statistika"
void unesiPodatke::on_pushButton_2_clicked()
{

   hide();

   QDesktopWidget dw;
   statistika s;

   s.setModal(true);
   s.setFixedSize(dw.width(), dw.height());
   s.exec();

}

// klik na dugme za izlaz iz aplikacije
void unesiPodatke::on_pushButton_3_clicked()
{
    if(!popunjeniPodaci){
        QMessageBox::information(this, "Nepopunjeni podaci",
                    "Da bismo promenili težinu treninga, moramo prvo uneti podatke sa današnjeg treninga!");
        return;
    }

    exit(EXIT_SUCCESS);
}

// definisemo akciju kada se klikne na "help" dugme
void unesiPodatke::on_pushButton_5_clicked()
{
    if(ui->label_3->isHidden() ){
        ui->label_3->setWindowOpacity(0.2);
        ui->label_3->setVisible(true);
        ui->label_3->setWordWrap(true);
    } else {
        ui->label_3->setVisible(false);
    }
}

// definisemo vracanje unazad na interfejs za unosenje podataka
void unesiPodatke::on_pushButton_4_clicked()
{
    hide();

    QDesktopWidget wid;
    drugiprozor dp;

    dp.setFixedSize(wid.width(), wid.height());
    dp.setModal(true);
    dp.exec();
}

// definisemo vracanje na prvi interfejs i
// menjanje tezine treninga
void unesiPodatke::on_pushButton_6_clicked()
{
    if(!popunjeniPodaci){
        QMessageBox::information(this, "Nepopunjeni podaci",
                    "Da bismo promenili težinu treninga, moramo prvo uneti podatke sa današnjeg treninga!");
        return;
    }

    // dodati za vracanje unazad i promenu tezine treninga
    MainWindow mw;
    mw.showMaximized();
}

