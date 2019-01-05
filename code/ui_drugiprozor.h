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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_drugiprozor
{
public:
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_10;
    QTextEdit *hundredthsText;
    QTextEdit *minutesText;
    QPushButton *resetButton;
    QPushButton *startStopButton;
    QLabel *label_14;
    QTextEdit *secondsText;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *drugiprozor)
    {
        if (drugiprozor->objectName().isEmpty())
            drugiprozor->setObjectName(QStringLiteral("drugiprozor"));
        drugiprozor->resize(1112, 730);
        drugiprozor->setMaximumSize(QSize(16777215, 16777215));
        drugiprozor->setStyleSheet(QLatin1String("width: 100%;\n"
"height: 100%;"));
        lcdNumber = new QLCDNumber(drugiprozor);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(60, 30, 251, 61));
        lcdNumber->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
""));
        label_2 = new QLabel(drugiprozor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 290, 131, 41));
        label_4 = new QLabel(drugiprozor);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 350, 81, 21));
        label_3 = new QLabel(drugiprozor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 50, 111, 31));
        label_5 = new QLabel(drugiprozor);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 440, 141, 81));
        pushButton = new QPushButton(drugiprozor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 640, 301, 51));
        pushButton->setStyleSheet(QStringLiteral("background-color:#ff3333;"));
        label_6 = new QLabel(drugiprozor);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(530, 350, 81, 21));
        label_7 = new QLabel(drugiprozor);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(950, 340, 81, 16));
        label_8 = new QLabel(drugiprozor);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(530, 400, 141, 71));
        label_9 = new QLabel(drugiprozor);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(950, 410, 121, 111));
        label_9->setStyleSheet(QLatin1String("width:50;\n"
"height: 20;"));
        label_11 = new QLabel(drugiprozor);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 330, 51, 21));
        label_12 = new QLabel(drugiprozor);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(630, 350, 51, 21));
        label_13 = new QLabel(drugiprozor);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(1020, 340, 51, 21));
        label_10 = new QLabel(drugiprozor);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(860, 20, 21, 51));
        QFont font;
        font.setPointSize(36);
        label_10->setFont(font);
        hundredthsText = new QTextEdit(drugiprozor);
        hundredthsText->setObjectName(QStringLiteral("hundredthsText"));
        hundredthsText->setGeometry(QRect(960, 20, 71, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hundredthsText->sizePolicy().hasHeightForWidth());
        hundredthsText->setSizePolicy(sizePolicy);
        hundredthsText->setFont(font);
        hundredthsText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hundredthsText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hundredthsText->setUndoRedoEnabled(true);
        hundredthsText->setLineWrapMode(QTextEdit::NoWrap);
        hundredthsText->setReadOnly(true);
        hundredthsText->setTabStopWidth(80);
        hundredthsText->setAcceptRichText(false);
        hundredthsText->setCursorWidth(1);
        minutesText = new QTextEdit(drugiprozor);
        minutesText->setObjectName(QStringLiteral("minutesText"));
        minutesText->setGeometry(QRect(780, 20, 81, 61));
        minutesText->setFont(font);
        minutesText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minutesText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minutesText->setReadOnly(true);
        minutesText->setAcceptRichText(false);
        resetButton = new QPushButton(drugiprozor);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(910, 100, 75, 23));
        startStopButton = new QPushButton(drugiprozor);
        startStopButton->setObjectName(QStringLiteral("startStopButton"));
        startStopButton->setGeometry(QRect(820, 100, 75, 23));
        label_14 = new QLabel(drugiprozor);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(950, 20, 21, 51));
        label_14->setFont(font);
        secondsText = new QTextEdit(drugiprozor);
        secondsText->setObjectName(QStringLiteral("secondsText"));
        secondsText->setGeometry(QRect(870, 20, 81, 61));
        secondsText->setFont(font);
        secondsText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        secondsText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        secondsText->setReadOnly(true);
        secondsText->setAcceptRichText(false);
        label = new QLabel(drugiprozor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 100, 771, 131));
        label->setStyleSheet(QStringLiteral("font-size:40px;"));
        pushButton_2 = new QPushButton(drugiprozor);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(930, 660, 99, 27));

        retranslateUi(drugiprozor);

        QMetaObject::connectSlotsByName(drugiprozor);
    } // setupUi

    void retranslateUi(QDialog *drugiprozor)
    {
        drugiprozor->setWindowTitle(QApplication::translate("drugiprozor", "Dialog", 0));
        label_2->setText(QApplication::translate("drugiprozor", "PLAN ZA DANAS", 0));
        label_4->setText(QApplication::translate("drugiprozor", "Sklekovi:", 0));
        label_3->setText(QApplication::translate("drugiprozor", "DAN TRENINGA", 0));
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("drugiprozor", "KRAJ TRENINGA", 0));
        label_6->setText(QApplication::translate("drugiprozor", "Trbu\305\241ni: ", 0));
        label_7->setText(QApplication::translate("drugiprozor", "Cucnjevi: ", 0));
        label_8->setText(QString());
        label_9->setText(QString());
        label_11->setText(QApplication::translate("drugiprozor", "10", 0));
        label_12->setText(QApplication::translate("drugiprozor", "10", 0));
        label_13->setText(QApplication::translate("drugiprozor", "10", 0));
        label_10->setText(QApplication::translate("drugiprozor", ":", 0));
        hundredthsText->setHtml(QApplication::translate("drugiprozor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:36pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">00</span></p></body></html>", 0));
        hundredthsText->setPlaceholderText(QApplication::translate("drugiprozor", "00", 0));
        minutesText->setHtml(QApplication::translate("drugiprozor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:36pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">00</span></p></body></html>", 0));
        minutesText->setPlaceholderText(QApplication::translate("drugiprozor", "00", 0));
        resetButton->setText(QApplication::translate("drugiprozor", "Reset", 0));
        startStopButton->setText(QApplication::translate("drugiprozor", "Start", 0));
        label_14->setText(QApplication::translate("drugiprozor", ":", 0));
        secondsText->setHtml(QApplication::translate("drugiprozor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:36pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">00</span></p></body></html>", 0));
        secondsText->setPlaceholderText(QApplication::translate("drugiprozor", "00", 0));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("drugiprozor", "slobodan dan", 0));
    } // retranslateUi

};

namespace Ui {
    class drugiprozor: public Ui_drugiprozor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGIPROZOR_H
