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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnClassInfo;
    QLabel *label_2;
    QSpinBox *spinBoxGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *txtEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(368, 272);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxBoy = new QSpinBox(Widget);
        spinBoxBoy->setObjectName(QStringLiteral("spinBoxBoy"));
        spinBoxBoy->setValue(20);

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(Widget);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnClassInfo = new QPushButton(Widget);
        btnClassInfo->setObjectName(QStringLiteral("btnClassInfo"));

        gridLayout->addWidget(btnClassInfo, 0, 3, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxGirl = new QSpinBox(Widget);
        spinBoxGirl->setObjectName(QStringLiteral("spinBoxGirl"));
        spinBoxGirl->setValue(18);

        gridLayout->addWidget(spinBoxGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(Widget);
        btnGirlInc->setObjectName(QStringLiteral("btnGirlInc"));

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(Widget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        txtEdit = new QPlainTextEdit(Widget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));

        verticalLayout->addWidget(txtEdit);


        retranslateUi(Widget);
        QObject::connect(btnClear, SIGNAL(clicked()), txtEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\267\345\255\251\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("Widget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClassInfo->setText(QApplication::translate("Widget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\245\263\345\255\251\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        btnGirlInc->setText(QApplication::translate("Widget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
