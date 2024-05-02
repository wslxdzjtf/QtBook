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
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <axbbattery.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    AXBBattery *battery;
    QSlider *horizontalSlider;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(353, 233);
        QIcon icon;
        icon.addFile(QStringLiteral("../../chap11/sampl_11_3/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        battery = new AXBBattery(widget);
        battery->setObjectName(QStringLiteral("battery"));

        verticalLayout->addWidget(battery);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(label);


        verticalLayout_2->addWidget(widget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\347\224\265\346\261\240\347\273\204\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\347\224\265\351\207\217\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
