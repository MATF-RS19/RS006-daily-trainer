/********************************************************************************
** Form generated from reading UI file 'statistika.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIKA_H
#define UI_STATISTIKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_statistika
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *statistika)
    {
        if (statistika->objectName().isEmpty())
            statistika->setObjectName(QStringLiteral("statistika"));
        statistika->resize(596, 355);
        pushButton = new QPushButton(statistika);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 140, 321, 111));

        retranslateUi(statistika);

        QMetaObject::connectSlotsByName(statistika);
    } // setupUi

    void retranslateUi(QDialog *statistika)
    {
        statistika->setWindowTitle(QApplication::translate("statistika", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("statistika", "Ovde ce bit prikazana statistika!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statistika: public Ui_statistika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIKA_H
