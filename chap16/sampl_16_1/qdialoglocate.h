#ifndef QDIALOGLOCATE_H
#define QDIALOGLOCATE_H

#include <QDialog>

namespace Ui {
class QDialogLocate;
}

class QDialogLocate : public QDialog
{
    Q_OBJECT

public:
    explicit QDialogLocate(QWidget *parent = 0);
    ~QDialogLocate();

    void setRange(int rows,int cols);
    void setValue(int row,int col);
    void closeEvent(QCloseEvent *event);
private slots:
    void on_btnSetText_clicked();

signals:
    void changeCellText(int,int,QString);
private:
    Ui::QDialogLocate *ui;
};

#endif // QDIALOGLOCATE_H
