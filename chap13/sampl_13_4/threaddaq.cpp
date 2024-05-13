#include "threaddaq.h"
#include <QSemaphore>
const int BufferSize = 8;
int buffer1[BufferSize];
int buffer2[BufferSize];
int curBuf = 1; //当前采集数据使用的缓冲区
int seq = 0;

QSemaphore emptyBufs(2);
QSemaphore fullBufs;
ThreadDAQ::ThreadDAQ()
{

}

void ThreadDAQ::run()
{
    m_stop = false;
    int counter = 0;
    seq = 0;
    int n = emptyBufs.available();
    if(n < 2)
        emptyBufs.release(2-n);
    while (!m_stop) {
        emptyBufs.acquire();
        seq++;
        for(int i = 0; i < BufferSize; i++){
            if(curBuf == 1)
                buffer1[i] = counter;
            else
                buffer2[i] = counter;
            counter++;  //模拟产生数据
        }
        if(curBuf == 1)
            curBuf = 2;
        else
            curBuf = 1;
        fullBufs.release();
        msleep(500);
    }
}

ThreadShow::ThreadShow()
{

}

void ThreadShow::run()
{
    m_stop = false;
    int dataBuf[BufferSize];
    int n = fullBufs.available();
    if(n > 0)
        fullBufs.release(n);
    while(!m_stop){
        fullBufs.acquire();
        if(curBuf == 1){
            for(int i = 0;i < BufferSize;i++)
                dataBuf[i] = buffer2[i];
        }else{
            for(int i = 0;i < BufferSize;i++)
                dataBuf[i] = buffer1[i];
        }
        emit newValue(dataBuf,BufferSize,seq);
        emptyBufs.release();
    }
}
