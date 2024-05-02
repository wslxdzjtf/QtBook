/********************************************************************************
** Form generated from reading UI file 'formdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDOC_H
#define UI_FORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDoc
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *FormDoc)
    {
        if (FormDoc->objectName().isEmpty())
            FormDoc->setObjectName(QStringLiteral("FormDoc"));
        FormDoc->resize(400, 300);
        gridLayout = new QGridLayout(FormDoc);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(FormDoc);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);


        retranslateUi(FormDoc);

        QMetaObject::connectSlotsByName(FormDoc);
    } // setupUi

    void retranslateUi(QWidget *FormDoc)
    {
        FormDoc->setWindowTitle(QApplication::translate("FormDoc", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormDoc: public Ui_FormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDOC_H
