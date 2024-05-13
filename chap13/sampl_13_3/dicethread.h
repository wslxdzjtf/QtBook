#ifndef DICETHREAD_H
#define DICETHREAD_H

#include <QThread>

class ThreadProducer : public QThread
{
    Q_OBJECT
private:

protected:
    void run() Q_DECL_OVERRIDE;
public:
    explicit ThreadProducer();
    void stopThread();


signals:
    //void newValued(int seq,int diceValue);

public slots:
};


class ThreadConsumer : public QThread
{
    Q_OBJECT
private:

protected:
    void run() Q_DECL_OVERRIDE;
public:
    explicit ThreadConsumer();
    void stopThread();


signals:
    void newValued(int seq,int diceValue);

public slots:
};

#endif // DICETHREAD_H
