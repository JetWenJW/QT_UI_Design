#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Add Item to QListWidget */
    ui->listWidget->addItem("1.Name");
    ui->listWidget->addItem("2.ID Number");
    ui->listWidget->addItem("3.Address");

    /* Remove Item from QListWidget */
    ui->listWidget->takeItem(1);

    /* Insert Item in QListWidget */
    ui->listWidget->insertItem(3, "2.1 Friend");

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_listWidget_currentRowChanged(int currentRow)
{
    qDebug()<< currentRow << ui->listWidget->item(currentRow)->text() <<endl;
}
