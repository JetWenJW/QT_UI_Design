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


void Widget::on_radioButton_toggled(bool checked)
{
    qDebug()<< " Male " << checked <<endl;
}

void Widget::on_radioButton_2_toggled(bool checked)
{
    qDebug()<< " Female" << checked <<endl;

}
