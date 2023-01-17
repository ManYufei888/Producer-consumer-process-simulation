#include "OSWork_1.h"
extern int PSTime;
extern int CSTime;

void OSWork_1::display(int c) {
    ui.label_1->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_2->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_3->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_4->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_5->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_6->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_7->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_8->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_9->setAutoFillBackground(true);  //一定要这句，否则不行
    ui.label_10->setAutoFillBackground(true);  //一定要这句，否则不行

    switch (c)
    {
    case 0:
        ui.label_1->setPalette(pe2);        
        ui.label_2->setPalette(pe2);
        ui.label_3->setPalette(pe2);
        ui.label_4->setPalette(pe2);
        ui.label_5->setPalette(pe2);
        ui.label_6->setPalette(pe2);
        ui.label_7->setPalette(pe2);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 1:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe2);
        ui.label_3->setPalette(pe2);
        ui.label_4->setPalette(pe2);
        ui.label_5->setPalette(pe2);
        ui.label_6->setPalette(pe2);
        ui.label_7->setPalette(pe2);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 2:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe2);
        ui.label_4->setPalette(pe2);
        ui.label_5->setPalette(pe2);
        ui.label_6->setPalette(pe2);
        ui.label_7->setPalette(pe2);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 3:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe2);
        ui.label_5->setPalette(pe2);
        ui.label_6->setPalette(pe2);
        ui.label_7->setPalette(pe2);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 4:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe1);
        ui.label_5->setPalette(pe2);
        ui.label_6->setPalette(pe2);
        ui.label_7->setPalette(pe2);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 5:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe1);
        ui.label_5->setPalette(pe1);
        ui.label_6->setPalette(pe2);
        ui.label_7->setPalette(pe2);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 6:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe1);
        ui.label_5->setPalette(pe1);
        ui.label_6->setPalette(pe1);
        ui.label_7->setPalette(pe2);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 7:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe1);
        ui.label_5->setPalette(pe1);
        ui.label_6->setPalette(pe1);
        ui.label_7->setPalette(pe1);
        ui.label_8->setPalette(pe2);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 8:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe1);
        ui.label_5->setPalette(pe1);
        ui.label_6->setPalette(pe1);
        ui.label_7->setPalette(pe1);
        ui.label_8->setPalette(pe1);
        ui.label_9->setPalette(pe2);
        ui.label_10->setPalette(pe2);
        break;
    case 9:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe1);
        ui.label_5->setPalette(pe1);
        ui.label_6->setPalette(pe1);
        ui.label_7->setPalette(pe1);
        ui.label_8->setPalette(pe1);
        ui.label_9->setPalette(pe1);
        ui.label_10->setPalette(pe2);
        break;
    case 10:
        ui.label_1->setPalette(pe1);
        ui.label_2->setPalette(pe1);
        ui.label_3->setPalette(pe1);
        ui.label_4->setPalette(pe1);
        ui.label_5->setPalette(pe1);
        ui.label_6->setPalette(pe1);
        ui.label_7->setPalette(pe1);
        ui.label_8->setPalette(pe1);
        ui.label_9->setPalette(pe1);
        ui.label_10->setPalette(pe1);
        break;
    default:
        break;
    }
    ui.label_pnum->setText("生产者数量：" + QString::number(16 - PSTime / 100));
    ui.label_cnum->setText("消费者数量：" + QString::number(16 - CSTime / 100));
}

OSWork_1::OSWork_1()
    : QMainWindow()
{
    ui.setupUi(this);
    this->setWindowTitle("生产者消费者模拟器");
    producer = nullptr;
    consumer = nullptr;
    //设置黑底红字
    pe1.setColor(QPalette::Background, Qt::black);
    pe1.setColor(QPalette::WindowText, Qt::red);
    pe2.setColor(QPalette::Background, Qt::white);
    pe2.setColor(QPalette::WindowText, Qt::red);
    //ui.label_1->setPalette(pe1);
    connect(producer, &Producer::pro, this, &OSWork_1::display);
    connect(consumer, &Consumer::con, this, &OSWork_1::display);
    connect(ui.pushButton_end, &QPushButton::clicked, this, &OSWork_1::End);
    connect(ui.pushButton_start, &QPushButton::clicked, this, &OSWork_1::ReStart);
    connect(ui.pushButton_addp, &QPushButton::clicked, this, &OSWork_1::add_p);
    connect(ui.pushButton_subp, &QPushButton::clicked, this, &OSWork_1::sub_p);
    connect(ui.pushButton_addc, &QPushButton::clicked, this, &OSWork_1::add_c);
    connect(ui.pushButton_subc, &QPushButton::clicked, this, &OSWork_1::sub_c);
}

OSWork_1::~OSWork_1() {
    End();
}

void OSWork_1::End() {
    if (producer && !producer->m_stop) {
        producer->m_stop = true;
        producer->wait();
        delete producer;
        producer = nullptr;
    }
    if (consumer && !consumer->m_stop) {
        consumer->m_stop = true;
        consumer->wait();
        consumer->quit();
        delete consumer;
        consumer = nullptr;
    }
}

void OSWork_1::ReStart() {
    if (!producer) {
        producer = new Producer;
        connect(producer, &Producer::pro, this, &OSWork_1::display);
        producer->start();
    }
    if (!consumer) {
        consumer = new Consumer;
        connect(consumer, &Consumer::con, this, &OSWork_1::display);
        consumer->start();
    }
}

void OSWork_1::add_p() {
    if (producer) {
        if (PSTime > 600)
            PSTime -= 100;
        qDebug() << "PSTime时长为：" << PSTime;
    }
}

void OSWork_1::sub_p() {
    if (producer) {
        if (PSTime < 1500)
            PSTime += 100;
        qDebug() << "PSTime时长为：" << PSTime;
    }
}

void OSWork_1::add_c() {
    if (consumer) {
        if (CSTime > 600)
            CSTime -= 100;
        qDebug() << "CSTime时长为：" << CSTime;
    }
}

void OSWork_1::sub_c() {
    if (consumer) {
        if (CSTime < 1500)
            CSTime += 100;
        qDebug() << "CSTime时长为：" << CSTime;
    }
}