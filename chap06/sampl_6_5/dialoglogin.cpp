#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include <QMessageBox>
#include <QSettings>
#include <QCryptographicHash>

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlags(Qt::SplashScreen);
    readSettings();
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::on_btnOK_clicked()
{
    QString user = ui->editUser->text().trimmed();
    QString pswd = ui->editPSWD->text().trimmed();
    if(user==m_user&&encrypt(pswd)==m_pswd){
        writeSettings();
        accept();
    }else{
        m_tryCount++;
        if(m_tryCount>3){
            QMessageBox::critical(this,"err","错误次数太多，强行退出");
            reject();
        }else{
            QMessageBox::warning(this,"err","密码或用户名错误");
        }
    }

}

void DialogLogin::writeSettings()
{
    QSettings settings("AXB-Qt","sampl_6_5");
    settings.setValue("Username",m_user);
    settings.setValue("PSWD",m_pswd);
    settings.setValue("saved",ui->chkBoxSave->isChecked());
}

void DialogLogin::readSettings()
{
    QSettings settings("AXB-Qt","sampl_6_5");
    bool saved=settings.value("saved",false).toBool();
    m_user=settings.value("Username","user").toString();
    QString defaultPSWD=encrypt("12345");
    m_pswd=settings.value("PSWD",defaultPSWD).toString();
    if(saved)
        ui->editUser->setText(m_user);
    ui->chkBoxSave->setChecked(saved);

}

QString DialogLogin::encrypt(const QString &str)
{
    QByteArray btArray;
    btArray.append(str);
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(btArray);
    QByteArray resultArray = hash.result();
    QString md5=resultArray.toHex();
    return md5;
}

void DialogLogin::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        m_moving=true;
        m_lastPos=event->globalPos()-pos();
    }
    return QDialog::mousePressEvent(event);
}

void DialogLogin::mouseMoveEvent(QMouseEvent *event)
{
    if(m_moving&&(event->buttons()&&Qt::LeftButton)){
        move(event->globalPos()-m_lastPos);
        m_lastPos=event->globalPos()-pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void DialogLogin::mouseReleaseEvent(QMouseEvent *event)
{
    m_moving=false;
}
