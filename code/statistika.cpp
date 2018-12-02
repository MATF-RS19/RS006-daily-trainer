#include "statistika.h"
#include "ui_statistika.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

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
    std::vector<std::string> vecOfStr;
    //std::ifstream in("sklekovi.txt");
    std::ifstream in(":/resource/data/sklekovi.txt");
        // Check if object is valid
        if(!in)
        {
            std::cerr << "Cannot open the File"<<std::endl;

        }

        std::string str;

        while (std::getline(in, str))
        {
            if(str.size() > 0)
                vecOfStr.push_back(str);
        }
        in.close();


           std::vector<int> vektor;
           std::transform(vecOfStr.begin(), vecOfStr.end(), std::back_inserter(vektor),
                          [](const std::string& strin) { return std::stoi(strin); });
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

