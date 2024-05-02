#include "qdialoglocate.h"
#include "ui_qdialoglocate.h"
#include <QMessageBox>
#include <mainwindow.h>

QDialogLocate::QDialogLocate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialogLocate)
{
    ui->setupUi(this);
}

QDialogLocate::~QDialogLocate()
{
    QMessageBox::information(this,"提示","单元格定位对话框被删除");
    delete ui;
}

void QDialogLocate::setRange(int rows,int cols)
{
    ui->spinBoxRow->setRange(0,rows-1);
    ui->spinBoxColumn->setRange(0,cols-1);
}

void QDialogLocate::setValue(int row, int col)
{
    ui->spinBoxColumn->setValue(col);
    ui->spinBoxRow->setValue(row);
}

void QDialogLocate::closeEvent(QCloseEvent *event)
{
    MainWindow *parW=(MainWindow*)parentWidget();
    parW->setActLocateEnable(true);
    parW->setDlgLocateNull();
}

void QDialogLocate::on_btnSetText_clicked()
{
    int row=ui->spinBoxRow->value();
    int col=ui->spinBoxColumn->value();
    emit changeCellText(row,col,ui->edtCaption->text());
    if(ui->chkBoxRow->isChecked())
        ui->spinBoxRow->setValue(ui->spinBoxRow->value()+1);
    if(ui->chkBoxColumn->isChecked())
        ui->spinBoxColumn->setValue(ui->spinBoxColumn->value()+1);
}
