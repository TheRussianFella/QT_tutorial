#-------------------------------------------------
#
# Project created by QtCreator 2016-04-29T18:21:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Exam
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    figure.cpp \
    ellipse.cpp \
    rect.cpp \
    dialog.cpp \
    frame.cpp

HEADERS  += mainwindow.h \
    figure.h \
    ellipse.h \
    rect.h \
    dialog.h \
    frame.h

FORMS    += mainwindow.ui \
    dialog.ui

CONFIG +=C++11
