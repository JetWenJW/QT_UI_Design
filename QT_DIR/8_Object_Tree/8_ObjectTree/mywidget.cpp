#include "mywidget.h"
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
}

MyWidget::~MyWidget()
{
    qDebug() << "~MyWidget Function Run! "<< endl;
}
