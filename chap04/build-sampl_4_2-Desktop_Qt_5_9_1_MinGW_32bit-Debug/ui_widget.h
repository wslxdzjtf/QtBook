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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox1;
    QLabel *label_2;
    QComboBox *comboBox2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_28;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *edtResult;
    QCheckBox *checkBox;
    QLabel *LabSpin;
    QSpinBox *spinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(488, 307);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox1 = new QComboBox(Widget);
        comboBox1->setObjectName(QStringLiteral("comboBox1"));
        comboBox1->setEditable(true);

        gridLayout->addWidget(comboBox1, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox2 = new QComboBox(Widget);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));
        comboBox2->setEditable(true);

        gridLayout->addWidget(comboBox2, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pushButton_29 = new QPushButton(groupBox);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_29);

        pushButton_30 = new QPushButton(groupBox);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_30);

        pushButton_31 = new QPushButton(groupBox);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_31);

        pushButton_32 = new QPushButton(groupBox);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_32);

        pushButton_33 = new QPushButton(groupBox);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_33);

        pushButton_34 = new QPushButton(groupBox);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_34);

        pushButton_28 = new QPushButton(groupBox);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_28);

        pushButton_35 = new QPushButton(groupBox);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_35);

        pushButton_36 = new QPushButton(groupBox);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_36);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        pushButton_19 = new QPushButton(groupBox_3);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pushButton_19);

        pushButton_20 = new QPushButton(groupBox_3);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton_20);

        pushButton_21 = new QPushButton(groupBox_3);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pushButton_21);

        pushButton_22 = new QPushButton(groupBox_3);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, pushButton_22);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        pushButton_23 = new QPushButton(groupBox_2);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, pushButton_23);

        pushButton_24 = new QPushButton(groupBox_2);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pushButton_24);

        pushButton_25 = new QPushButton(groupBox_2);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, pushButton_25);

        pushButton_26 = new QPushButton(groupBox_2);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, pushButton_26);

        pushButton_27 = new QPushButton(groupBox_2);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pushButton_27);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        edtResult = new QLineEdit(Widget);
        edtResult->setObjectName(QStringLiteral("edtResult"));

        gridLayout_2->addWidget(edtResult, 0, 1, 1, 3);

        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 1, 0, 1, 2);

        LabSpin = new QLabel(Widget);
        LabSpin->setObjectName(QStringLiteral("LabSpin"));
        LabSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(LabSpin, 1, 2, 1, 1);

        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(1000);

        gridLayout_2->addWidget(spinBox, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "str1", Q_NULLPTR));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("Widget", "G:\\Qt5Book\\QT5.9Study", Q_NULLPTR)
         << QApplication::translate("Widget", "G:\\Qt5Book\\QT5.9Study\\qw.cpp", Q_NULLPTR)
         << QApplication::translate("Widget", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\214\347\224\267\357\274\2141984-3-4\357\274\214\346\261\211\346\227\217\357\274\214\345\261\261\344\270\234", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Widget", "str2", Q_NULLPTR));
        comboBox2->clear();
        comboBox2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\\", Q_NULLPTR)
         << QApplication::translate("Widget", ".cpp", Q_NULLPTR)
         << QApplication::translate("Widget", ":", Q_NULLPTR)
         << QApplication::translate("Widget", "\357\274\214", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        pushButton_29->setText(QApplication::translate("Widget", "Append", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("Widget", "Prepend", Q_NULLPTR));
        pushButton_31->setText(QApplication::translate("Widget", "toUpper", Q_NULLPTR));
        pushButton_32->setText(QApplication::translate("Widget", "toLower", Q_NULLPTR));
        pushButton_33->setText(QApplication::translate("Widget", "left", Q_NULLPTR));
        pushButton_34->setText(QApplication::translate("Widget", "right", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("Widget", "section", Q_NULLPTR));
        pushButton_35->setText(QApplication::translate("Widget", "simplified", Q_NULLPTR));
        pushButton_36->setText(QApplication::translate("Widget", "trimmed", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\225\260\345\255\227", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("Widget", "count", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("Widget", "size", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("Widget", "indexOf", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("Widget", "lastIndexOf", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\351\200\273\350\276\221\345\210\244\346\226\255", Q_NULLPTR));
        pushButton_23->setText(QApplication::translate("Widget", "endsWith", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("Widget", "startsWith", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("Widget", "contains", Q_NULLPTR));
        pushButton_26->setText(QApplication::translate("Widget", "isNull", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("Widget", "isEmpty", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\347\273\223\346\236\234", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "CheckBox", Q_NULLPTR));
        LabSpin->setText(QApplication::translate("Widget", "LabSpin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
