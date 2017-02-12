#-------------------------------------------------
#
# Project created by QtCreator 2016-04-15T20:46:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dictionary
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dictionary.cpp \
    pair.cpp

HEADERS  += mainwindow.h \
    dictionary.h \
    pair.h

FORMS    += mainwindow.ui

CONFIG += C++11
