#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QMainWindow>
#include <qpalette.h>
#include "ui_OSWork_1.h"
#include"PandC.h"
#include <qpushbutton.h>
#include <qdebug.h>

class OSWork_1 : public QMainWindow
{
    Q_OBJECT
public:
    QPalette pe1;
    QPalette pe2;
    Producer* producer;
    Consumer* consumer;
    OSWork_1();
    void display(int c);
    void ReStart();
    void End();
    void add_p();
    void sub_p();
    void add_c();
    void sub_c();
    ~OSWork_1();
private:
    Ui::OSWork_1Class ui;
};
