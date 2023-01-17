#include "PandC.h"
using namespace std;
class OSWork_1;
deque<int> q;
mutex mu;
condition_variable cond;
int c = 0;//缓冲区的产品个数
extern int PSTime = 1100;
extern int CSTime = 1100;
int hcnum = 10;
void Producer::run() {
	int data1;
	while (!m_stop) {//通过外层循环，能保证生成用不停止
		if (c < hcnum) {//限流
			{
				data1 = rand();
				unique_lock<mutex> locker(mu);//锁
				q.push_front(data1);
				qDebug() << "存了" << data1 << endl;
				if (c == 1)
					cond.notify_one(); // 通知取
				++c;
			}
			emit pro(c);
			Sleep(PSTime);
		}
	}
}

void Consumer::run() {
	int data2;//data用来覆盖存放取的数据
	while (!m_stop) {
		{
			unique_lock<mutex> locker(mu);
			if (q.empty())
				cond.wait(locker); //wati()阻塞前先会解锁,解锁后生产者才能获得锁来放产品到缓冲区；生产者notify后，将不再阻塞，且自动又获得了锁。
			data2 = q.back();//取的第一步
			q.pop_back();//取的第二步
			qDebug() << "取了" << data2 << endl;
			--c;
		}
		emit con(c);
		Sleep(CSTime);
	}
}
