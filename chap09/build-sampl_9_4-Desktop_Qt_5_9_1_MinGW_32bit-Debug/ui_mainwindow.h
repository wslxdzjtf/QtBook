/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <axbchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actZoomReset;
    QAction *actQuit;
    QAction *actZoomIn;
    QAction *actZoomOut;
    QWidget *centralWidget;
    AXBChartView *chartView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 500);
        actZoomReset = new QAction(MainWindow);
        actZoomReset->setObjectName(QStringLiteral("actZoomReset"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/414.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomReset->setIcon(icon);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QStringLiteral("actZoomIn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/418.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomIn->setIcon(icon2);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QStringLiteral("actZoomOut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/416.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actZoomOut->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        chartView = new AXBChartView(centralWidget);
        chartView->setObjectName(QStringLiteral("chartView"));
        chartView->setGeometry(QRect(60, 20, 256, 192));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actZoomIn);
        mainToolBar->addAction(actZoomOut);
        mainToolBar->addAction(actZoomReset);
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actZoomReset->setText(QApplication::translate("MainWindow", "\345\216\237\345\247\213\345\244\247\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomReset->setToolTip(QApplication::translate("MainWindow", "\345\216\237\345\247\213\345\244\247\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomIn->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actZoomOut->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
