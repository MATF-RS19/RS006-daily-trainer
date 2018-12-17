/********************************************************************************
** Form generated from reading UI file 'unesipodatke.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNESIPODATKE_H
#define UI_UNESIPODATKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_unesiPodatke
{
public:
    QPushButton *pushButton_3;
    QTextEdit *textEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *radioButton_2;
    QLabel *label_8;
    QLabel *label;
    QTextEdit *textEdit_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *unesiPodatke)
    {
        if (unesiPodatke->objectName().isEmpty())
            unesiPodatke->setObjectName(QStringLiteral("unesiPodatke"));
        unesiPodatke->resize(712, 337);
        pushButton_3 = new QPushButton(unesiPodatke);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 230, 171, 61));
        pushButton_3->setStyleSheet(QLatin1String("background-color : rgb(204, 0, 0);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        textEdit_3 = new QTextEdit(unesiPodatke);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(80, 130, 51, 31));
        textEdit_3->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        label_5 = new QLabel(unesiPodatke);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 10, 201, 20));
        label_6 = new QLabel(unesiPodatke);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 60, 101, 17));
        label_7 = new QLabel(unesiPodatke);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 100, 91, 17));
        radioButton_2 = new QRadioButton(unesiPodatke);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(500, 100, 117, 22));
        label_8 = new QLabel(unesiPodatke);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 140, 81, 17));
        label = new QLabel(unesiPodatke);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 0, 161, 51));
        textEdit_2 = new QTextEdit(unesiPodatke);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(80, 90, 51, 31));
        textEdit_2->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        radioButton_3 = new QRadioButton(unesiPodatke);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(500, 140, 117, 22));
        pushButton = new QPushButton(unesiPodatke);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 230, 171, 61));
        pushButton->setStyleSheet(QLatin1String("background-color : rgb(114, 159, 207);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        radioButton = new QRadioButton(unesiPodatke);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(500, 60, 117, 22));
        textEdit = new QTextEdit(unesiPodatke);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 50, 51, 31));
        textEdit->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(unesiPodatke);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 230, 171, 61));
        pushButton_2->setStyleSheet(QLatin1String("background-color : rgb(114, 159, 207);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));

        retranslateUi(unesiPodatke);

        QMetaObject::connectSlotsByName(unesiPodatke);
    } // setupUi

    void retranslateUi(QDialog *unesiPodatke)
    {
        unesiPodatke->setWindowTitle(QApplication::translate("unesiPodatke", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("unesiPodatke", "IZLAZ IZ APLIKACIJE", 0));
        label_5->setText(QApplication::translate("unesiPodatke", "UNESI BROJ URADJENIH: ", 0));
        label_6->setText(QApplication::translate("unesiPodatke", "TRBUSNJACI", 0));
        label_7->setText(QApplication::translate("unesiPodatke", "SKLEKOVI", 0));
        radioButton_2->setText(QApplication::translate("unesiPodatke", "SREDNJE", 0));
        label_8->setText(QApplication::translate("unesiPodatke", "CUCNJEVI", 0));
        label->setText(QApplication::translate("unesiPodatke", "OCENA TRENINGA:", 0));
        radioButton_3->setText(QApplication::translate("unesiPodatke", "TESKO", 0));
        pushButton->setText(QApplication::translate("unesiPodatke", "POSALJI REZULTATE", 0));
        radioButton->setText(QApplication::translate("unesiPodatke", "LAKO", 0));
        pushButton_2->setText(QApplication::translate("unesiPodatke", "VIDI STATISTIKU", 0));
    } // retranslateUi

};

namespace Ui {
    class unesiPodatke: public Ui_unesiPodatke {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNESIPODATKE_H
