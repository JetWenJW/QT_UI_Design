#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkBox_stateChanged(int arg1)
{
    switch(arg1)
    {
        case Qt::Checked:
            qDebug()<<"Checked"<< endl;
            break;
        case Qt::PartiallyChecked:
            qDebug()<<"PartiallyChecked"<<endl;
            break;
        case Qt::Unchecked:
            qDebug()<<"Unchecked"<< endl;
            break;
    }
}
