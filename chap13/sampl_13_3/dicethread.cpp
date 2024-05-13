#include "dicethread.h"
#include <QTime>
#include <QMutex>
#include <QWaitCondition>

int m_seq = 0;
int m_diceValue;
bool m_stop = false;
QMutex mutex;
QWaitCondition newDataAvailable;
void ThreadProducer::run()
{
    m_stop = false;
    m_seq = 0;
    qsrand(QTime::currentTime().second());
    while(!m_stop){
        mutex.lock();
        m_diceValue = qrand()%6+1;
        m_seq++;
        mutex.unlock();
        newDataAvailable.wakeAll();

        msleep(500);
    }
    quit();
}

ThreadProducer::ThreadProducer()
{

}

void ThreadProducer::stopThread()
{
    m_stop = true;
}


void ThreadConsumer::run()
{
    m_stop = false;
    while(!m_stop){
        mutex.lock();
        newDataAvailable.wait(&mutex);
        emit newValued(m_seq,m_diceValue);
        mutex.unlock();
        msleep(100);
    }
    quit();
}

ThreadConsumer::ThreadConsumer()
{

}

void ThreadConsumer::stopThread()
{
    m_stop = true;
}
