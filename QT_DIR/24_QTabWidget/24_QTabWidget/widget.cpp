#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->horizontalLayout);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void Widget::on_listWidget_currentRowChanged(int currentRow)
{
    ui->tabWidget->setCurrentIndex(currentRow);
}
