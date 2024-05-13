#ifndef DICETHREAD_H
#define DICETHREAD_H

#include <QThread>
#include <QMutex>

class DiceThread : public QThread
{
    Q_OBJECT
private:
    QMutex mMutex;
    int m_seq = 0;
    int m_diceValue;
    bool m_Paused = true;
    bool m_stop = false;
protected:
    void run() Q_DECL_OVERRIDE;
public:
    explicit DiceThread();
    void diceBegin();
    void dicePause();
    void stopThread();
    bool readValue(int *seq,int *diceValue);

public slots:
};

#endif // DICETHREAD_H
