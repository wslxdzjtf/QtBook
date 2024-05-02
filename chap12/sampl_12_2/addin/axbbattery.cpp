#include "axbbattery.h"
#include <QPainter>

int AXBBattery::powerLeve() const
{
    return mPowerLeve;
}

void AXBBattery::setPowerLeve(int powerLeve)
{
    mPowerLeve = powerLeve;
    repaint();
}

void AXBBattery::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QRect rect(0,0,width(),height());
    painter.setViewport(rect);
    painter.setWindow(0,0,120,50);
    painter.setRenderHint(QPainter::Antialiasing);  //抗锯齿
    painter.setRenderHint(QPainter::TextAntialiasing);

    //绘制电池边框
    QPen pen;
    pen.setWidth(2);
    pen.setColor(mColorBorder);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::FlatCap);
    pen.setJoinStyle(Qt::BevelJoin);
    painter.setPen(pen);
    QBrush brush;
    brush.setColor(mColorBack);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    rect.setRect(1,1,109,48);
    painter.drawRect(rect);
    brush.setColor(mColorBack);
    painter.setBrush(brush);
    rect.setRect(110,15,10,20);
    painter.drawRect(rect);

    //画电量
    if(mPowerLeve > mWarning){
        brush.setColor(mColorPower);
        pen.setColor(mColorPower);
    }else{
        brush.setColor(mCOlorWarning);
        pen.setColor(mCOlorWarning);
    }
    painter.setBrush(brush);
    painter.setPen(pen);
    if(mPowerLeve>0){
        rect.setRect(5,5,mPowerLeve,40);
        painter.drawRect(rect);
    }
    //绘制百分比文字
    QFontMetrics textSize(this->font());
    QString powStr = QString::asprintf("%d%%",mPowerLeve);
    QRect textRect = textSize.boundingRect(powStr);
    pen.setColor(mColorBorder);
    painter.setPen(pen);
    painter.drawText(55-textRect.width()/2,23+textRect.height()/2,powStr);

}

AXBBattery::AXBBattery(QWidget *parent) : QWidget(parent)
{

}
