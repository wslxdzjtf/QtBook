/********************************************************************************
** Form generated from reading UI file 'formtable.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTABLE_H
#define UI_FORMTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormTable
{
public:
    QAction *actSize;
    QAction *actSetHeader;
    QAction *actClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *FormTable)
    {
        if (FormTable->objectName().isEmpty())
            FormTable->setObjectName(QStringLiteral("FormTable"));
        FormTable->resize(544, 337);
        actSize = new QAction(FormTable);
        actSize->setObjectName(QStringLiteral("actSize"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSize->setIcon(icon);
        actSetHeader = new QAction(FormTable);
        actSetHeader->setObjectName(QStringLiteral("actSetHeader"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSetHeader->setIcon(icon1);
        actClose = new QAction(FormTable);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon2);
        centralwidget = new QWidget(FormTable);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        FormTable->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormTable);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 544, 17));
        FormTable->setMenuBar(menubar);
        statusbar = new QStatusBar(FormTable);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FormTable->setStatusBar(statusbar);
        toolBar = new QToolBar(FormTable);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        FormTable->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actSize);
        toolBar->addAction(actSetHeader);
        toolBar->addAction(actClose);

        retranslateUi(FormTable);

        QMetaObject::connectSlotsByName(FormTable);
    } // setupUi

    void retranslateUi(QMainWindow *FormTable)
    {
        FormTable->setWindowTitle(QApplication::translate("FormTable", "MainWindow", Q_NULLPTR));
        actSize->setText(QApplication::translate("FormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSize->setToolTip(QApplication::translate("FormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSetHeader->setText(QApplication::translate("FormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSetHeader->setToolTip(QApplication::translate("FormTable", "\350\256\276\347\275\256\350\241\250\345\244\264\346\226\207\345\255\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("FormTable", "\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("FormTable", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("FormTable", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormTable: public Ui_FormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTABLE_H
