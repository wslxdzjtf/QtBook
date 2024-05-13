#ifndef THREADDAQ_H
#define THREADDAQ_H

#include <QThread>

class ThreadDAQ : public QThread
{
    Q_OBJECT
private:
    bool m_stop = false;
public:
    explicit ThreadDAQ();
protected:
    void run() Q_DECL_OVERRIDE;

signals:

public slots:
};

class ThreadShow : public QThread
{
    Q_OBJECT
private:
    bool m_stop = false;
public:
    explicit ThreadShow();
protected:
    void run() Q_DECL_OVERRIDE;

signals:
    void newValue(int *data,int count,int seq);

public slots:
};

#endif // THREADDAQ_H
