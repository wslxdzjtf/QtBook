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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actListIni;
    QAction *actListClear;
    QAction *actListInsert;
    QAction *actListAppend;
    QAction *actListDelete;
    QAction *actSelNone;
    QAction *actSelALL;
    QAction *actQuit;
    QAction *actSelPopMenu;
    QAction *actSelInvs;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page_ListWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QToolButton *tBtnListIni;
    QToolButton *tBtnListClear;
    QToolButton *tBtnListInSert;
    QToolButton *tBtnListAdd;
    QToolButton *tBtnListDel;
    QWidget *page_TreeWidget;
    QWidget *page_TableWidget;
    QTabWidget *tabWidget;
    QWidget *tab_ListWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *tBtnSelectItem;
    QToolButton *tBtnSelALL;
    QToolButton *tBtnSelNone;
    QToolButton *tBtnSelInvs;
    QListWidget *listWidget;
    QWidget *tab_TreeWidget;
    QWidget *tabTableWidget;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(586, 383);
        actListIni = new QAction(MainWindow);
        actListIni->setObjectName(QStringLiteral("actListIni"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListIni->setIcon(icon);
        actListClear = new QAction(MainWindow);
        actListClear->setObjectName(QStringLiteral("actListClear"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListClear->setIcon(icon1);
        actListInsert = new QAction(MainWindow);
        actListInsert->setObjectName(QStringLiteral("actListInsert"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons/424.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListInsert->setIcon(icon2);
        actListAppend = new QAction(MainWindow);
        actListAppend->setObjectName(QStringLiteral("actListAppend"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListAppend->setIcon(icon3);
        actListDelete = new QAction(MainWindow);
        actListDelete->setObjectName(QStringLiteral("actListDelete"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListDelete->setIcon(icon4);
        actSelNone = new QAction(MainWindow);
        actSelNone->setObjectName(QStringLiteral("actSelNone"));
        actSelNone->setMenuRole(QAction::AboutRole);
        actSelALL = new QAction(MainWindow);
        actSelALL->setObjectName(QStringLiteral("actSelALL"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        actSelPopMenu = new QAction(MainWindow);
        actSelPopMenu->setObjectName(QStringLiteral("actSelPopMenu"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/icons/124.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSelPopMenu->setIcon(icon6);
        actSelInvs = new QAction(MainWindow);
        actSelInvs->setObjectName(QStringLiteral("actSelInvs"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(160, 0));
        toolBox->setMaximumSize(QSize(170, 16777215));
        page_ListWidget = new QWidget();
        page_ListWidget->setObjectName(QStringLiteral("page_ListWidget"));
        page_ListWidget->setGeometry(QRect(0, 0, 164, 266));
        widget = new QWidget(page_ListWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 11, 122, 161));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tBtnListIni = new QToolButton(widget);
        tBtnListIni->setObjectName(QStringLiteral("tBtnListIni"));
        tBtnListIni->setMinimumSize(QSize(120, 0));
        tBtnListIni->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(tBtnListIni);

        tBtnListClear = new QToolButton(widget);
        tBtnListClear->setObjectName(QStringLiteral("tBtnListClear"));
        tBtnListClear->setMinimumSize(QSize(120, 0));
        tBtnListClear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(tBtnListClear);

        tBtnListInSert = new QToolButton(widget);
        tBtnListInSert->setObjectName(QStringLiteral("tBtnListInSert"));
        tBtnListInSert->setMinimumSize(QSize(120, 0));
        tBtnListInSert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(tBtnListInSert);

        tBtnListAdd = new QToolButton(widget);
        tBtnListAdd->setObjectName(QStringLiteral("tBtnListAdd"));
        tBtnListAdd->setMinimumSize(QSize(120, 0));
        tBtnListAdd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(tBtnListAdd);

        tBtnListDel = new QToolButton(widget);
        tBtnListDel->setObjectName(QStringLiteral("tBtnListDel"));
        tBtnListDel->setMinimumSize(QSize(120, 0));
        tBtnListDel->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(tBtnListDel);

        toolBox->addItem(page_ListWidget, QString::fromUtf8("QListWidget\346\223\215\344\275\234"));
        page_TreeWidget = new QWidget();
        page_TreeWidget->setObjectName(QStringLiteral("page_TreeWidget"));
        page_TreeWidget->setGeometry(QRect(0, 0, 164, 266));
        toolBox->addItem(page_TreeWidget, QString::fromUtf8(" QTreeWidgt\346\223\215\344\275\234"));
        page_TableWidget = new QWidget();
        page_TableWidget->setObjectName(QStringLiteral("page_TableWidget"));
        toolBox->addItem(page_TableWidget, QString::fromUtf8("QTableWidget\346\223\215\344\275\234"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_ListWidget = new QWidget();
        tab_ListWidget->setObjectName(QStringLiteral("tab_ListWidget"));
        verticalLayout_3 = new QVBoxLayout(tab_ListWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(tab_ListWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        lineEdit->setPalette(palette);
        lineEdit->setContextMenuPolicy(Qt::CustomContextMenu);
        lineEdit->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        lineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lineEdit);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_ListWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tBtnSelectItem = new QToolButton(groupBox_2);
        tBtnSelectItem->setObjectName(QStringLiteral("tBtnSelectItem"));
        tBtnSelectItem->setMinimumSize(QSize(100, 25));
        tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);
        tBtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tBtnSelectItem);

        tBtnSelALL = new QToolButton(groupBox_2);
        tBtnSelALL->setObjectName(QStringLiteral("tBtnSelALL"));
        tBtnSelALL->setMinimumSize(QSize(70, 25));
        tBtnSelALL->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tBtnSelALL);

        tBtnSelNone = new QToolButton(groupBox_2);
        tBtnSelNone->setObjectName(QStringLiteral("tBtnSelNone"));
        tBtnSelNone->setMinimumSize(QSize(70, 25));
        tBtnSelNone->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tBtnSelNone);

        tBtnSelInvs = new QToolButton(groupBox_2);
        tBtnSelInvs->setObjectName(QStringLiteral("tBtnSelInvs"));
        tBtnSelInvs->setMinimumSize(QSize(70, 25));
        tBtnSelInvs->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tBtnSelInvs);


        verticalLayout_3->addWidget(groupBox_2);

        listWidget = new QListWidget(tab_ListWidget);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/icons/check2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        __qlistwidgetitem->setIcon(icon7);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        __qlistwidgetitem1->setIcon(icon7);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(listWidget);

        tabWidget->addTab(tab_ListWidget, QString());
        tab_TreeWidget = new QWidget();
        tab_TreeWidget->setObjectName(QStringLiteral("tab_TreeWidget"));
        tabWidget->addTab(tab_TreeWidget, QString());
        tabTableWidget = new QWidget();
        tabTableWidget->setObjectName(QStringLiteral("tabTableWidget"));
        tabWidget->addTab(tabTableWidget, QString());
        splitter->addWidget(tabWidget);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actListIni);
        mainToolBar->addAction(actListClear);
        mainToolBar->addAction(actListInsert);
        mainToolBar->addAction(actListAppend);
        mainToolBar->addAction(actListDelete);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actListIni->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListIni->setToolTip(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListIni->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListClear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actListInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListInsert->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListInsert->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListAppend->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListAppend->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListAppend->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actListDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actListDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actListDelete->setShortcut(QApplication::translate("MainWindow", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSelNone->setText(QApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelNone->setToolTip(QApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelALL->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelALL->setToolTip(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelPopMenu->setText(QApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelPopMenu->setToolTip(QApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelInvs->setText(QApplication::translate("MainWindow", "\345\217\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelInvs->setToolTip(QApplication::translate("MainWindow", "\345\217\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tBtnListIni->setText(QApplication::translate("MainWindow", "tBtnListIni", Q_NULLPTR));
        tBtnListClear->setText(QApplication::translate("MainWindow", "tBtnListClear", Q_NULLPTR));
        tBtnListInSert->setText(QApplication::translate("MainWindow", "tBtnListInSert", Q_NULLPTR));
        tBtnListAdd->setText(QApplication::translate("MainWindow", "tBtnListAdd", Q_NULLPTR));
        tBtnListDel->setText(QApplication::translate("MainWindow", "tBtnListDel", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_ListWidget), QApplication::translate("MainWindow", "QListWidget\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_TreeWidget), QApplication::translate("MainWindow", " QTreeWidgt\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_TableWidget), QApplication::translate("MainWindow", "QTableWidget\346\223\215\344\275\234", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        tBtnSelectItem->setText(QApplication::translate("MainWindow", "tBtnSelectItem", Q_NULLPTR));
        tBtnSelALL->setText(QApplication::translate("MainWindow", "tBtnSelALL", Q_NULLPTR));
        tBtnSelNone->setText(QApplication::translate("MainWindow", "tBtnSelNone", Q_NULLPTR));
        tBtnSelInvs->setText(QApplication::translate("MainWindow", "tBtnSelInvs", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Item 1", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Item 2", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_ListWidget), QApplication::translate("MainWindow", "QListWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_TreeWidget), QApplication::translate("MainWindow", "QTreeWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabTableWidget), QApplication::translate("MainWindow", "QTableWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
