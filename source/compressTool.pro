#-------------------------------------------------
#
# Project created by QtCreator 2022-12-07T15:04:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = compressTool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    widget/formuncompress.cpp

HEADERS  += mainwindow.h \
    widget/formuncompress.h

FORMS    += mainwindow.ui \
    widget/formuncompress.ui

INCLUDEPATH += $$PWD/widget
