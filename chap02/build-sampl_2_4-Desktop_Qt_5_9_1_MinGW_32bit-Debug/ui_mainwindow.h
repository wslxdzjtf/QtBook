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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNew;
    QAction *actOpen;
    QAction *actClose;
    QAction *actCut;
    QAction *actCopy;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnderline;
    QAction *actPaste;
    QAction *actClear;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(517, 300);
        actNew = new QAction(MainWindow);
        actNew->setObjectName(QStringLiteral("actNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/new2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon1);
        actClose = new QAction(MainWindow);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon2);
        actCut = new QAction(MainWindow);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon3);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon4);
        actFontBold = new QAction(MainWindow);
        actFontBold->setObjectName(QStringLiteral("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon5);
        actFontItalic = new QAction(MainWindow);
        actFontItalic->setObjectName(QStringLiteral("actFontItalic"));
        actFontItalic->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontItalic->setIcon(icon6);
        actFontUnderline = new QAction(MainWindow);
        actFontUnderline->setObjectName(QStringLiteral("actFontUnderline"));
        actFontUnderline->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/UNDRLN.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontUnderline->setIcon(icon7);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/images/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon8);
        actClear = new QAction(MainWindow);
        actClear->setObjectName(QStringLiteral("actClear"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 40, 321, 131));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 517, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addAction(actClose);
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actPaste);
        menu_2->addAction(actClear);
        mainToolBar->addAction(actNew);
        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actClose);
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addAction(actFontBold);
        mainToolBar->addAction(actFontItalic);
        mainToolBar->addAction(actFontUnderline);

        retranslateUi(MainWindow);
        QObject::connect(actClose, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(actPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(actClear, SIGNAL(triggered()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFontBold->setText(QApplication::translate("MainWindow", "\347\262\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontBold->setToolTip(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\212\240\347\262\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontItalic->setText(QApplication::translate("MainWindow", "\346\226\234\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontItalic->setToolTip(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\200\276\346\226\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontUnderline->setText(QApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontUnderline->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPaste->setText(QApplication::translate("MainWindow", "\347\262\230\347\262\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("MainWindow", "\347\262\230\347\262\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\346\240\274\345\274\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
