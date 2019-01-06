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
    QPushButton *pushButton_5;
    QLabel *label_3;

    void setupUi(QDialog *statistika)
    {
        if (statistika->objectName().isEmpty())
            statistika->setObjectName(QString::fromUtf8("statistika"));
        statistika->resize(1427, 716);
        QFont font;
        font.setFamily(QString::fromUtf8("Purisa"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        statistika->setFont(font);
        statistika->setStyleSheet(QString::fromUtf8(""));
        CustomPlot = new QCustomPlot(statistika);
        CustomPlot->setObjectName(QString::fromUtf8("CustomPlot"));
        CustomPlot->setGeometry(QRect(230, 110, 681, 301));
        CustomPlot->setAutoFillBackground(false);
        CustomPlot->setStyleSheet(QString::fromUtf8("background-color : rgb(114, 159, 207);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        radioButton_4 = new QRadioButton(statistika);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(640, 500, 221, 23));
        radioButton_5 = new QRadioButton(statistika);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(640, 530, 211, 23));
        radioButton_6 = new QRadioButton(statistika);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(640, 560, 211, 23));
        label = new QLabel(statistika);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 490, 201, 41));
        label_2 = new QLabel(statistika);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 40, 371, 51));
        pushButton = new QPushButton(statistika);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1050, 610, 151, 41));
        comboBox = new QComboBox(statistika);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(230, 550, 131, 27));
        pushButton_5 = new QPushButton(statistika);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1010, 20, 51, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"width: 25px;\n"
"background-color: #bbb;\n"
""));
        label_3 = new QLabel(statistika);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 250, 821, 501));
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
        label->setText(QApplication::translate("statistika", "Prikazi statistiku za:", nullptr));
        label_2->setText(QApplication::translate("statistika", "Statistika napretka korisnika:", nullptr));
        pushButton->setText(QApplication::translate("statistika", "NAZAD", nullptr));
        comboBox->setItemText(0, QApplication::translate("statistika", "trbusnjaci", nullptr));
        comboBox->setItemText(1, QApplication::translate("statistika", "cucnjevi", nullptr));
        comboBox->setItemText(2, QApplication::translate("statistika", "sklekovi", nullptr));
        comboBox->setItemText(3, QApplication::translate("statistika", "trcanje", nullptr));

        pushButton_5->setText(QApplication::translate("statistika", "?", nullptr));
        label_3->setText(QApplication::translate("statistika", "<html><head/><body><p><span style=\" font-size:23pt;\">Ovde mo\305\276emo videti statistiku napretka za svaku </span></p><p><span style=\" font-size:23pt;\">ve\305\276bu pojedinacno.</span></p><p><br/></p><p><span style=\" font-size:23pt;\">U opadaju\304\207em meniju mo\305\276emo odabrati za koju ve\305\276bu </span></p><p><span style=\" font-size:23pt;\">\305\276elimo videti graf.</span></p><p><br/></p><p><span style=\" font-size:23pt;\">Pored toga, mo\305\276emo odabrati da </span></p><p><span style=\" font-size:23pt;\">li \305\276elimo videti graf za poslednjih </span></p><p><span style=\" font-size:23pt;\">7, 15 ili 30 dana.</span></p><p><br/></p><p><span style=\" font-size:23pt;\">Klikom na dugme &quot;Nazad&quot; vrati\304\207emo se unazad, na ekran sa uno\305\241enjem podataka o ura\304\221enim ve\305\276bama.</span><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statistika: public Ui_statistika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIKA_H
