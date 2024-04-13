#include "dialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

void Dialog::iniUI()
{
    checkBoxUnderline = new QCheckBox(tr("Underline"));
    checkBoxItalic = new QCheckBox(tr("Italic"));
    checkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout *HLayout1 = new QHBoxLayout;
    HLayout1->addWidget(checkBoxUnderline);
    HLayout1->addWidget(checkBoxItalic);
    HLayout1->addWidget(checkBoxBold);

    rBtnBlue = new QRadioButton("Blue");
    rBtnRed = new QRadioButton("Red");
    rBtnGreen = new QRadioButton("Green");
    QHBoxLayout *HLayout2 = new QHBoxLayout;
    HLayout2->addWidget(rBtnBlue);
    HLayout2->addWidget(rBtnRed);
    HLayout2->addWidget(rBtnGreen);

    plainTextEdit = new QPlainTextEdit();
    QFont font = plainTextEdit->font();
    font.setPointSize(15);
    plainTextEdit->setFont(font);
    plainTextEdit->setPlainText("Hello my love\nI've been searching for someone like you");

    btnOK = new QPushButton("OK");
    btnCancel = new QPushButton("Cancel");
    btnClose = new QPushButton("Close");
    QHBoxLayout *HLayout3 = new QHBoxLayout;
    HLayout3->addStretch();
    HLayout3->addWidget(btnOK);
    HLayout3->addWidget(btnCancel);
    HLayout3->addStretch();
    HLayout3->addWidget(btnClose);

    QVBoxLayout *VLayout = new QVBoxLayout;
    VLayout->addLayout(HLayout1);
    VLayout->addLayout(HLayout2);
    VLayout->addWidget(plainTextEdit);
    VLayout->addLayout(HLayout3);
    setLayout(VLayout);
}

void Dialog::iniSignalSlots()
{
    connect(btnOK,SIGNAL(clicked()),this,SLOT(accept()));
    connect(btnCancel,SIGNAL(clicked()),this,SLOT(reject()));
    connect(btnClose,SIGNAL(clicked()),this,SLOT(close()));

    connect(checkBoxUnderline,SIGNAL(clicked(bool)),this,SLOT(on_checkUnderline(bool)));
    connect(checkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(on_checkItalic(bool)));
    connect(checkBoxBold,SIGNAL(clicked(bool)),this,SLOT(on_checkBold(bool)));

    connect(rBtnBlue,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnRed,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnGreen,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
}

void Dialog::on_checkUnderline(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setUnderline(checked);
    plainTextEdit->setFont(font);
}

void Dialog::on_checkItalic(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setItalic(checked);
    plainTextEdit->setFont(font);
}

void Dialog::on_checkBold(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setBold(checked);
    plainTextEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette plet = plainTextEdit->palette();
    if(rBtnBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else if(rBtnRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if(rBtnGreen->isChecked())
        plet.setColor(QPalette::Text,Qt::green);
    else
        plet.setColor(QPalette::Text,Qt::black);
    plainTextEdit->setPalette(plet);


}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    iniUI();
    iniSignalSlots();
}

Dialog::~Dialog()
{

}
