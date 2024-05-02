#ifndef DIALOGDATA_H
#define DIALOGDATA_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class DialogData;
}

class DialogData : public QDialog
{
    Q_OBJECT
private:
    QSqlRecord mRecord;
public:
    void setUpdateRecord(QSqlRecord &recData);
    void setInsertRecord(QSqlRecord &recData);
    QSqlRecord getRecordData();

public:
    explicit DialogData(QWidget *parent = 0);
    ~DialogData();

private slots:
    void on_btnSetPhoto_clicked();

    void on_btnClearPhoto_clicked();

private:
    Ui::DialogData *ui;
};

#endif // DIALOGDATA_H
