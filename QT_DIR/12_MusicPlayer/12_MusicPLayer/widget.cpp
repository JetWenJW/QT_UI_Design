#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setCheckable(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    qDebug()<<" Clicked~"<<endl;
}

void Widget::on_pushButton_pressed()
{
    qDebug()<<" Pressed~"<<endl;
}

void Widget::on_pushButton_released()
{
    qDebug()<<" Release~"<<endl;
}

void Widget::on_pushButton_toggled(bool checked)
{
    qDebug()<<" Toggled~"<< checked <<endl;
}
