#-------------------------------------------------
#
# Project created by QtCreator 2011-10-24T21:20:08
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Jollybot
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    bot.cpp \
    jollybot.cpp \
    location.cpp \
    state.cpp

HEADERS += \
    bot.h \
    jollybot.h \
    location.h \
    state.h \
    Debug.h \
    timer.h \
    mapsquare.h
