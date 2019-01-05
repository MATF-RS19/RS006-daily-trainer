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
    QPushButton *pushButton_5;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *statistika)
    {
        if (statistika->objectName().isEmpty())
            statistika->setObjectName(QStringLiteral("statistika"));
        statistika->resize(1427, 716);
        QFont font;
        font.setFamily(QStringLiteral("Purisa"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        statistika->setFont(font);
        statistika->setStyleSheet(QStringLiteral(""));
        CustomPlot = new QCustomPlot(statistika);
        CustomPlot->setObjectName(QStringLiteral("CustomPlot"));
        CustomPlot->setGeometry(QRect(230, 110, 681, 301));
        CustomPlot->setAutoFillBackground(false);
        CustomPlot->setStyleSheet(QLatin1String("background-color : rgb(114, 159, 207);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        radioButton_4 = new QRadioButton(statistika);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(640, 500, 221, 23));
        radioButton_5 = new QRadioButton(statistika);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(640, 530, 211, 23));
        radioButton_6 = new QRadioButton(statistika);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(640, 560, 211, 23));
        label = new QLabel(statistika);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 490, 201, 41));
        label_2 = new QLabel(statistika);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 40, 371, 51));
        pushButton = new QPushButton(statistika);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1050, 610, 151, 41));
        comboBox = new QComboBox(statistika);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(230, 550, 131, 27));
        pushButton_5 = new QPushButton(statistika);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1010, 20, 51, 31));
        pushButton_5->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 25px;\n"
"background-color: #bbb;\n"
""));
        label_3 = new QLabel(statistika);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 250, 821, 501));
        label_3->setStyleSheet(QLatin1String("font-size:20px;\n"
"background-color:#ccc;\n"
"border-radius: 20px;\n"
""));
        pushButton_2 = new QPushButton(statistika);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 620, 99, 27));

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
        pushButton_5->setText(QApplication::translate("statistika", "?", 0));
        label_3->setText(QApplication::translate("statistika", "<html><head/><body><p><span style=\" font-size:23pt;\">Ovde mo\305\276emo videti statistiku napretka za svaku </span></p><p><span style=\" font-size:23pt;\">ve\305\276bu pojedinacno.</span></p><p><br/></p><p><span style=\" font-size:23pt;\">U opadaju\304\207em meniju mo\305\276emo odabrati za koju ve\305\276bu </span></p><p><span style=\" font-size:23pt;\">\305\276elimo videti graf.</span></p><p><br/></p><p><span style=\" font-size:23pt;\">Pored toga, mo\305\276emo odabrati da </span></p><p><span style=\" font-size:23pt;\">li \305\276elimo videti graf za poslednjih </span></p><p><span style=\" font-size:23pt;\">7, 15 ili 30 dana.</span></p><p><br/></p><p><span style=\" font-size:23pt;\">Klikom na dugme &quot;Nazad&quot; vrati\304\207emo se unazad, na ekran sa uno\305\241enjem podataka o ura\304\221enim ve\305\276bama.</span><br/></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("statistika", "izlaz", 0));
    } // retranslateUi

};

namespace Ui {
    class statistika: public Ui_statistika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIKA_H
