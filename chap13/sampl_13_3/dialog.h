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
    ThreadProducer threadProducer;
    ThreadConsumer threadConsumer;
protected:
    void closeEvent(QCloseEvent *) Q_DECL_OVERRIDE;

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
private slots:
    void on_threadConsumerNewValue(int seq,int diceValue);
    void on_threadConsumerStarted();
    void on_threadConsumerFinished();

    void on_threadProducerStarted();
    void on_threadProducerFinished();

    void on_btnStartThread_clicked();
    void on_btnStopThread_clicked();
    void on_btnClear_clicked();
};

#endif // DIALOG_H
