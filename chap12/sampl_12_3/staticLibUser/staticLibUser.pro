#-------------------------------------------------
#
# Project created by QtCreator 2024-05-02T15:04:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = staticLibUser
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


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../include/ -lstaticLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../include/ -lstaticLibd

INCLUDEPATH += $$PWD/../include
DEPENDPATH += $$PWD/../include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../include/libstaticLib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../include/libstaticLibd.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../include/staticLib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../include/staticLibd.lib
