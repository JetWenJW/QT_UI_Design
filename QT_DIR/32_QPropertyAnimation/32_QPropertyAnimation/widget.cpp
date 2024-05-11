#include "widget.h"
#include "ui_widget.h"
#include <QPropertyAnimation>
#include <QGraphicsColorizeEffect>
#include <QGraphicsOpacityEffect>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Geometry Animation Initial */
    propertyAnimation = new QPropertyAnimation(ui->geometryWidget, "geometry");

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

    /* 2. ColorWidget */
    QGraphicsColorizeEffect * graphicsColorizeEffect = new QGraphicsColorizeEffect(this);
    ui->ColorWidget->setGraphicsEffect(graphicsColorizeEffect);
    propertyAnimation1 = new QPropertyAnimation(graphicsColorizeEffect, "color");
    propertyAnimation1->setStartValue(QColor(Qt::yellow));
    propertyAnimation1->setEndValue(QColor(Qt::gray));
    propertyAnimation1->setDuration(2000);

    /* 3.Transplate */
    QGraphicsOpacityEffect * graphicsOpacityEffect = new QGraphicsOpacityEffect(this);
    ui->opacitywidget->setGraphicsEffect(graphicsOpacityEffect);
    propertyAnimation2 = new QPropertyAnimation(graphicsOpacityEffect, "opacity");
    propertyAnimation2->setStartValue(0.0);
    propertyAnimation2->setEndValue(1.0);
    propertyAnimation2->setDuration(5000);





}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    propertyAnimation->start();
}

void Widget::on_pushButton_2_clicked()
{
    propertyAnimation1->start();
}

void Widget::on_pushButton_3_clicked()
{
    propertyAnimation2->start();
}
