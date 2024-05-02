#include "dialogpen.h"
#include "ui_dialogpen.h"
#include <QColorDialog>

QPen DialogPen::getPen()
{
    m_pen.setStyle(Qt::PenStyle(ui->comboPenStyle->currentIndex()));
    m_pen.setWidth(ui->spinWidth->value());
    QColor color = ui->btnColor->palette().color(QPalette::Button);
    m_pen.setColor(color);
    return m_pen;
}

QPen DialogPen::getPen(QPen iniPen, bool &ok)
{
    DialogPen *dlg =new DialogPen;
    dlg->setPen(iniPen);
    int ret=dlg->exec();
    QPen pen;
    if(ret==QDialog::Accepted){
        pen=dlg->getPen();
        ok=true;
    }else{
        pen=iniPen;
        ok=false;
    }
    delete dlg;
    return pen;
}

void DialogPen::setPen(const QPen &pen)
{
    m_pen = pen;
    ui->spinWidth->setValue(pen.width());
    int i = static_cast<int>(pen.style());
    ui->comboPenStyle->setCurrentIndex(i);
    ui->btnColor->setAutoFillBackground(true);
    QColor color=pen.color();
    QString str=QString::asprintf("background-color：rgb(%d,%d,%d)",color.red(),color.green(),color.blue());
    ui->btnColor->setStyleSheet(str);
}

DialogPen::DialogPen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPen)
{
    ui->setupUi(this);
    ui->comboPenStyle->clear();
    ui->comboPenStyle->addItem("NoPen",0);
    ui->comboPenStyle->addItem("SolidLine",1);
    ui->comboPenStyle->addItem("DashLine",2);
    ui->comboPenStyle->addItem("DotLine",3);
    ui->comboPenStyle->addItem("DashDotLine",4);
    ui->comboPenStyle->addItem("DashDotDotLine",5);
    ui->comboPenStyle->addItem("CustomDashLine",6);

    ui->comboPenStyle->setCurrentIndex(1);
}

DialogPen::~DialogPen()
{
    delete ui;
}

void DialogPen::on_btnColor_clicked()
{
    QColor color=m_pen.color();
    QColorDialog::getColor(color);
    if(color.isValid()){
        QString str=QString::asprintf("background-color：rgb(%d,%d,%d)",color.red(),color.green(),color.blue());
        ui->btnColor->setStyleSheet(str);
    }
}
