#include "drugiprozor.h"
#include "ui_drugiprozor.h"
#include "QMessageBox"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDir>

drugiprozor::drugiprozor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drugiprozor)
{
    ui->setupUi(this);
}

drugiprozor::~drugiprozor()
{
    delete ui;
}

void drugiprozor::on_pushButton_2_clicked()
{
   // sakrivamo pocetni prozor
   hide();
   // pravimo naredni prozor i pozivamo ga
   stat = new statistika(this);
   stat->show();
}

// Definisemo desavanja kada kliknemo na dugme za izlaz
void drugiprozor::on_pushButton_3_clicked()
{
    drugiprozor::close();
}

// Definisemo ponasanje kad klinemo na dugme "posalji rezultate"
void drugiprozor::on_pushButton_clicked()
{
    // Uzimamo podatke koje smo uneli u checkBox-ove
    int trbusnjaci;
    int sklekovi;
    int cucnjevi;
    QString t = ui->textEdit->toPlainText();
    QString s = ui->textEdit_2->toPlainText();
    QString c = ui->textEdit_3->toPlainText();

    // Ako nismo popunili sva polja, necemo uneti podatke,
    // vec cemo dati poruku korisniku i sacekati da sve popuni
    if(t == nullptr || s == nullptr || c == nullptr){
        QMessageBox::information(this, "Rezultati", "Nismo popunili sva polja!");
    } else {
        // Posto su podaci koje smoucitali tipa QString,
        // kastujemo ih int.
        trbusnjaci = t.toInt();
        sklekovi = s.toInt();
        cucnjevi = c.toInt();
        if (trbusnjaci < 0 || sklekovi < 0 || cucnjevi < 0){
            QMessageBox::information(this, "Rezultati", "Unete vrednosti moraju biti pozitivne!");
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

        // pismeo podatke u fajlove
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
        QMessageBox::information(this, "Rezultati", "Uspesno smo uneli rezultate!");
    }

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
        QMessageBox::information(this, "Radio Button", "Moramo odabrati tezinu treninga!");
        return;
    }

}

