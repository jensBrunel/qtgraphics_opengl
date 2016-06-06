#-------------------------------------------------
#
# Project created by QtCreator 2016-06-06T19:59:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets opengl

TARGET = gui qtgraphics_opengl
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mygraphicsscene.cpp

HEADERS  += mainwindow.h \
    mygraphicsscene.h

FORMS    += mainwindow.ui

LIBS += opengl32.lib glu32.lib
