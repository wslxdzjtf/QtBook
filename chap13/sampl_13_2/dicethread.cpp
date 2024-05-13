#include "dicethread.h"
#include <QTime>

void DiceThread::run()
{
    m_stop = false;
    m_seq = 0;
    qsrand(QTime::currentTime().second());
    while(!m_stop){
        if(!m_Paused){
            QMutexLocker locker(&mMutex);
            m_seq++;
            m_diceValue = 100;
            msleep(10);
            m_diceValue = qrand();
            msleep(50);
            m_diceValue = qrand()%6+1;
        }
        msleep(500);
    }
    quit();
}

DiceThread::DiceThread()
{

}

void DiceThread::diceBegin()
{
    m_Paused = false;
}

void DiceThread::dicePause()
{
    m_Paused = true;
}

void DiceThread::stopThread()
{
    m_stop = true;
}

bool DiceThread::readValue(int *seq, int *diceValue)
{
    if(mMutex.tryLock()){
        *seq = m_seq;
        *diceValue = m_diceValue;
        mMutex.unlock();
        return true;
    }else
        return false;

}
