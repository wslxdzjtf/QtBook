#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <dicethread.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
private:
    DiceThread threadA;
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
};

#endif // DIALOG_H
