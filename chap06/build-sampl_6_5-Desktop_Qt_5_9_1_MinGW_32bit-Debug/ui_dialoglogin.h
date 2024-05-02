/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *editUser;
    QLabel *label_3;
    QLineEdit *editPSWD;
    QCheckBox *chkBoxSave;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(532, 380);
        verticalLayout = new QVBoxLayout(DialogLogin);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(DialogLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/splash.jpg")));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(DialogLogin);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        editUser = new QLineEdit(DialogLogin);
        editUser->setObjectName(QStringLiteral("editUser"));

        horizontalLayout->addWidget(editUser);

        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        editPSWD = new QLineEdit(DialogLogin);
        editPSWD->setObjectName(QStringLiteral("editPSWD"));
        editPSWD->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(editPSWD);

        chkBoxSave = new QCheckBox(DialogLogin);
        chkBoxSave->setObjectName(QStringLiteral("chkBoxSave"));

        horizontalLayout->addWidget(chkBoxSave);

        horizontalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnOK = new QPushButton(DialogLogin);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(DialogLogin);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogLogin);
        QObject::connect(btnCancel, SIGNAL(clicked()), DialogLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("DialogLogin", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogLogin", "\345\257\206 \347\240\201", Q_NULLPTR));
        chkBoxSave->setText(QApplication::translate("DialogLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        btnOK->setText(QApplication::translate("DialogLogin", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DialogLogin", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
