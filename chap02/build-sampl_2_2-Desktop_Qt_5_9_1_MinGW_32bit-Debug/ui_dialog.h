/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxUnderline;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnGreen;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(515, 300);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxUnderline = new QCheckBox(groupBox);
        checkBoxUnderline->setObjectName(QStringLiteral("checkBoxUnderline"));

        horizontalLayout->addWidget(checkBoxUnderline);

        checkBoxItalic = new QCheckBox(groupBox);
        checkBoxItalic->setObjectName(QStringLiteral("checkBoxItalic"));

        horizontalLayout->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(groupBox);
        checkBoxBold->setObjectName(QStringLiteral("checkBoxBold"));

        horizontalLayout->addWidget(checkBoxBold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));

        horizontalLayout_2->addWidget(rBtnBlue);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));

        horizontalLayout_2->addWidget(rBtnRed);

        rBtnGreen = new QRadioButton(groupBox_2);
        rBtnGreen->setObjectName(QStringLiteral("rBtnGreen"));

        horizontalLayout_2->addWidget(rBtnGreen);


        verticalLayout->addWidget(groupBox_2);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font;
        font.setPointSize(15);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout_3->addWidget(btnOK);

        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnClose = new QPushButton(Dialog);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_3->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(checkBoxUnderline, checkBoxItalic);
        QWidget::setTabOrder(checkBoxItalic, checkBoxBold);
        QWidget::setTabOrder(checkBoxBold, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, rBtnRed);
        QWidget::setTabOrder(rBtnRed, rBtnGreen);
        QWidget::setTabOrder(rBtnGreen, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnClose);

        retranslateUi(Dialog);
        QObject::connect(btnOK, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        checkBoxUnderline->setText(QApplication::translate("Dialog", "Underline", Q_NULLPTR));
        checkBoxItalic->setText(QApplication::translate("Dialog", "Italic", Q_NULLPTR));
        checkBoxBold->setText(QApplication::translate("Dialog", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\351\242\234\350\211\262", Q_NULLPTR));
        rBtnBlue->setText(QApplication::translate("Dialog", "blue", Q_NULLPTR));
        rBtnRed->setText(QApplication::translate("Dialog", "red", Q_NULLPTR));
        rBtnGreen->setText(QApplication::translate("Dialog", "green", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("Dialog", "Hello my love\n"
"I've been searching for someone like you", Q_NULLPTR));
        btnOK->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
