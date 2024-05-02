/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>
#include "axbbattery.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    AXBBattery *aXBBattery;
    QScrollBar *horizontalScrollBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        aXBBattery = new AXBBattery(Widget);
        aXBBattery->setObjectName(QStringLiteral("aXBBattery"));
        aXBBattery->setGeometry(QRect(90, 110, 171, 71));
        horizontalScrollBar = new QScrollBar(Widget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(90, 200, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
