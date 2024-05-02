#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnOpen_clicked()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "选择对话框";
    //QString txtLabel = "请选择一个文件";
    QString filter ="文本文件(*.txt);;图片文件(*jpg *.gif);;所有格式(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);  //获取选中文件
    if(fileName.isEmpty()) return;
    ui->plainTextEdit->appendPlainText(fileName);
}

void Dialog::on_btnOpenMulti_clicked()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "选择对话框";
    QString filter ="文本文件(*.txt);;图片文件(*jpg *.gif);;所有格式(*.*)";
    QStringList fileNames = QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);  //获取选中文件
    if(fileNames.count()==0) return;
    foreach (auto str, fileNames) {
        ui->plainTextEdit->appendPlainText(str);
    }
}

void Dialog::on_btnSelDir_clicked()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "选择对话框";
    QString filter ="文本文件(*.txt);;图片文件(*jpg *.gif);;所有格式(*.*)";
    QString selectedDir = QFileDialog::getExistingDirectory(this,dlgTitle,curPath,QFileDialog::ShowDirsOnly);
    if(selectedDir.isEmpty()) return;
    ui->plainTextEdit->appendPlainText(selectedDir);
}

void Dialog::on_btnSave_clicked()
{
    QString curPath = QCoreApplication::applicationDirPath();
    QString dlgTitle = "选择对话框";
    QString filter ="文本文件(*.txt);;图片文件(*jpg *.gif);;所有格式(*.*)";
    QString fileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);  //获取选中文件
    if(fileName.isEmpty()) return;
    ui->plainTextEdit->appendPlainText(fileName);
}

void Dialog::on_btnColor_clicked()
{
    QPalette pal = ui->plainTextEdit->palette();
    QColor iniColor = pal.color(QPalette::Text);
    QColor color = QColorDialog::getColor(iniColor,this,"选择颜色");
    if(!color.isValid()) return;
    pal.setColor(QPalette::Text,color);
    ui->plainTextEdit->setPalette(pal);
}

void Dialog::on_btnFont_clicked()
{
    bool ok=false;
    QFont iniFont = ui->plainTextEdit->font();
    QFont font = QFontDialog::getFont(&ok,iniFont,this,"选择字体");
    if(!ok) return;
    ui->plainTextEdit->setFont(font);
}

void Dialog::on_btnInputString_clicked()
{
    QString dlgTitle="输入文字对话框";
    QString txtLabel = "请输入文件名";
    QString defaultInput = "xxxx.txt";
    QLineEdit::EchoMode echMode = QLineEdit::Normal;
    bool ok=false;
    QString str=QInputDialog::getText(this,dlgTitle,txtLabel,echMode,defaultInput,&ok);
    if(!ok) return;
    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_btnInputInt_clicked()
{
    QString dlgTitle="输入整数对话框";
    QString txtLabel = "请输入整数";
    int defaultValue = ui->plainTextEdit->font().pointSize();
    int minValue=0,maxValue=100;
    bool ok=false;
    int value = QInputDialog::getInt(this,dlgTitle,txtLabel,defaultValue,minValue,maxValue,1,&ok);
    if(!ok) return;
    ui->plainTextEdit->appendPlainText(QString::asprintf("输入了一个整数：%d",value));
}

void Dialog::on_btnInputFloat_clicked()
{
    QString dlgTitle="输入整数对话框";
    QString txtLabel = "请输入浮点数";
    float defaultValue = 15.0;
    float minValue=0,maxValue=100;
    bool ok=false;
    float value = QInputDialog::getDouble(this,dlgTitle,txtLabel,defaultValue,minValue,maxValue,2,&ok);
    if(!ok) return;
    ui->plainTextEdit->appendPlainText(QString::asprintf("输入了一个浮点数：%.2f",value));
}

void Dialog::on_btnInputItem_clicked()
{
    QStringList items;
    items<<"优秀"<<"良好"<<"及格"<<"不及格";
    QString dlgTitle="输入条目";
    QString txtLabel = "请选择条目";
    bool ok = false;
    QString text = QInputDialog::getItem(this,dlgTitle,txtLabel,items,0,true,&ok);
    if(!ok||text.isEmpty()) return;
    ui->plainTextEdit->appendPlainText(text);
}

void Dialog::on_btnMsgQuestion_clicked()
{
    QString dlgTitle="Question消息框";
    QString txtLabel = "文件已被修改，是否保存?";
    QMessageBox::StandardButtons result;
    result = QMessageBox::question(this,dlgTitle,txtLabel,QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel,QMessageBox::NoButton);
    QString str;
    if(result==QMessageBox::Yes)
        str="Question消息框：yes 被选中";
    else if(result==QMessageBox::No)
        str="Question消息框：no 被选中";
    else if(result==QMessageBox::Cancel)
        str="Question消息框：Cancel 被选中";

    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_btnMsgInformation_clicked()
{
    QMessageBox::information(this,"Title","TXT",QMessageBox::Ok);
}

void Dialog::on_btnMsgWarning_clicked()
{
    QMessageBox::warning(this,"Title","TXT",QMessageBox::Ok);
}

void Dialog::on_btnMsgCritical_clicked()
{
    QMessageBox::critical(this,"Title","TXT",QMessageBox::Ok);
}

void Dialog::on_btnMsgAbout_clicked()
{
    QMessageBox::about(this,"Title","TXT");
}

void Dialog::on_btnMsgAboutQt_clicked()
{
    QMessageBox::aboutQt(this,"Title");
}
