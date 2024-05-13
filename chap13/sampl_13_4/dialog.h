#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <threaddaq.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
private:
    ThreadDAQ threadProducer;
    ThreadShow threadConsumer;
protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_btnStartThread_clicked();

    void on_ProducerStarted();
    void on_ProducerFinished();
    void on_ConsumerStarted();
    void on_ConsumerFinished();
    void on_ConsumerValueChanged(int *data,int count,int seq);

    void on_btnStopThread_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
