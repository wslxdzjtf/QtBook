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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinNum;
    QLabel *label_2;
    QDoubleSpinBox *spinPrice;
    QPushButton *btnCal;
    QLabel *label_3;
    QDoubleSpinBox *spinTotal;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QSpinBox *spinDec;
    QLabel *label_6;
    QPushButton *btnDec;
    QLabel *label_8;
    QLabel *label_7;
    QSpinBox *spinHex;
    QPushButton *btnBin;
    QPushButton *btnHex;
    QSpinBox *spinBin;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(303, 200);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinNum = new QSpinBox(Widget);
        spinNum->setObjectName(QStringLiteral("spinNum"));
        spinNum->setFrame(true);
        spinNum->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinNum->setProperty("showGroupSeparator", QVariant(false));
        spinNum->setMaximum(1000);
        spinNum->setValue(4);

        gridLayout->addWidget(spinNum, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        spinPrice = new QDoubleSpinBox(Widget);
        spinPrice->setObjectName(QStringLiteral("spinPrice"));
        spinPrice->setMinimumSize(QSize(90, 0));
        spinPrice->setMaximum(10000);
        spinPrice->setValue(12.43);

        gridLayout->addWidget(spinPrice, 0, 3, 1, 1);

        btnCal = new QPushButton(Widget);
        btnCal->setObjectName(QStringLiteral("btnCal"));

        gridLayout->addWidget(btnCal, 1, 1, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        spinTotal = new QDoubleSpinBox(Widget);
        spinTotal->setObjectName(QStringLiteral("spinTotal"));
        spinTotal->setMaximum(100000);

        gridLayout->addWidget(spinTotal, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(288, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        spinDec = new QSpinBox(Widget);
        spinDec->setObjectName(QStringLiteral("spinDec"));
        spinDec->setMinimumSize(QSize(100, 0));
        spinDec->setMaximum(255);
        spinDec->setValue(12);

        gridLayout_2->addWidget(spinDec, 0, 1, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        btnDec = new QPushButton(Widget);
        btnDec->setObjectName(QStringLiteral("btnDec"));

        gridLayout_2->addWidget(btnDec, 0, 2, 1, 1);

        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        spinHex = new QSpinBox(Widget);
        spinHex->setObjectName(QStringLiteral("spinHex"));
        spinHex->setMaximum(255);
        spinHex->setValue(12);
        spinHex->setDisplayIntegerBase(16);

        gridLayout_2->addWidget(spinHex, 2, 1, 1, 1);

        btnBin = new QPushButton(Widget);
        btnBin->setObjectName(QStringLiteral("btnBin"));

        gridLayout_2->addWidget(btnBin, 1, 2, 1, 1);

        btnHex = new QPushButton(Widget);
        btnHex->setObjectName(QStringLiteral("btnHex"));

        gridLayout_2->addWidget(btnHex, 2, 2, 1, 1);

        spinBin = new QSpinBox(Widget);
        spinBin->setObjectName(QStringLiteral("spinBin"));
        spinBin->setMaximum(255);
        spinBin->setDisplayIntegerBase(2);

        gridLayout_2->addWidget(spinBin, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\225\260 \351\207\217", Q_NULLPTR));
        spinNum->setSuffix(QApplication::translate("Widget", " kg", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\215\225 \344\273\267", Q_NULLPTR));
        spinPrice->setPrefix(QApplication::translate("Widget", "$ ", Q_NULLPTR));
        btnCal->setText(QApplication::translate("Widget", "\350\256\241\347\256\227", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\200\273 \344\273\267", Q_NULLPTR));
        spinTotal->setPrefix(QApplication::translate("Widget", "$ ", Q_NULLPTR));
        spinDec->setSuffix(QString());
        spinDec->setPrefix(QApplication::translate("Widget", "Dec ", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\345\215\201 \350\277\233 \345\210\266", Q_NULLPTR));
        btnDec->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\344\272\214 \350\277\233 \345\210\266", Q_NULLPTR));
        spinHex->setPrefix(QApplication::translate("Widget", "Hex ", Q_NULLPTR));
        btnBin->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        btnHex->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        spinBin->setPrefix(QApplication::translate("Widget", "Bin ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
