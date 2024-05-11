#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*
     * A APP has a Proccessor at least
     * A Proccessor has a Thread at least
     * If we wanna create thread, we can use QThread
     */
    //myThread = new MyThread(this);
    MyThread * testThread = new MyThread(this);
    testThread->start();

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    /* Call Linux OS function */
    //system("sleep 5");
    
    myThread->start();
}

void Widget::on_pushButton_2_clicked()
{
    /* Terminate Thread */
    if(! (myThread->isFinished()))
    {
        myThread->terminate();
    }
}
