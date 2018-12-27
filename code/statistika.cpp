#include "statistika.h"
#include "ui_statistika.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <QFile>
#include <QDir>
statistika::statistika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistika){
    ui->setupUi(this);
    setStyleSheet( "background-image:url(images.jpeg);" );
    statistika::makePlot(QString::fromStdString("trbusnjaci.txt"),7);

    this->setWindowTitle("Statistika");
}

statistika::~statistika(){
    delete ui;
}

void statistika::makePlot(QString ime, int dani){
    std::vector<QString> vecOfStr;
    QFile file(QDir::currentPath() + "/podaci/tekstualniFajlovi/"+ime);

     if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            std::cerr << "Cannot open the File"<<std::endl;
     }
    QTextStream in(&file);
     while (!in.atEnd()){
            QString str=in.readLine();
            vecOfStr.push_back(str);
        }
    std::vector<int> vektor;
    std::transform(vecOfStr.begin(), vecOfStr.end(), std::back_inserter(vektor),
                          [](const QString& strin) { return strin.toInt(); });
    int n= vektor.size();
    QVector<double> x(dani), y(dani);
    for (int i=0; i<dani; ++i) {
      x[i] = i;
      if(n>i)
           y[i] = vektor[i];
     else
          y[i] = 0;
}

    ui->CustomPlot->addGraph();
    ui->CustomPlot->graph(0)->setData(x, y);
    QColor color(0,0,50,120);
    ui->CustomPlot->graph()->setBrush(QBrush(color));
    ui->CustomPlot->xAxis->setLabel("Dan");
    ui->CustomPlot->yAxis->setLabel("broj vezbi");
    ui-> CustomPlot->xAxis->setRange(1, dani);
    ui->  CustomPlot->yAxis->setRange(1, *std::max_element(y.constBegin(), y.constEnd()));
    QSharedPointer<QCPAxisTickerFixed> intTicker(new QCPAxisTickerFixed);
    intTicker->setScaleStrategy(QCPAxisTickerFixed::ssNone);
    ui->CustomPlot->xAxis->setTicker(intTicker);
    intTicker->setTickStep(1.0);
    ui->CustomPlot->replot();

}


void statistika::on_comboBox_activated(const QString &arg1){
    if(arg1=="trbusnjaci"){
        if (ui->radioButton_4->isChecked())
        statistika::makePlot(QString::fromStdString("trbusnjaci.txt"),7);
   if(ui->radioButton_5->isChecked())
         statistika::makePlot(QString::fromStdString("trbusnjaci.txt"),15);
    if   (ui->radioButton_6->isChecked())
  statistika::makePlot(QString::fromStdString("trbusnjaci.txt"),30);}

    if(arg1=="sklekovi"){
        if (ui->radioButton_4->isChecked())
        statistika::makePlot(QString::fromStdString("sklekovi.txt"),7);
   if(ui->radioButton_5->isChecked())
         statistika::makePlot(QString::fromStdString("sklekovi.txt"),15);
    if   (ui->radioButton_6->isChecked())
  statistika::makePlot(QString::fromStdString("sklekovi.txt"),30);}


        if(arg1=="cucnjevi"){
            if (ui->radioButton_4->isChecked())
            statistika::makePlot(QString::fromStdString("cucnjevi.txt"),7);
       if(ui->radioButton_5->isChecked())
             statistika::makePlot(QString::fromStdString("cucnjevi.txt"),15);
        if   (ui->radioButton_6->isChecked())
      statistika::makePlot(QString::fromStdString("cucnjevi.txt"),30);}


    if(arg1=="trcanje"){
    if (ui->radioButton_4->isChecked())
    statistika::makePlot(QString::fromStdString("trcanje.txt"),7);
if(ui->radioButton_5->isChecked())
     statistika::makePlot(QString::fromStdString("trcaje.txt"),15);
if   (ui->radioButton_6->isChecked())
statistika::makePlot(QString::fromStdString("trcanje.txt"),30);}

}

void statistika::on_pushButton_clicked()
{
 //   hide();
    // pravimo naredni prozor i pozivamo ga
   // drugiProzor = new drugiprozor(this);
    //drugiProzor->show();
}

void statistika::on_radioButton_4_clicked()
{
    if(ui->comboBox->currentIndex()==0)
        statistika::makePlot(QString::fromStdString("trbusnjaci.txt"),7);
    if(ui->comboBox->currentIndex()==1)
        statistika::makePlot(QString::fromStdString("sklekovi.txt"),7);
    if(ui->comboBox->currentIndex()==2)
        statistika::makePlot(QString::fromStdString("cucnjevi.txt"),7);
    if(ui->comboBox->currentIndex()==3)
        statistika::makePlot(QString::fromStdString("trcanje.txt"),7);
}

void statistika::on_radioButton_5_clicked()
{
    if(ui->comboBox->currentIndex()==0)
        statistika::makePlot(QString::fromStdString("trbusnjaci.txt"),15);
    if(ui->comboBox->currentIndex()==1)
        statistika::makePlot(QString::fromStdString("sklekovi.txt"),15);
    if(ui->comboBox->currentIndex()==2)
        statistika::makePlot(QString::fromStdString("cucnjevi.txt"),15);
    if(ui->comboBox->currentIndex()==3)
        statistika::makePlot(QString::fromStdString("trcanje.txt"),15);
}

void statistika::on_radioButton_6_clicked()
{
    if(ui->comboBox->currentIndex()==0)
        statistika::makePlot(QString::fromStdString("trbusnjaci.txt"),30);
    if(ui->comboBox->currentIndex()==1)
        statistika::makePlot(QString::fromStdString("sklekovi.txt"),30);
    if(ui->comboBox->currentIndex()==2)
        statistika::makePlot(QString::fromStdString("cucnjevi.txt"),30);
    if(ui->comboBox->currentIndex()==3)
        statistika::makePlot(QString::fromStdString("trcanje.txt"),30);

}
