#-------------------------------------------------
#
# Project created by QtCreator 2018-11-16T11:26:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport core

TARGET = aplikacija
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++14
SOURCES += main.cpp\
        mainwindow.cpp \
    drugiprozor.cpp \
    statistika.cpp \
    qcustomplot.cpp \
    unesipodatke.cpp \
    stopwatch.cpp

HEADERS  += mainwindow.h \
    drugiprozor.h \
    statistika.h \
    qcustomplot.h \
    unesipodatke.h \
    stopwatch.h

FORMS    += mainwindow.ui \
    drugiprozor.ui \
    statistika.ui \
    unesipodatke.ui

RESOURCES += \
    resource.qrc

OTHER_FILES += \
    sklekovi.txt
ICON = aplikacija.svg
