#-------------------------------------------------
#
# Project created by QtCreator 2024-04-12T15:41:33
#
#-------------------------------------------------

QT       += core gui

#大于Qt4版本 才包含widget模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sampl_2_1  #应用程序名 生成的.exe程序名称
TEMPLATE = app      #模板类型 应用程序模板

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp

HEADERS += \
        widget.h

FORMS += \
        widget.ui
