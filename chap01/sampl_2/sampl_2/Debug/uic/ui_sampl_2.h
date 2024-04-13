/********************************************************************************
** Form generated from reading UI file 'sampl_2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPL_2_H
#define UI_SAMPL_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sampl_2Class
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sampl_2Class)
    {
        if (sampl_2Class->objectName().isEmpty())
            sampl_2Class->setObjectName(QStringLiteral("sampl_2Class"));
        sampl_2Class->resize(600, 400);
        centralWidget = new QWidget(sampl_2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 130, 81, 18));
        sampl_2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sampl_2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 30));
        sampl_2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sampl_2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        sampl_2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sampl_2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sampl_2Class->setStatusBar(statusBar);

        retranslateUi(sampl_2Class);

        QMetaObject::connectSlotsByName(sampl_2Class);
    } // setupUi

    void retranslateUi(QMainWindow *sampl_2Class)
    {
        sampl_2Class->setWindowTitle(QApplication::translate("sampl_2Class", "sampl_2", Q_NULLPTR));
        label->setText(QApplication::translate("sampl_2Class", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sampl_2Class: public Ui_sampl_2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPL_2_H
