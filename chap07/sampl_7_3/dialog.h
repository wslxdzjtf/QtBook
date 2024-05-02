#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_41_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::Dialog *ui;
    void getBtnInfo(QObject *btn);
};

#endif // DIALOG_H
