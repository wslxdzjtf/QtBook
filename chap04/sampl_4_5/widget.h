#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTime>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
private:
    QTimer *fTimer;
    QTime fTimeCounter;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnGetTime_clicked();

    void on_btnSetTime_clicked();

    void on_btnSetDate_clicked();

    void on_btnSetDateTime_clicked();

    void on_calendarWidget_selectionChanged();

    void on_timer_timeout();
    void on_btnSetIntv_clicked();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
