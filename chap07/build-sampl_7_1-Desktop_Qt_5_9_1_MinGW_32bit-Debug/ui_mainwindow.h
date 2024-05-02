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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen_IODevice;
    QAction *actOpen_TextStream;
    QAction *actQuit;
    QAction *actSave_IODevice;
    QAction *actSave_TextStream;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_7;
    QPlainTextEdit *plainTextEditIODevice;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_8;
    QPlainTextEdit *plainTextEditTextStream;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(518, 349);
        actOpen_IODevice = new QAction(MainWindow);
        actOpen_IODevice->setObjectName(QStringLiteral("actOpen_IODevice"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_IODevice->setIcon(icon);
        actOpen_TextStream = new QAction(MainWindow);
        actOpen_TextStream->setObjectName(QStringLiteral("actOpen_TextStream"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen_TextStream->setIcon(icon1);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        actSave_IODevice = new QAction(MainWindow);
        actSave_IODevice->setObjectName(QStringLiteral("actSave_IODevice"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_IODevice->setIcon(icon3);
        actSave_TextStream = new QAction(MainWindow);
        actSave_TextStream->setObjectName(QStringLiteral("actSave_TextStream"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/066.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actSave_TextStream->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 10, 471, 261));
        tabWidget->setDocumentMode(false);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        verticalLayout_7 = new QVBoxLayout(tab_7);
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        plainTextEditIODevice = new QPlainTextEdit(tab_7);
        plainTextEditIODevice->setObjectName(QStringLiteral("plainTextEditIODevice"));
        QFont font;
        font.setPointSize(12);
        plainTextEditIODevice->setFont(font);

        verticalLayout_7->addWidget(plainTextEditIODevice);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        verticalLayout_8 = new QVBoxLayout(tab_8);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 2, 2, 2);
        plainTextEditTextStream = new QPlainTextEdit(tab_8);
        plainTextEditTextStream->setObjectName(QStringLiteral("plainTextEditTextStream"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        plainTextEditTextStream->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        plainTextEditTextStream->setFont(font1);

        verticalLayout_8->addWidget(plainTextEditTextStream);

        tabWidget->addTab(tab_8, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 518, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actOpen_IODevice);
        mainToolBar->addAction(actSave_IODevice);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actOpen_TextStream);
        mainToolBar->addAction(actSave_TextStream);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actOpen_IODevice->setText(QApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen_IODevice->setToolTip(QApplication::translate("MainWindow", "\347\224\250QFile\347\233\264\346\216\245\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actOpen_TextStream->setText(QApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen_TextStream->setToolTip(QApplication::translate("MainWindow", "\347\224\250QtextStream\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave_IODevice->setText(QApplication::translate("MainWindow", "QFile\345\217\246\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave_IODevice->setToolTip(QApplication::translate("MainWindow", "\347\224\250QFile\347\233\264\346\216\245\345\217\246\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave_TextStream->setText(QApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave_TextStream->setToolTip(QApplication::translate("MainWindow", "\347\224\250QTextStream\345\217\246\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\223\215\344\275\234", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "QTextStream\346\223\215\344\275\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
