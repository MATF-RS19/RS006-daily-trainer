/********************************************************************************
** Form generated from reading UI file 'drugiprozor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGIPROZOR_H
#define UI_DRUGIPROZOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_drugiprozor
{
public:
    QPushButton *pushButton_2;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QLabel *label_7;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_8;

    void setupUi(QDialog *drugiprozor)
    {
        if (drugiprozor->objectName().isEmpty())
            drugiprozor->setObjectName(QStringLiteral("drugiprozor"));
        drugiprozor->resize(653, 378);
        pushButton_2 = new QPushButton(drugiprozor);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 310, 201, 61));
        lcdNumber = new QLCDNumber(drugiprozor);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 10, 171, 61));
        label_2 = new QLabel(drugiprozor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 131, 71));
        radioButton_3 = new QRadioButton(drugiprozor);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(440, 230, 117, 22));
        pushButton_3 = new QPushButton(drugiprozor);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 310, 161, 61));
        label_4 = new QLabel(drugiprozor);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 150, 91, 111));
        textEdit = new QTextEdit(drugiprozor);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(190, 150, 51, 31));
        textEdit_2 = new QTextEdit(drugiprozor);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(190, 190, 51, 31));
        label_3 = new QLabel(drugiprozor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 20, 251, 51));
        label_7 = new QLabel(drugiprozor);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 200, 91, 17));
        textEdit_3 = new QTextEdit(drugiprozor);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(190, 230, 51, 31));
        pushButton = new QPushButton(drugiprozor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 310, 181, 61));
        radioButton_2 = new QRadioButton(drugiprozor);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(440, 200, 117, 22));
        radioButton = new QRadioButton(drugiprozor);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(440, 170, 117, 22));
        label_6 = new QLabel(drugiprozor);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 160, 101, 17));
        label = new QLabel(drugiprozor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 110, 161, 51));
        label_5 = new QLabel(drugiprozor);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 120, 67, 17));
        label_8 = new QLabel(drugiprozor);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(260, 240, 81, 17));

        retranslateUi(drugiprozor);

        QMetaObject::connectSlotsByName(drugiprozor);
    } // setupUi

    void retranslateUi(QDialog *drugiprozor)
    {
        drugiprozor->setWindowTitle(QApplication::translate("drugiprozor", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("drugiprozor", "VIDI STATISTIKU", 0));
        label_2->setText(QApplication::translate("drugiprozor", "PLAN ZA DANAS", 0));
        radioButton_3->setText(QApplication::translate("drugiprozor", "TESKO", 0));
        pushButton_3->setText(QApplication::translate("drugiprozor", "KRAJ ", 0));
        label_4->setText(QApplication::translate("drugiprozor", "TextLabel", 0));
        label_3->setText(QApplication::translate("drugiprozor", "DAN TRENINGA", 0));
        label_7->setText(QApplication::translate("drugiprozor", "SKLEKOVI", 0));
        pushButton->setText(QApplication::translate("drugiprozor", "POSALJI REZULTATE", 0));
        radioButton_2->setText(QApplication::translate("drugiprozor", "SREDNJE", 0));
        radioButton->setText(QApplication::translate("drugiprozor", "LAKO", 0));
        label_6->setText(QApplication::translate("drugiprozor", "TRBUSNJACI", 0));
        label->setText(QApplication::translate("drugiprozor", "OCENA TRENINGA", 0));
        label_5->setText(QApplication::translate("drugiprozor", "UNESI ", 0));
        label_8->setText(QApplication::translate("drugiprozor", "CUCNJEVI", 0));
    } // retranslateUi

};

namespace Ui {
    class drugiprozor: public Ui_drugiprozor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGIPROZOR_H
