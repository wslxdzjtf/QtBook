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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSlider *SliderRed_2;
    QTextEdit *textEdit_2;
    QLabel *label_6;
    QSlider *SliderGreen_2;
    QLabel *label_7;
    QSlider *SliderBlue_2;
    QLabel *label_8;
    QSlider *SliderAlpha_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QScrollBar *ScrollBarH_2;
    QSlider *SliderH_2;
    QProgressBar *progBarH_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QDial *dial_2;
    QLCDNumber *LCDDisplay_2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioBtnDec_2;
    QRadioButton *radioBtnBin_2;
    QRadioButton *radioBtnOct_2;
    QRadioButton *radioBtnHex_2;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QSlider *SliderV_2;
    QScrollBar *ScrollBarV_2;
    QProgressBar *progBarV_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 400);
        Widget->setMinimumSize(QSize(400, 400));
        gridLayout_7 = new QGridLayout(Widget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(60, 0));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        SliderRed_2 = new QSlider(groupBox_2);
        SliderRed_2->setObjectName(QStringLiteral("SliderRed_2"));
        SliderRed_2->setMinimumSize(QSize(100, 0));
        SliderRed_2->setMaximum(255);
        SliderRed_2->setValue(100);
        SliderRed_2->setOrientation(Qt::Horizontal);
        SliderRed_2->setInvertedAppearance(false);
        SliderRed_2->setInvertedControls(false);
        SliderRed_2->setTickPosition(QSlider::NoTicks);
        SliderRed_2->setTickInterval(0);

        gridLayout->addWidget(SliderRed_2, 0, 1, 1, 1);

        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setMinimumSize(QSize(100, 100));
        textEdit_2->setMaximumSize(QSize(500, 500));
        QPalette palette;
        QBrush brush(QColor(170, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textEdit_2->setPalette(palette);

        gridLayout->addWidget(textEdit_2, 0, 2, 4, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        SliderGreen_2 = new QSlider(groupBox_2);
        SliderGreen_2->setObjectName(QStringLiteral("SliderGreen_2"));
        SliderGreen_2->setMinimumSize(QSize(100, 0));
        SliderGreen_2->setMaximum(255);
        SliderGreen_2->setValue(200);
        SliderGreen_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderGreen_2, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        SliderBlue_2 = new QSlider(groupBox_2);
        SliderBlue_2->setObjectName(QStringLiteral("SliderBlue_2"));
        SliderBlue_2->setMinimumSize(QSize(100, 0));
        SliderBlue_2->setMaximum(255);
        SliderBlue_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderBlue_2, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        SliderAlpha_2 = new QSlider(groupBox_2);
        SliderAlpha_2->setObjectName(QStringLiteral("SliderAlpha_2"));
        SliderAlpha_2->setMinimumSize(QSize(100, 0));
        SliderAlpha_2->setMaximum(255);
        SliderAlpha_2->setValue(100);
        SliderAlpha_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderAlpha_2, 3, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 120));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ScrollBarH_2 = new QScrollBar(groupBox);
        ScrollBarH_2->setObjectName(QStringLiteral("ScrollBarH_2"));
        ScrollBarH_2->setMaximum(100);
        ScrollBarH_2->setValue(10);
        ScrollBarH_2->setSliderPosition(10);
        ScrollBarH_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(ScrollBarH_2, 1, 0, 1, 1);

        SliderH_2 = new QSlider(groupBox);
        SliderH_2->setObjectName(QStringLiteral("SliderH_2"));
        SliderH_2->setMaximum(100);
        SliderH_2->setValue(10);
        SliderH_2->setOrientation(Qt::Horizontal);
        SliderH_2->setInvertedAppearance(false);
        SliderH_2->setInvertedControls(true);
        SliderH_2->setTickPosition(QSlider::TicksAbove);
        SliderH_2->setTickInterval(0);

        gridLayout_2->addWidget(SliderH_2, 0, 0, 1, 1);

        progBarH_2 = new QProgressBar(groupBox);
        progBarH_2->setObjectName(QStringLiteral("progBarH_2"));
        progBarH_2->setValue(10);
        progBarH_2->setTextVisible(true);
        progBarH_2->setOrientation(Qt::Horizontal);
        progBarH_2->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_2->addWidget(progBarH_2, 2, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 100));
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        dial_2 = new QDial(groupBox_4);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setMaximum(255);
        dial_2->setSliderPosition(0);
        dial_2->setTracking(true);
        dial_2->setOrientation(Qt::Horizontal);
        dial_2->setWrapping(false);
        dial_2->setNotchTarget(10);
        dial_2->setNotchesVisible(true);

        gridLayout_8->addWidget(dial_2, 0, 0, 1, 1);

        LCDDisplay_2 = new QLCDNumber(groupBox_4);
        LCDDisplay_2->setObjectName(QStringLiteral("LCDDisplay_2"));
        LCDDisplay_2->setMinimumSize(QSize(80, 0));
        LCDDisplay_2->setSmallDecimalPoint(false);
        LCDDisplay_2->setDigitCount(2);
        LCDDisplay_2->setMode(QLCDNumber::Dec);
        LCDDisplay_2->setSegmentStyle(QLCDNumber::Filled);
        LCDDisplay_2->setProperty("value", QVariant(15));
        LCDDisplay_2->setProperty("intValue", QVariant(15));

        gridLayout_8->addWidget(LCDDisplay_2, 0, 1, 1, 1);

        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(130, 0));
        groupBox_6->setMaximumSize(QSize(100, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioBtnDec_2 = new QRadioButton(groupBox_6);
        radioBtnDec_2->setObjectName(QStringLiteral("radioBtnDec_2"));
        radioBtnDec_2->setChecked(true);

        verticalLayout->addWidget(radioBtnDec_2);

        radioBtnBin_2 = new QRadioButton(groupBox_6);
        radioBtnBin_2->setObjectName(QStringLiteral("radioBtnBin_2"));

        verticalLayout->addWidget(radioBtnBin_2);

        radioBtnOct_2 = new QRadioButton(groupBox_6);
        radioBtnOct_2->setObjectName(QStringLiteral("radioBtnOct_2"));

        verticalLayout->addWidget(radioBtnOct_2);

        radioBtnHex_2 = new QRadioButton(groupBox_6);
        radioBtnHex_2->setObjectName(QStringLiteral("radioBtnHex_2"));

        verticalLayout->addWidget(radioBtnHex_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_6, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 255));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        SliderV_2 = new QSlider(groupBox_3);
        SliderV_2->setObjectName(QStringLiteral("SliderV_2"));
        SliderV_2->setMaximum(100);
        SliderV_2->setValue(10);
        SliderV_2->setOrientation(Qt::Vertical);
        SliderV_2->setTickPosition(QSlider::TicksAbove);

        gridLayout_4->addWidget(SliderV_2, 0, 0, 1, 1);

        ScrollBarV_2 = new QScrollBar(groupBox_3);
        ScrollBarV_2->setObjectName(QStringLiteral("ScrollBarV_2"));
        ScrollBarV_2->setMaximum(100);
        ScrollBarV_2->setSliderPosition(10);
        ScrollBarV_2->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(ScrollBarV_2, 0, 1, 1, 1);

        progBarV_2 = new QProgressBar(groupBox_3);
        progBarV_2->setObjectName(QStringLiteral("progBarV_2"));
        progBarV_2->setValue(10);
        progBarV_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        progBarV_2->setTextVisible(false);
        progBarV_2->setOrientation(Qt::Vertical);
        progBarV_2->setInvertedAppearance(false);
        progBarV_2->setTextDirection(QProgressBar::BottomToTop);

        gridLayout_4->addWidget(progBarV_2, 0, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 1, 0, 1, 1);

        btnClose = new QPushButton(Widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setMaximumSize(QSize(80, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon);

        gridLayout_6->addWidget(btnClose, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 3, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 1, 1, 1);


        retranslateUi(Widget);
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "Slider\345\222\214QColor", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "Red", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "Green", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "Blue", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "Alpha", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\346\260\264\345\271\263", Q_NULLPTR));
        progBarH_2->setFormat(QApplication::translate("Widget", "%p%", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Widget", "Dial\345\222\214LCDNUmber", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Widget", "LCD\346\230\276\347\244\272\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnDec_2->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnBin_2->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnOct_2->setText(QApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266", Q_NULLPTR));
        radioBtnHex_2->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\345\236\202\347\233\264", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
