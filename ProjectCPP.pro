#-------------------------------------------------
#
# Project created by QtCreator 2017-11-17T10:38:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjectCPP
TEMPLATE = app


SOURCES += main.cpp\
        console.cpp \
    observable.cpp \
    observer.cpp \
    cours.cpp \
    personne.cpp \
    etudiant.cpp \
    admin.cpp

HEADERS  += console.h \
    observable.h \
    observer.h \
    cours.h \
    personne.h \
    etudiant.h \
    admin.h

FORMS    += console.ui
