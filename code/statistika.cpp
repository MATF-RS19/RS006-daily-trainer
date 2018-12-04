#include "statistika.h"
#include "ui_statistika.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <QFile>
statistika::statistika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistika)
{

    ui->setupUi(this);
    statistika::makePlot();
}

statistika::~statistika()
{
    delete ui;
}

void statistika::makePlot()
{
    std::vector<QString> vecOfStr;
    //std::ifstream in("sklekovi.txt");
    QFile file(":/resource/data/sklekovi.txt");

     if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            std::cerr << "Cannot open the File"<<std::endl;

        }


        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString str=in.readLine();
            vecOfStr.push_back(str);
        }



    std::vector<int> vektor;
    std::transform(vecOfStr.begin(), vecOfStr.end(), std::back_inserter(vektor),
                          [](const QString& strin) { return strin.toInt(); });
    //RANDOM GRAFIK
    int n= vektor.size();
    QVector<double> x(n), y(n);
    for (int i=0; i<n; ++i)
    {
      x[i] = i;
      y[i] = vektor[i];
    }

    ui->CustomPlot->addGraph();
    ui->CustomPlot->graph(0)->setData(x, y);

    ui->CustomPlot->xAxis->setLabel("Dan");
    ui->CustomPlot->yAxis->setLabel("broj sklekova");


    ui->CustomPlot->replot();

}

