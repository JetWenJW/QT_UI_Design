#include "widget.h"
#include "ui_widget.h"
#include <QPropertyAnimation>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Geometry Animation Initial */
    propertyAnimation = new QPropertyAnimation(ui->geometryWidget, "Geometry");


    /* Set Initial Animation Value */
    propertyAnimation->setStartValue(QRect(0, 0, 100, 100));

    /* Set End Animation Value */
    propertyAnimation->setEndValue(QRect(600, 400, 200, 200));

    /* Set Animation Time */
    propertyAnimation->setDuration(2000);

    /* Set Periodic */
    propertyAnimation->setLoopCount(3);

    /* Set Animation Curve */
    propertyAnimation->setEasingCurve(QEasingCurve::Linear);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    propertyAnimation->start();
}
