#-------------------------------------------------
#
# Project created by QtCreator 2018-11-16T11:26:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = aplikacija
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    drugiprozor.cpp \
    statistika.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    drugiprozor.h \
    statistika.h \
    qcustomplot.h

FORMS    += mainwindow.ui \
    drugiprozor.ui \
    statistika.ui

RESOURCES += \
    resource.qrc

OTHER_FILES += \
    sklekovi.txt
