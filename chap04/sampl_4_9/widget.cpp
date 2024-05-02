#include "widget.h"
#include "ui_widget.h"
#include <QDate>

void Widget::createItemsARow(int rowNo, QString Name, QString Sex, QDate birth, QString Nation, bool isPM, int score)
{
    QTableWidgetItem *item;
    unsigned StudID=20000;
    //Name
    item=new QTableWidgetItem(Name,ctName);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    item->setData(Qt::UserRole,StudID++);
    ui->tableWidget->setItem(rowNo,colName,item);
    //Sex
    item=new QTableWidgetItem(Sex,ctSex);
    QIcon icon;
    if(Sex=="男")
        icon.addFile(":/images/icons/boy.ico");
    else
        icon.addFile(":/images/icons/girl.ico");
    item->setIcon(icon);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,colSex,item);
    //birth
    item=new QTableWidgetItem(birth.toString("yyyy-MM-dd"),ctBirth);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,colBirth,item);
    //Nation
    item=new QTableWidgetItem(Nation,ctNation);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,colNation,item);
    //isPM
    item=new QTableWidgetItem("党员",ctPartyM);
    if(isPM)
        item->setCheckState(Qt::Checked);
    else
        item->setCheckState(Qt::Unchecked);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    item->setBackgroundColor(Qt::yellow);
    ui->tableWidget->setItem(rowNo,colPartyM,item);
    //score
    item=new QTableWidgetItem(QString::number(score),ctScore);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,colScore,item);
}

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnSetHeader_clicked()
{
    QTableWidgetItem *headerItem;
    QStringList headerText;
    headerText<<"姓 名"<<"性 别"<<"出生日期"<<"民 族"<<"分 数"<<"是否是党员";
    ui->tableWidget->setColumnCount(headerText.count());
    for(int i=0;i<ui->tableWidget->columnCount();i++){
        headerItem = new QTableWidgetItem(headerText.at(i));
        QFont font = ui->tableWidget->font();
        font.setBold(true);
        font.setPointSize(12);
        headerItem->setFont(font);
        headerItem->setTextColor(Qt::red);
        ui->tableWidget->setHorizontalHeaderItem(i,headerItem);
    }
}

void Widget::on_btnSetRows_clicked()
{
     ui->tableWidget->setRowCount(ui->spinRowCount->value());
     ui->tableWidget->setAlternatingRowColors(ui->chkBoxRowColor->isChecked());
}

void Widget::on_chkBoxRowColor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void Widget::on_btnIniData_clicked()
{
    QString strName,strSex;
    bool isParty=false;
    QDate birth;
    birth.setDate(1980,11,11);
    ui->tableWidget->clearContents();
    for(int i=0;i<ui->tableWidget->rowCount();i++){
        strName=QString::asprintf("学生%d",i);
        i%2==0?strSex="男":strSex="女";
        createItemsARow(i,strName,strSex,birth,"汉族",isParty,80);
        birth=birth.addDays(20);
        isParty=!isParty;
    }
}

void Widget::on_btnInsertRow_clicked()
{
    int row=ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(row);
    createItemsARow(row,"新学生","男",QDate::fromString("1990-11-11","yyyy-MM-dd"),"苗族",true,85);
}

void Widget::on_btnAppendRow_clicked()
{
    int row =ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    createItemsARow(row,"新学生","男",QDate::fromString("1990-11-11","yyyy-MM-dd"),"苗族",true,85);
}


void Widget::on_btnDelCurRow_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void Widget::on_btnAutoHeght_clicked()
{
    ui->tableWidget->resizeRowsToContents();
}

void Widget::on_btnAutoWidth_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}

void Widget::on_btnReadToEdit_clicked()
{
    ui->plainTextEdit->clear();
    QTableWidgetItem *cellItem;
    QString str;
    for(int i=0;i<ui->tableWidget->rowCount()-1;i++){
        for(int j=0;j<ui->tableWidget->columnCount();j++){
            cellItem=ui->tableWidget->item(i,j);
            str=str+cellItem->text()+" ";
        }
        cellItem=ui->tableWidget->item(i,colPartyM);
        if(cellItem->checkState()==Qt::Checked)
            str+="党员";
        else
            str+="群众";
        ui->plainTextEdit->appendPlainText(str);
        str="";
    }
}


void Widget::on_chkBoxTabEditable_clicked(bool checked)
{
    if(checked)
        ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
    else
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void Widget::on_chkBoxHeaderH_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}

void Widget::on_chkBoxHeaderV_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}

void Widget::on_rBtnSelectRow_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void Widget::on_rBtnSelectItem_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}
