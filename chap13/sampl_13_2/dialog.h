#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <dicethread.h>
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
private:
    DiceThread threadA;
    QTimer mTimer;  //定时器
protected:
    void closeEvent(QCloseEvent *) Q_DECL_OVERRIDE;

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
private slots:
    void on_threadAnewValue(int seq,int diceValue);
    void on_threadAStarted();
    void on_threadAFinished();

    void on_btnStartThread_clicked();
    void on_btnStopThread_clicked();
    void on_btnDiceBegin_clicked();
    void on_btnDiceEnd_clicked();
    void on_btnClear_clicked();
    void onTimerOut();
};

#endif // DIALOG_H
