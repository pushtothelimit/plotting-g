######################################################################
# Automatically generated by qmake (3.1) Thu Jun 7 00:44:22 2018
######################################################################

TEMPLATE = app
TARGET = plotting

INCLUDEPATH += include
OBJECTS_DIR=obj
MOC_DIR=moc

# for future implementations, at the moment isn't necessary
# DESTDIR=bin

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain 
#version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    
# disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += include/MyPlot.h include/MyWid.h
SOURCES += src/main.cpp src/MyPlot.cpp src/MyWid.cpp

QT += widgets
QT += gui
CONFIG += qwt

