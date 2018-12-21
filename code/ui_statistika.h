/********************************************************************************
** Form generated from reading UI file 'statistika.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIKA_H
#define UI_STATISTIKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_statistika
{
public:
    QCustomPlot *CustomPlot;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QDialog *statistika)
    {
        if (statistika->objectName().isEmpty())
            statistika->setObjectName(QStringLiteral("statistika"));
        statistika->resize(656, 518);
        QFont font;
        font.setFamily(QStringLiteral("Purisa"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        statistika->setFont(font);
        statistika->setStyleSheet(QStringLiteral(""));
        CustomPlot = new QCustomPlot(statistika);
        CustomPlot->setObjectName(QStringLiteral("CustomPlot"));
        CustomPlot->setGeometry(QRect(60, 80, 501, 221));
        CustomPlot->setAutoFillBackground(false);
        CustomPlot->setStyleSheet(QLatin1String("background-color : rgb(114, 159, 207);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        radioButton_4 = new QRadioButton(statistika);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(240, 330, 221, 23));
        radioButton_5 = new QRadioButton(statistika);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(240, 360, 211, 23));
        radioButton_6 = new QRadioButton(statistika);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(240, 390, 211, 23));
        label = new QLabel(statistika);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 320, 201, 41));
        label_2 = new QLabel(statistika);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 10, 371, 51));
        pushButton = new QPushButton(statistika);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 350, 151, 41));
        comboBox = new QComboBox(statistika);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 380, 131, 27));

        retranslateUi(statistika);

        QMetaObject::connectSlotsByName(statistika);
    } // setupUi

    void retranslateUi(QDialog *statistika)
    {
        statistika->setWindowTitle(QApplication::translate("statistika", "Dialog", 0));
        radioButton_4->setText(QApplication::translate("statistika", "poslednjih 7 dana", 0));
        radioButton_5->setText(QApplication::translate("statistika", "poslednjih 15 dana", 0));
        radioButton_6->setText(QApplication::translate("statistika", "poslednjih 30 dana", 0));
        label->setText(QApplication::translate("statistika", "Prikazi statistiku za:", 0));
        label_2->setText(QApplication::translate("statistika", "Statistika napretka korisnika:", 0));
        pushButton->setText(QApplication::translate("statistika", "NAZAD", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("statistika", "trbusnjaci", 0)
         << QApplication::translate("statistika", "cucnjevi", 0)
         << QApplication::translate("statistika", "sklekovi", 0)
         << QApplication::translate("statistika", "trcanje", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class statistika: public Ui_statistika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIKA_H
