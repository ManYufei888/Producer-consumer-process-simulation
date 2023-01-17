#pragma once
#pragma execution_character_set("utf-8")
#include <QThread>
#include <QDebug>
#include<qpalette.h>
#include <deque>
#include <mutex>
#include <condition_variable>
#include<Windows.h>
#include <qlabel.h>

class Producer : public QThread
{
    Q_OBJECT
protected:

    void run();
signals:
    void pro(int c);
public:
    //�߳��˳��ı�ʶ��
    volatile bool m_stop;
    Producer()
    {
        m_stop = false;
    }
    //�߳��˳��Ľӿں������û�ʹ��
    void stop()
    {
        m_stop = true;
    }

};

class Consumer : public QThread
{
    Q_OBJECT
protected:
    void run();
signals:
    void con(int c);
public:
    //�߳��˳��ı�ʶ��
    volatile bool m_stop;
    Consumer()
    {
        m_stop = false;
    }
    //�߳��˳��Ľӿں������û�ʹ��
    void stop()
    {
        m_stop = true;
    }
};

