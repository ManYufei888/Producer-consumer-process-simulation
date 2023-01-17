#include "PandC.h"
using namespace std;
class OSWork_1;
deque<int> q;
mutex mu;
condition_variable cond;
int c = 0;//�������Ĳ�Ʒ����
extern int PSTime = 1100;
extern int CSTime = 1100;
int hcnum = 10;
void Producer::run() {
	int data1;
	while (!m_stop) {//ͨ�����ѭ�����ܱ�֤�����ò�ֹͣ
		if (c < hcnum) {//����
			{
				data1 = rand();
				unique_lock<mutex> locker(mu);//��
				q.push_front(data1);
				qDebug() << "����" << data1 << endl;
				if (c == 1)
					cond.notify_one(); // ֪ͨȡ
				++c;
			}
			emit pro(c);
			Sleep(PSTime);
		}
	}
}

void Consumer::run() {
	int data2;//data�������Ǵ��ȡ������
	while (!m_stop) {
		{
			unique_lock<mutex> locker(mu);
			if (q.empty())
				cond.wait(locker); //wati()����ǰ�Ȼ����,�����������߲��ܻ�������Ų�Ʒ����������������notify�󣬽��������������Զ��ֻ��������
			data2 = q.back();//ȡ�ĵ�һ��
			q.pop_back();//ȡ�ĵڶ���
			qDebug() << "ȡ��" << data2 << endl;
			--c;
		}
		emit con(c);
		Sleep(CSTime);
	}
}
