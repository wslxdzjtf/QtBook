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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *LabDemo;
    QPushButton *bntClose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        LabDemo = new QLabel(Widget);
        LabDemo->setObjectName(QStringLiteral("LabDemo"));
        LabDemo->setGeometry(QRect(160, 99, 131, 51));
        bntClose = new QPushButton(Widget);
        bntClose->setObjectName(QStringLiteral("bntClose"));
        bntClose->setGeometry(QRect(260, 210, 101, 31));

        retranslateUi(Widget);
        QObject::connect(bntClose, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        LabDemo->setText(QApplication::translate("Widget", "Hello", Q_NULLPTR));
        bntClose->setText(QApplication::translate("Widget", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
