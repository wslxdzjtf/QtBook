#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
    resize(600,300);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    painter.setRenderHint(QPainter::Antialiasing);

    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    qreal R=100;
    qreal deg=3.14159*(360/5)/180;
    QPoint points[5]={
        QPoint(R,0),
        QPoint(R*std::cos(deg),-R*::sin(deg)),
        QPoint(R*std::cos(2*deg),-R*::sin(2*deg)),
        QPoint(R*std::cos(3*deg),-R*::sin(3*deg)),
        QPoint(R*std::cos(4*deg),-R*::sin(4*deg)),
    };

    QPainterPath starPath;
    starPath.moveTo(points[3]);
    starPath.lineTo(points[1]);
    starPath.lineTo(points[4]);
    starPath.lineTo(points[2]);
    starPath.lineTo(points[0]);
    starPath.closeSubpath();
    QFont font;
    font.setPointSize(12);
    starPath.addText(points[0],font,"0");
    starPath.addText(points[1],font,"1");
    starPath.addText(points[2],font,"2");
    starPath.addText(points[3],font,"3");
    starPath.addText(points[4],font,"4");

    painter.setFont(font);
    painter.save();

    painter.translate(100,120);
    painter.drawPath(starPath);
    painter.drawText(0,0,"str");

    painter.restore();
    painter.translate(300,120);
    painter.rotate(90); //旋转
    painter.scale(0.7,0.7);     //缩小
    painter.drawPath(starPath);
    painter.drawText(0,0,"str2");

    painter.resetTransform();
    painter.translate(500,120);
    painter.rotate(-90);
    painter.scale(1,1);     //缩小
    painter.drawPath(starPath);
    painter.drawText(0,0,"str3");

}
