/********************************************************************************
** Form generated from reading UI file 'dialogsetheaders.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETHEADERS_H
#define UI_DIALOGSETHEADERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSetHeaders
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnOK;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnCancel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *DialogSetHeaders)
    {
        if (DialogSetHeaders->objectName().isEmpty())
            DialogSetHeaders->setObjectName(QStringLiteral("DialogSetHeaders"));
        DialogSetHeaders->resize(303, 300);
        gridLayout = new QGridLayout(DialogSetHeaders);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(DialogSetHeaders);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);


        horizontalLayout->addWidget(groupBox);

        frame = new QFrame(DialogSetHeaders);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        btnOK = new QPushButton(frame);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);

        verticalLayout_2->addWidget(btnOK);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        verticalLayout_2->addWidget(btnCancel);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(frame);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(DialogSetHeaders);
        QObject::connect(btnOK, SIGNAL(clicked()), DialogSetHeaders, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), DialogSetHeaders, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSetHeaders);
    } // setupUi

    void retranslateUi(QDialog *DialogSetHeaders)
    {
        DialogSetHeaders->setWindowTitle(QApplication::translate("DialogSetHeaders", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DialogSetHeaders", "\350\241\250\345\244\264\346\240\207\351\242\230", Q_NULLPTR));
        btnOK->setText(QApplication::translate("DialogSetHeaders", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DialogSetHeaders", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogSetHeaders: public Ui_DialogSetHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETHEADERS_H
