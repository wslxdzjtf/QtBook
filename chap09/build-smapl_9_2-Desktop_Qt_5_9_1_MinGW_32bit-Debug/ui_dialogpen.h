/********************************************************************************
** Form generated from reading UI file 'dialogpen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPEN_H
#define UI_DIALOGPEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPen
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinWidth;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *comboPenStyle;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnColor;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btnOK;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnCancel;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *DialogPen)
    {
        if (DialogPen->objectName().isEmpty())
            DialogPen->setObjectName(QStringLiteral("DialogPen"));
        DialogPen->resize(324, 147);
        horizontalLayout = new QHBoxLayout(DialogPen);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(DialogPen);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        spinWidth = new QSpinBox(groupBox);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        spinWidth->setMinimumSize(QSize(100, 0));
        spinWidth->setMinimum(1);
        spinWidth->setMaximum(100);

        gridLayout->addWidget(spinWidth, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboPenStyle = new QComboBox(groupBox);
        comboPenStyle->setObjectName(QStringLiteral("comboPenStyle"));

        gridLayout->addWidget(comboPenStyle, 0, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        btnColor = new QPushButton(groupBox);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        btnColor->setAutoFillBackground(false);
        btnColor->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 255);"));
        btnColor->setFlat(false);

        gridLayout->addWidget(btnColor, 4, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        btnOK = new QPushButton(DialogPen);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        verticalLayout->addWidget(btnOK);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        btnCancel = new QPushButton(DialogPen);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        verticalLayout->addWidget(btnCancel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(DialogPen);
        QObject::connect(btnOK, SIGNAL(clicked()), DialogPen, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), DialogPen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPen);
    } // setupUi

    void retranslateUi(QDialog *DialogPen)
    {
        DialogPen->setWindowTitle(QApplication::translate("DialogPen", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DialogPen", "Pen\345\261\236\346\200\247\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("DialogPen", "\347\272\277 \345\236\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogPen", "\351\242\234 \350\211\262", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogPen", "\347\272\277 \345\256\275", Q_NULLPTR));
        btnColor->setText(QString());
        btnOK->setText(QApplication::translate("DialogPen", "\347\241\256 \345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DialogPen", "\345\217\226 \346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogPen: public Ui_DialogPen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPEN_H
