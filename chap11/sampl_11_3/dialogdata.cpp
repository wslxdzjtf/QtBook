#include "dialogdata.h"
#include "ui_dialogdata.h"
#include <QFileDialog>

void DialogData::setUpdateRecord(QSqlRecord &recData)
{
    mRecord = recData;
    ui->spinEmpNo->setEnabled(false);
    setWindowTitle("更新记录");
    //根据recData的数据更新界面显示
    ui->spinEmpNo->setValue(recData.value("EmpNo").toInt());
    ui->editName->setText(recData.value("Name").toString());
    ui->comboSex->setCurrentText(recData.value("Gender").toString());
    ui->spinHeight->setValue(recData.value("Height").toFloat());
    ui->editBirth->setDate(recData.value("Birthday").toDate());
    ui->editMobile->setText(recData.value("Mobile").toString());
    ui->comboProvince->setCurrentText(recData.value("Province").toString());
    ui->editCity->setText(recData.value("City").toString());
    ui->comboDep->setCurrentText(recData.value("Department").toString());
    ui->comboEdu->setCurrentText(recData.value("Education").toString());
    ui->spinSalary->setValue(recData.value("Salary").toInt());
    ui->editMemo->setPlainText(recData.value("Memo").toString());

    QVariant va = recData.value("Photo");
    if(!va.isValid())
        ui->LabPhoto->clear();
    else{
        QByteArray data = va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->LabPhoto->setPixmap(pic.scaledToWidth(ui->LabPhoto->size().width()));
    }
}

void DialogData::setInsertRecord(QSqlRecord &recData)
{
    mRecord = recData;
    ui->spinEmpNo->setEnabled(true);
    setWindowTitle("新建记录");
    ui->spinEmpNo->setValue(recData.value("EmpNo").toInt());
}

QSqlRecord DialogData::getRecordData()
{
    //"确定"按钮后，界面数据保存到记录mRecord
    mRecord.setValue("empNo",ui->spinEmpNo->value());
    mRecord.setValue("Name",ui->editName->text());
    mRecord.setValue("Gender",ui->comboSex->currentText());
    mRecord.setValue("Height",ui->spinHeight->value());
    mRecord.setValue("Birthday",ui->editBirth->date());
    mRecord.setValue("Mobile",ui->editMobile->text());

    mRecord.setValue("Province",ui->comboProvince->currentText());
    mRecord.setValue("City",ui->editCity->text());
    mRecord.setValue("Department",ui->comboDep->currentText());

    mRecord.setValue("Education",ui->comboEdu->currentText());
    mRecord.setValue("Salary",ui->spinSalary->value());
    mRecord.setValue("Memo",ui->editMemo->toPlainText());
    //照片编辑时已经修改了mRecord的photo字段的值
    return mRecord;
}

DialogData::DialogData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogData)
{
    ui->setupUi(this);
}

DialogData::~DialogData()
{
    delete ui;
}

void DialogData::on_btnSetPhoto_clicked()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择图片","","照片(*.jpg)");
    if(aFile.isEmpty()) return;

    QByteArray data;
    QFile *file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();
    mRecord.setValue("Photo",data);
    QPixmap pic;
    pic.loadFromData(data);
    ui->LabPhoto->setPixmap(pic.scaledToWidth(ui->LabPhoto->size().width()));

}

void DialogData::on_btnClearPhoto_clicked()
{
    ui->LabPhoto->clear();
    mRecord.setNull("Photo");
}
