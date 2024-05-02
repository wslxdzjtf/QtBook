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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labName;
    QLabel *labSize;
    QLabel *labType;
    QCheckBox *checkBox;
    QLabel *labPath;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListView *listView;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(619, 359);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labName = new QLabel(centralWidget);
        labName->setObjectName(QStringLiteral("labName"));
        labName->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(labName);

        labSize = new QLabel(centralWidget);
        labSize->setObjectName(QStringLiteral("labSize"));
        labSize->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(labSize);

        labType = new QLabel(centralWidget);
        labType->setObjectName(QStringLiteral("labType"));
        labType->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(labType);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        labPath = new QLabel(centralWidget);
        labPath->setObjectName(QStringLiteral("labPath"));
        labPath->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(labPath);


        gridLayout_4->addLayout(verticalLayout, 1, 0, 1, 1);

        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout_3->addWidget(treeView, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_3);
        splitter_2->addWidget(splitter);

        gridLayout_4->addWidget(splitter_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        labName->setText(QString());
        labSize->setText(QString());
        labType->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\346\230\257\346\226\207\344\273\266\345\244\271", Q_NULLPTR));
        labPath->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "TreeView", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "ListView", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "TableView", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
