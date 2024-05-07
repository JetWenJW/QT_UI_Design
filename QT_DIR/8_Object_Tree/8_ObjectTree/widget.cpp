#include "widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    pushButton = new QPushButton();
    pushButton->setParent(this);    /* Set Parent Object */
    pushButton->setText("Jet");
    pushButton->setGeometry(0, 0, 150, 50);

    myWidget = new MyWidget();
    delete myWidget;
}

Widget::~Widget()
{
    qDebug()<<"MyWidget Delete!" << endl;
    delete myWidget;
}

