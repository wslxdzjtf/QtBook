/********************************************************************************
** Form generated from reading UI file 'qdialoglocate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOGLOCATE_H
#define UI_QDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QDialogLocate
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxColumn;
    QCheckBox *chkBoxColumn;
    QLabel *label_2;
    QSpinBox *spinBoxRow;
    QCheckBox *chkBoxRow;
    QLabel *label_3;
    QLineEdit *edtCaption;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSetText;
    QPushButton *btnClose;

    void setupUi(QDialog *QDialogLocate)
    {
        if (QDialogLocate->objectName().isEmpty())
            QDialogLocate->setObjectName(QStringLiteral("QDialogLocate"));
        QDialogLocate->resize(336, 127);
        horizontalLayout = new QHBoxLayout(QDialogLocate);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(QDialogLocate);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QStringLiteral("spinBoxColumn"));
        spinBoxColumn->setMinimum(0);

        gridLayout->addWidget(spinBoxColumn, 0, 1, 1, 1);

        chkBoxColumn = new QCheckBox(groupBox);
        chkBoxColumn->setObjectName(QStringLiteral("chkBoxColumn"));

        gridLayout->addWidget(chkBoxColumn, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QStringLiteral("spinBoxRow"));

        gridLayout->addWidget(spinBoxRow, 1, 1, 1, 1);

        chkBoxRow = new QCheckBox(groupBox);
        chkBoxRow->setObjectName(QStringLiteral("chkBoxRow"));

        gridLayout->addWidget(chkBoxRow, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        edtCaption = new QLineEdit(groupBox);
        edtCaption->setObjectName(QStringLiteral("edtCaption"));

        gridLayout->addWidget(edtCaption, 2, 1, 1, 2);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnSetText = new QPushButton(QDialogLocate);
        btnSetText->setObjectName(QStringLiteral("btnSetText"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetText->setIcon(icon);

        verticalLayout->addWidget(btnSetText);

        btnClose = new QPushButton(QDialogLocate);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);

        verticalLayout->addWidget(btnClose);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(QDialogLocate);
        QObject::connect(btnClose, SIGNAL(clicked()), QDialogLocate, SLOT(close()));

        QMetaObject::connectSlotsByName(QDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *QDialogLocate)
    {
        QDialogLocate->setWindowTitle(QApplication::translate("QDialogLocate", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("QDialogLocate", "\345\210\227  \345\217\267", Q_NULLPTR));
        chkBoxColumn->setText(QApplication::translate("QDialogLocate", "\345\210\227\345\242\236", Q_NULLPTR));
        label_2->setText(QApplication::translate("QDialogLocate", "\350\241\214  \345\217\267", Q_NULLPTR));
        chkBoxRow->setText(QApplication::translate("QDialogLocate", "\350\241\214\345\242\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("QDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", Q_NULLPTR));
        btnSetText->setText(QApplication::translate("QDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", Q_NULLPTR));
        btnClose->setText(QApplication::translate("QDialogLocate", "\345\205\263  \351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDialogLocate: public Ui_QDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOGLOCATE_H
