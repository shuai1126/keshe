#-------------------------------------------------
#
# Project created by QtCreator 2018-07-04T20:58:29
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = train
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    option.cpp \
    search.cpp \
    menu.cpp \
    searchresult.cpp \
    login.cpp \
    register.cpp \
    buy.cpp \
    addperson.cpp \
    user.cpp \
    message.cpp \
    order.cpp \
    admmenu.cpp \
    addtrain.cpp \
    changepassword.cpp

HEADERS  += mainwindow.h \
    option.h \
    search.h \
    menu.h \
    searchresult.h \
    login.h \
    register.h \
    buy.h \
    addperson.h \
    user.h \
    message.h \
    order.h \
    admmenu.h \
    addtrain.h \
    changepassword.h

FORMS    += mainwindow.ui \
    option.ui \
    search.ui \
    menu.ui \
    searchresult.ui \
    login.ui \
    register.ui \
    buy.ui \
    addperson.ui \
    user.ui \
    message.ui \
    order.ui \
    admmenu.ui \
    addtrain.ui \
    changepassword.ui
