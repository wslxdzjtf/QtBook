/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *btnGetTime;
    QLabel *LabDateTime;
    QLabel *label;
    QTimeEdit *timeEdit;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *editTime;
    QPushButton *btnSetTime;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLineEdit *editDate;
    QPushButton *btnSetDate;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editDateTime;
    QPushButton *btnSetDateTime;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *btnStart;
    QLabel *LabElapsTime;
    QSpinBox *spinBoxIntv;
    QPushButton *btnSetIntv;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStop;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *LCDHour;
    QLCDNumber *LCDMin;
    QLCDNumber *LCDSec;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *editCalendar;
    QCalendarWidget *calendarWidget;
    QSpacerItem *verticalSpacer;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(754, 359);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnGetTime = new QPushButton(groupBox_2);
        btnGetTime->setObjectName(QStringLiteral("btnGetTime"));

        gridLayout->addWidget(btnGetTime, 0, 0, 1, 2);

        LabDateTime = new QLabel(groupBox_2);
        LabDateTime->setObjectName(QStringLiteral("LabDateTime"));
        LabDateTime->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LabDateTime, 0, 3, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setCalendarPopup(true);
        timeEdit->setTime(QTime(15, 30, 55));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(94, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        editTime = new QLineEdit(groupBox_2);
        editTime->setObjectName(QStringLiteral("editTime"));

        gridLayout->addWidget(editTime, 1, 3, 1, 1);

        btnSetTime = new QPushButton(groupBox_2);
        btnSetTime->setObjectName(QStringLiteral("btnSetTime"));

        gridLayout->addWidget(btnSetTime, 1, 4, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        dateEdit->setDate(QDate(2016, 11, 21));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 2);

        editDate = new QLineEdit(groupBox_2);
        editDate->setObjectName(QStringLiteral("editDate"));

        gridLayout->addWidget(editDate, 2, 3, 1, 1);

        btnSetDate = new QPushButton(groupBox_2);
        btnSetDate->setObjectName(QStringLiteral("btnSetDate"));

        gridLayout->addWidget(btnSetDate, 2, 4, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setMinimumSize(QSize(160, 0));
        dateTimeEdit->setDateTime(QDateTime(QDate(2018, 10, 9), QTime(8, 21, 28)));
        dateTimeEdit->setDate(QDate(2018, 10, 9));
        dateTimeEdit->setTime(QTime(8, 21, 28));
        dateTimeEdit->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        dateTimeEdit->setMinimumDateTime(QDateTime(QDate(1763, 9, 14), QTime(0, 0, 0)));
        dateTimeEdit->setMinimumDate(QDate(1763, 9, 14));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateTimeEdit->setCalendarPopup(false);
        dateTimeEdit->setCurrentSectionIndex(0);
        dateTimeEdit->setTimeSpec(Qt::LocalTime);

        gridLayout->addWidget(dateTimeEdit, 3, 1, 1, 2);

        editDateTime = new QLineEdit(groupBox_2);
        editDateTime->setObjectName(QStringLiteral("editDateTime"));
        editDateTime->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(editDateTime, 3, 3, 1, 1);

        btnSetDateTime = new QPushButton(groupBox_2);
        btnSetDateTime->setObjectName(QStringLiteral("btnSetDateTime"));

        gridLayout->addWidget(btnSetDateTime, 3, 4, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        gridLayout_2->addWidget(btnStart, 0, 0, 1, 2);

        LabElapsTime = new QLabel(groupBox);
        LabElapsTime->setObjectName(QStringLiteral("LabElapsTime"));

        gridLayout_2->addWidget(LabElapsTime, 0, 4, 2, 1);

        spinBoxIntv = new QSpinBox(groupBox);
        spinBoxIntv->setObjectName(QStringLiteral("spinBoxIntv"));
        spinBoxIntv->setMaximum(999999);
        spinBoxIntv->setValue(1000);

        gridLayout_2->addWidget(spinBoxIntv, 1, 1, 2, 2);

        btnSetIntv = new QPushButton(groupBox);
        btnSetIntv->setObjectName(QStringLiteral("btnSetIntv"));

        gridLayout_2->addWidget(btnSetIntv, 1, 3, 2, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 4, 1, 1);

        btnStop = new QPushButton(groupBox);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setEnabled(false);

        gridLayout_2->addWidget(btnStop, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LCDHour = new QLCDNumber(groupBox);
        LCDHour->setObjectName(QStringLiteral("LCDHour"));
        LCDHour->setSmallDecimalPoint(false);
        LCDHour->setDigitCount(2);
        LCDHour->setProperty("value", QVariant(10));
        LCDHour->setProperty("intValue", QVariant(10));

        horizontalLayout->addWidget(LCDHour);

        LCDMin = new QLCDNumber(groupBox);
        LCDMin->setObjectName(QStringLiteral("LCDMin"));
        LCDMin->setDigitCount(2);
        LCDMin->setProperty("intValue", QVariant(26));

        horizontalLayout->addWidget(LCDMin);

        LCDSec = new QLCDNumber(groupBox);
        LCDSec->setObjectName(QStringLiteral("LCDSec"));
        LCDSec->setDigitCount(2);
        LCDSec->setProperty("intValue", QVariant(35));

        horizontalLayout->addWidget(LCDSec);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(10);
        progressBar->setTextVisible(true);

        verticalLayout->addWidget(progressBar);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        editCalendar = new QLineEdit(groupBox_3);
        editCalendar->setObjectName(QStringLiteral("editCalendar"));

        gridLayout_3->addWidget(editCalendar, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGridVisible(false);

        gridLayout_3->addWidget(calendarWidget, 1, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        btnClose = new QPushButton(Widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        verticalLayout_3->addWidget(btnClose);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout_4->addLayout(verticalLayout_3, 0, 1, 1, 1);


        retranslateUi(Widget);
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        btnGetTime->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        LabDateTime->setText(QApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\227\266  \351\227\264", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("Widget", "HH:mm:ss", Q_NULLPTR));
        btnSetTime->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\227\245  \346\234\237", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("Widget", "yyyy\345\271\264M\346\234\210d\346\227\245", Q_NULLPTR));
        btnSetDate->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        dateTimeEdit->setDisplayFormat(QApplication::translate("Widget", "yyyy-MM-dd HH:mm:ss", Q_NULLPTR));
        btnSetDateTime->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", Q_NULLPTR));
        btnStart->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        LabElapsTime->setText(QApplication::translate("Widget", "\346\265\201\351\200\235\346\227\266\351\227\264", Q_NULLPTR));
        spinBoxIntv->setSuffix(QApplication::translate("Widget", " ms", Q_NULLPTR));
        btnSetIntv->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\221\250\346\234\237", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", Q_NULLPTR));
        btnStop->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Widget", "\351\200\200  \345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
