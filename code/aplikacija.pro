#-------------------------------------------------
#
# Project created by QtCreator 2018-11-16T11:26:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = aplikacija
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    korisnik.cpp \
    form.cpp

HEADERS  += mainwindow.h \
    korisnik.h \
    form.h

FORMS    += mainwindow.ui \
    form.ui
