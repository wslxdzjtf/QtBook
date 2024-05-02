/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnDelCurRow;
    QPushButton *btnInsertRow;
    QPushButton *btnAppendRow;
    QCheckBox *chkBoxHeaderH;
    QCheckBox *chkBoxTabEditable;
    QPushButton *btnReadToEdit;
    QCheckBox *chkBoxRowColor;
    QRadioButton *rBtnSelectItem;
    QCheckBox *chkBoxHeaderV;
    QRadioButton *rBtnSelectRow;
    QPushButton *btnIniData;
    QSpinBox *spinRowCount;
    QPushButton *btnSetHeader;
    QPushButton *btnSetRows;
    QPushButton *btnAutoHeght;
    QPushButton *btnAutoWidth;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(517, 399);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter_2 = new QSplitter(Widget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(260, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnDelCurRow = new QPushButton(groupBox);
        btnDelCurRow->setObjectName(QStringLiteral("btnDelCurRow"));

        gridLayout->addWidget(btnDelCurRow, 4, 0, 1, 2);

        btnInsertRow = new QPushButton(groupBox);
        btnInsertRow->setObjectName(QStringLiteral("btnInsertRow"));

        gridLayout->addWidget(btnInsertRow, 3, 0, 1, 1);

        btnAppendRow = new QPushButton(groupBox);
        btnAppendRow->setObjectName(QStringLiteral("btnAppendRow"));

        gridLayout->addWidget(btnAppendRow, 3, 1, 1, 1);

        chkBoxHeaderH = new QCheckBox(groupBox);
        chkBoxHeaderH->setObjectName(QStringLiteral("chkBoxHeaderH"));
        chkBoxHeaderH->setChecked(true);

        gridLayout->addWidget(chkBoxHeaderH, 8, 0, 1, 1);

        chkBoxTabEditable = new QCheckBox(groupBox);
        chkBoxTabEditable->setObjectName(QStringLiteral("chkBoxTabEditable"));
        chkBoxTabEditable->setChecked(true);

        gridLayout->addWidget(chkBoxTabEditable, 7, 0, 1, 1);

        btnReadToEdit = new QPushButton(groupBox);
        btnReadToEdit->setObjectName(QStringLiteral("btnReadToEdit"));
        btnReadToEdit->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(btnReadToEdit, 6, 0, 1, 2);

        chkBoxRowColor = new QCheckBox(groupBox);
        chkBoxRowColor->setObjectName(QStringLiteral("chkBoxRowColor"));
        chkBoxRowColor->setChecked(true);

        gridLayout->addWidget(chkBoxRowColor, 7, 1, 1, 1);

        rBtnSelectItem = new QRadioButton(groupBox);
        rBtnSelectItem->setObjectName(QStringLiteral("rBtnSelectItem"));
        rBtnSelectItem->setChecked(true);

        gridLayout->addWidget(rBtnSelectItem, 9, 1, 1, 1);

        chkBoxHeaderV = new QCheckBox(groupBox);
        chkBoxHeaderV->setObjectName(QStringLiteral("chkBoxHeaderV"));
        chkBoxHeaderV->setChecked(true);

        gridLayout->addWidget(chkBoxHeaderV, 8, 1, 1, 1);

        rBtnSelectRow = new QRadioButton(groupBox);
        rBtnSelectRow->setObjectName(QStringLiteral("rBtnSelectRow"));
        rBtnSelectRow->setChecked(false);

        gridLayout->addWidget(rBtnSelectRow, 9, 0, 1, 1);

        btnIniData = new QPushButton(groupBox);
        btnIniData->setObjectName(QStringLiteral("btnIniData"));
        btnIniData->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(btnIniData, 2, 0, 1, 2);

        spinRowCount = new QSpinBox(groupBox);
        spinRowCount->setObjectName(QStringLiteral("spinRowCount"));
        spinRowCount->setMinimum(2);
        spinRowCount->setValue(10);

        gridLayout->addWidget(spinRowCount, 1, 1, 1, 1);

        btnSetHeader = new QPushButton(groupBox);
        btnSetHeader->setObjectName(QStringLiteral("btnSetHeader"));
        btnSetHeader->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(btnSetHeader, 0, 0, 1, 2);

        btnSetRows = new QPushButton(groupBox);
        btnSetRows->setObjectName(QStringLiteral("btnSetRows"));
        btnSetRows->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(btnSetRows, 1, 0, 1, 1);

        btnAutoHeght = new QPushButton(groupBox);
        btnAutoHeght->setObjectName(QStringLiteral("btnAutoHeght"));

        gridLayout->addWidget(btnAutoHeght, 5, 0, 1, 1);

        btnAutoWidth = new QPushButton(groupBox);
        btnAutoWidth->setObjectName(QStringLiteral("btnAutoWidth"));

        gridLayout->addWidget(btnAutoWidth, 5, 1, 1, 1);

        splitter_2->addWidget(groupBox);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        splitter->addWidget(tableWidget);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        splitter->addWidget(plainTextEdit);
        splitter_2->addWidget(splitter);

        gridLayout_2->addWidget(splitter_2, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QString());
        btnDelCurRow->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", Q_NULLPTR));
        btnInsertRow->setText(QApplication::translate("Widget", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
        btnAppendRow->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
        chkBoxHeaderH->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", Q_NULLPTR));
        chkBoxTabEditable->setText(QApplication::translate("Widget", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        btnReadToEdit->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", Q_NULLPTR));
        chkBoxRowColor->setText(QApplication::translate("Widget", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", Q_NULLPTR));
        rBtnSelectItem->setText(QApplication::translate("Widget", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", Q_NULLPTR));
        chkBoxHeaderV->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", Q_NULLPTR));
        rBtnSelectRow->setText(QApplication::translate("Widget", "\350\241\214\351\200\211\346\213\251", Q_NULLPTR));
        btnIniData->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", Q_NULLPTR));
        btnSetHeader->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\350\241\250\345\244\264", Q_NULLPTR));
        btnSetRows->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\350\241\214\346\225\260", Q_NULLPTR));
        btnAutoHeght->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", Q_NULLPTR));
        btnAutoWidth->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
