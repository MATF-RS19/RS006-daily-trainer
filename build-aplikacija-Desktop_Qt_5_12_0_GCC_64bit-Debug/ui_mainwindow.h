/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1229, 751);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#aaa;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 10, 431, 41));
        label->setStyleSheet(QString::fromUtf8("text-alignment : center;\n"
"font-size:30px;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 431, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-size:30px;"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 590, 241, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color :rgb(115, 210, 22);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 200, 211, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:aqua;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 25px;"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 200, 211, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:aqua;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 25px;"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(850, 200, 211, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:aqua;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 25px;background-color:aqua;"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1150, 10, 31, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("height: 30px;\n"
"width: 30px;\n"
"background-color: #bbb;\n"
""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 120, 891, 421));
        label_3->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"background-color:#ccc;\n"
"border-radius: 20px;"));
        MainWindow->setCentralWidget(centralWidget);
        label_3->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1229, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Dobrodo\305\241li!", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Izaberite te\305\276inu treninga:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Zapo\304\215ni trening", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Po\304\215etnik", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Prosek", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Profesionalac", nullptr));
        pushButton_5->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:23pt; font-weight:600; font-style:italic;\">Ovde treba izabrati te\305\276inu treninga. </span><br/></p><p><span style=\" font-size:23pt; font-weight:600;\">Po\304\215etnik</span><span style=\" font-size:23pt;\">: osoba koja dugo nije bila aktivna. </span></p><p><span style=\" font-size:23pt; font-weight:600;\">Prosek</span><span style=\" font-size:23pt;\">: osoba koja je umereno aktivna.</span></p><p><span style=\" font-size:23pt; font-weight:600;\">Profesionalac</span><span style=\" font-size:23pt;\">: osoba koja aktivno trenira. </span><br/></p><p><span style=\" font-size:23pt;\">Nakon odabira te\305\276ine treninga, kliknite na &quot;</span><span style=\" font-size:23pt; font-weight:600;\">Zapo\304\215ni trening</span><span style=\" font-size:23pt;\">&quot;.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
