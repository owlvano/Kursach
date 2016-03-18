#-------------------------------------------------
#
# Project created by QtCreator 2016-03-16T20:53:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = moveproject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    filemover.cpp \
    xmldata.cpp

HEADERS  += mainwindow.h \
    filemover.h \
    xmldata.h

FORMS    += mainwindow.ui
