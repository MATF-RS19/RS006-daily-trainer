/********************************************************************************
** Form generated from reading UI file 'statistika.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIKA_H
#define UI_STATISTIKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
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
    QLabel *label_4;
    QPushButton *pushButton_5;
    QLabel *label_3;

    void setupUi(QDialog *statistika)
    {
        if (statistika->objectName().isEmpty())
            statistika->setObjectName(QString::fromUtf8("statistika"));
        statistika->resize(1427, 785);
        QFont font;
        font.setFamily(QString::fromUtf8("Purisa"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        statistika->setFont(font);
        statistika->setStyleSheet(QString::fromUtf8(""));
        CustomPlot = new QCustomPlot(statistika);
        CustomPlot->setObjectName(QString::fromUtf8("CustomPlot"));
        CustomPlot->setGeometry(QRect(190, 140, 631, 261));
        CustomPlot->setAutoFillBackground(false);
        CustomPlot->setStyleSheet(QString::fromUtf8("background-color : rgb(114, 159, 207);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        radioButton_4 = new QRadioButton(statistika);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(840, 160, 221, 23));
        radioButton_5 = new QRadioButton(statistika);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(840, 190, 211, 23));
        radioButton_6 = new QRadioButton(statistika);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(840, 220, 211, 23));
        label = new QLabel(statistika);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(840, 110, 261, 41));
        label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font: bold;"));
        label_2 = new QLabel(statistika);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 30, 411, 51));
        label_2->setStyleSheet(QString::fromUtf8("font-size:25px;\n"
"font: bold;"));
        pushButton = new QPushButton(statistika);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1040, 640, 151, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:red;"));
        comboBox = new QComboBox(statistika);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(350, 470, 131, 27));
        label_4 = new QLabel(statistika);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 470, 171, 31));
        label_4->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font: bold;"));
        pushButton_5 = new QPushButton(statistika);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1190, 20, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("height: 30px;\n"
"width: 30px;\n"
"background-color: rgb(114, 159, 207);\n"
"font-size:16px;\n"
"\n"
""));
        label_3 = new QLabel(statistika);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 60, 851, 641));
        label_3->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color:#ccc;\n"
"border-radius: 20px;\n"
""));

        retranslateUi(statistika);

        QMetaObject::connectSlotsByName(statistika);
    } // setupUi

    void retranslateUi(QDialog *statistika)
    {
        statistika->setWindowTitle(QApplication::translate("statistika", "Dialog", nullptr));
        radioButton_4->setText(QApplication::translate("statistika", "poslednjih 7 dana", nullptr));
        radioButton_5->setText(QApplication::translate("statistika", "poslednjih 15 dana", nullptr));
        radioButton_6->setText(QApplication::translate("statistika", "poslednjih 30 dana", nullptr));
        label->setText(QApplication::translate("statistika", "<html><head/><body><p><span style=\" font-size:16pt;\">Prika\305\276i statistiku za:</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("statistika", "<html><head/><body><p>Statistika napretka korisnika:</p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("statistika", "Nazad", nullptr));
        comboBox->setItemText(0, QApplication::translate("statistika", "trbu\305\241njaci", nullptr));
        comboBox->setItemText(1, QApplication::translate("statistika", "\304\215u\304\215njevi", nullptr));
        comboBox->setItemText(2, QApplication::translate("statistika", "sklekovi", nullptr));
        comboBox->setItemText(3, QApplication::translate("statistika", "tr\304\215anje", nullptr));

        label_4->setText(QApplication::translate("statistika", "<html><head/><body><p>Prika\305\276i ve\305\276bu:</p></body></html>", nullptr));
        pushButton_5->setText(QString());
        label_3->setText(QApplication::translate("statistika", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">Ovde mo\305\276emo videti statistiku</span></p><p><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">napretka za svaku ve\305\276bu pojedinacno.</span></p><p><span style=\" font-size:16pt; font-weight:600;\"><br/></span><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">Da uklonite ovaj prozor, kliknite ponovo na &quot;help&quot;</span></p><p><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">dugme(dugme sa znakom &quot;?&quot;).</span><br/></p><p>Pored teksta &quot;<span style=\" font-weight:600;\">Prika\305\276i ve\305\276bu</span>&quot; imamo opadaju\304\207i meni gde</p><p>mo\305\276emo izabrati za koju ve\305\276bu \305\276elimo videti graf.<br/></p><p><span style=\" font-size:16pt;\">Pored toga, mo\305\276emo odabrati da li \305\276elimo videti </span></p><p><span style=\" font-size:16pt;\">graf za poslednjih 7, 15 ili 30 dana treniranja.</span><br/></p><p><span"
                        " style=\" font-size:16pt;\">Klikom na dugme &quot;</span><span style=\" font-size:16pt; font-weight:600;\">Nazad</span><span style=\" font-size:16pt;\">&quot; vrati\304\207emo se unazad, </span></p><p><span style=\" font-size:16pt;\">na ekran sa uno\305\241enjem podataka o ura\304\221enim ve\305\276bama.<br/></span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statistika: public Ui_statistika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIKA_H
