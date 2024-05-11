#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    rich = new Rich(this);

    rich->setProperty("money", 200);    /* This Function will Call WRITE setMoney Function */
    qDebug() << "Rich People have" << rich->money() << "million" << endl;
}

Widget::~Widget()
{
    delete ui;
}

