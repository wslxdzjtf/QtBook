/********************************************************************************
** Form generated from reading UI file 'qdialogsetsize.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOGSETSIZE_H
#define UI_QDIALOGSETSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
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

class Ui_QDialogSetSize
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *spinBoxColumn;
    QLabel *label;
    QSpinBox *spinBoxRow;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *QDialogSetSize)
    {
        if (QDialogSetSize->objectName().isEmpty())
            QDialogSetSize->setObjectName(QStringLiteral("QDialogSetSize"));
        QDialogSetSize->resize(283, 138);
        gridLayout = new QGridLayout(QDialogSetSize);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(QDialogSetSize);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QStringLiteral("spinBoxColumn"));
        spinBoxColumn->setMinimum(1);
        spinBoxColumn->setMaximum(500);
        spinBoxColumn->setValue(6);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxColumn);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QStringLiteral("spinBoxRow"));
        spinBoxRow->setMinimum(1);
        spinBoxRow->setMaximum(500);
        spinBoxRow->setValue(10);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxRow);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnOK = new QPushButton(QDialogSetSize);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);

        verticalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(QDialogSetSize);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        verticalLayout->addWidget(btnCancel);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(QDialogSetSize);
        QObject::connect(btnOK, SIGNAL(clicked()), QDialogSetSize, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QDialogSetSize, SLOT(reject()));

        QMetaObject::connectSlotsByName(QDialogSetSize);
    } // setupUi

    void retranslateUi(QDialog *QDialogSetSize)
    {
        QDialogSetSize->setWindowTitle(QApplication::translate("QDialogSetSize", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QDialogSetSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("QDialogSetSize", "\345\210\227  \346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("QDialogSetSize", "\350\241\214  \346\225\260", Q_NULLPTR));
        btnOK->setText(QApplication::translate("QDialogSetSize", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QDialogSetSize", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDialogSetSize: public Ui_QDialogSetSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOGSETSIZE_H
