/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1109, 707);
        MainWindow->setStyleSheet(QStringLiteral("background-color:#aaa;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 10, 431, 41));
        label->setStyleSheet(QLatin1String("text-alignment : center;\n"
"font-size:30px;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 431, 41));
        label_2->setStyleSheet(QStringLiteral("font-size:30px;"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 590, 241, 51));
        pushButton->setStyleSheet(QLatin1String("background-color :rgb(115, 210, 22);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 180, 211, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color:aqua;"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 180, 211, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color:aqua;"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(920, 170, 181, 41));
        pushButton_4->setStyleSheet(QStringLiteral("background-color:aqua;"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(880, 20, 51, 31));
        pushButton_5->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 25px;\n"
"background-color: #bbb;\n"
""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 30, 1061, 421));
        label_3->setStyleSheet(QLatin1String("font-size:30px;\n"
"background-color:#ccc;\n"
"border-radius: 20px;"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 400, 99, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1109, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "                      DOBRODO\305\240LI", 0));
        label_2->setText(QApplication::translate("MainWindow", "IZABERITE TE\305\275INU TRENINGA:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "ZAPOCNI TRENING", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Pocetnik", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Prosek", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Profesionalac", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "?", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:23pt;\">Ovde treba izabrati te\305\276inu treninga. </span><br/></p><p><span style=\" font-size:23pt;\">Po\304\215etnik: osoba koja dugo nije bila aktivna. </span></p><p><span style=\" font-size:23pt;\">Prosek: osoba koja je umereno aktivna.</span></p><p><span style=\" font-size:23pt;\">Profesionalac: osoba koja aktivno trenira. </span><br/></p><p><span style=\" font-size:23pt;\">Nakon odabira te\305\276ine treninga, kliknite na &quot;Zapo\304\215ni trening&quot;.</span></p></body></html>", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "izlaz", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
