#-------------------------------------------------
#
# Project created by QtCreator 2016-10-26T15:18:00
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += widgets

TARGET = VocabBuilder
TEMPLATE = app

INCLUDEPATH += ./src
INCLUDEPATH += ./headers

SOURCES +=  src/main.cpp\
            src/basedata.cpp \
            src/dbhandler.cpp \
            src/uihandler.cpp

HEADERS  += \
            headers/basedata.h \
            headers/dbhandler.h \
            headers/uihandler.h

FORMS    += uihandler.ui
