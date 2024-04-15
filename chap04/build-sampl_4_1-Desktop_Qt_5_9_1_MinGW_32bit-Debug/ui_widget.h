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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editNum;
    QLabel *label_2;
    QLineEdit *editPrice;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *editTotal;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *editDec;
    QPushButton *btnDec;
    QLabel *label_5;
    QLineEdit *editBin;
    QPushButton *btnBin;
    QLabel *label_6;
    QLineEdit *editOct;
    QPushButton *btnOct;
    QLabel *label_7;
    QLineEdit *editHex;
    QPushButton *btnHex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(255, 197);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editNum = new QLineEdit(Widget);
        editNum->setObjectName(QStringLiteral("editNum"));

        gridLayout->addWidget(editNum, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        editPrice = new QLineEdit(Widget);
        editPrice->setObjectName(QStringLiteral("editPrice"));

        gridLayout->addWidget(editPrice, 0, 3, 1, 1);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        editTotal = new QLineEdit(Widget);
        editTotal->setObjectName(QStringLiteral("editTotal"));

        gridLayout->addWidget(editTotal, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        editDec = new QLineEdit(Widget);
        editDec->setObjectName(QStringLiteral("editDec"));

        gridLayout_2->addWidget(editDec, 0, 1, 1, 1);

        btnDec = new QPushButton(Widget);
        btnDec->setObjectName(QStringLiteral("btnDec"));

        gridLayout_2->addWidget(btnDec, 0, 2, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        editBin = new QLineEdit(Widget);
        editBin->setObjectName(QStringLiteral("editBin"));

        gridLayout_2->addWidget(editBin, 1, 1, 1, 1);

        btnBin = new QPushButton(Widget);
        btnBin->setObjectName(QStringLiteral("btnBin"));

        gridLayout_2->addWidget(btnBin, 1, 2, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        editOct = new QLineEdit(Widget);
        editOct->setObjectName(QStringLiteral("editOct"));

        gridLayout_2->addWidget(editOct, 2, 1, 1, 1);

        btnOct = new QPushButton(Widget);
        btnOct->setObjectName(QStringLiteral("btnOct"));

        gridLayout_2->addWidget(btnOct, 2, 2, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        editHex = new QLineEdit(Widget);
        editHex->setObjectName(QStringLiteral("editHex"));

        gridLayout_2->addWidget(editHex, 3, 1, 1, 1);

        btnHex = new QPushButton(Widget);
        btnHex->setObjectName(QStringLiteral("btnHex"));

        gridLayout_2->addWidget(btnHex, 3, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        editNum->setText(QApplication::translate("Widget", "12", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\215\225\344\273\266\357\274\232", Q_NULLPTR));
        editPrice->setText(QApplication::translate("Widget", "5.3", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\350\256\241\347\256\227", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        editDec->setText(QApplication::translate("Widget", "15", Q_NULLPTR));
        btnDec->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\346\210\220\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        btnBin->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\346\210\220\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        btnOct->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\346\210\220\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        btnHex->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\346\210\220\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
