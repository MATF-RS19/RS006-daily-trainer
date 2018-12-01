#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Definisemo ponasanje kad kliknemo na dugme "Zapocni trening"
void MainWindow::on_pushButton_clicked()
{
    // sakrivamo pocetni prozor
    hide();
    // pravimo naredni prozor i pozivamo ga
    drugiProzor = new drugiprozor(this);
    drugiProzor->show();
}

