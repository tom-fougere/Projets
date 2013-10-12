#-------------------------------------------------
#
# Project created by QtCreator 2013-10-06T13:19:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = photoColorEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    colorretouch.cpp \
    ../../Tools/sources/colorOperation.cpp

HEADERS  += mainwindow.h \
    colorretouch.h \
    ../../Tools/colorOperation.h

FORMS    += mainwindow.ui

INCLUDEPATH += D:\OpenCV\BUILDS\install\include

LIBS += -LD:\OpenCV\BUILDS\install\bin \
    -lopencv_core245 \
    -lopencv_highgui245 \
    -lopencv_imgproc245 \
    -lopencv_features2d245 \
    -lopencv_calib3d245 \
    -lopencv_nonfree245 \
    -lopencv_flann245
