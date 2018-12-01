/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QRadioButton *radioButton_3;
    QTextEdit *textEdit;
    QRadioButton *radioButton_2;
    QLabel *label_8;
    QTextEdit *textEdit_2;
    QLabel *label_6;
    QTextEdit *textEdit_3;
    QRadioButton *radioButton;
    QLabel *label_7;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(622, 422);
        lcdNumber = new QLCDNumber(Form);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 171, 61));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 251, 51));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 131, 71));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 91, 111));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 110, 161, 51));
        radioButton_3 = new QRadioButton(Form);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(420, 230, 117, 22));
        textEdit = new QTextEdit(Form);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 150, 51, 31));
        radioButton_2 = new QRadioButton(Form);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(420, 200, 117, 22));
        label_8 = new QLabel(Form);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 240, 81, 17));
        textEdit_2 = new QTextEdit(Form);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(170, 190, 51, 31));
        label_6 = new QLabel(Form);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 160, 101, 17));
        textEdit_3 = new QTextEdit(Form);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(170, 230, 51, 31));
        radioButton = new QRadioButton(Form);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(420, 170, 117, 22));
        label_7 = new QLabel(Form);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 200, 91, 17));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 120, 67, 17));
        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 310, 161, 61));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 310, 181, 61));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 310, 201, 61));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_3->setText(QApplication::translate("Form", "DAN TRENINGA", nullptr));
        label_2->setText(QApplication::translate("Form", "PLAN ZA DANAS", nullptr));
        label_4->setText(QApplication::translate("Form", "TextLabel", nullptr));
        label->setText(QApplication::translate("Form", "OCENA TRENINGA", nullptr));
        radioButton_3->setText(QApplication::translate("Form", "TESKO", nullptr));
        radioButton_2->setText(QApplication::translate("Form", "SREDNJE", nullptr));
        label_8->setText(QApplication::translate("Form", "CUCNJEVI", nullptr));
        label_6->setText(QApplication::translate("Form", "TRBUSNJACI", nullptr));
        radioButton->setText(QApplication::translate("Form", "LAKO", nullptr));
        label_7->setText(QApplication::translate("Form", "SKLEKOVI", nullptr));
        label_5->setText(QApplication::translate("Form", "UNESI ", nullptr));
        pushButton_3->setText(QApplication::translate("Form", "KRAJ ", nullptr));
        pushButton->setText(QApplication::translate("Form", "POSALJI REZULTATE", nullptr));
        pushButton_2->setText(QApplication::translate("Form", "VIDI STATISTIKU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
