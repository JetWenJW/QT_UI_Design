#include "widget.h"
#include "ui_widget.h"
#include <QPainter>


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

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    /* 'this' is refer pain Device */
    QPainter painter(this);

    /* Told to Painter Draw with Filter */
    painter.setRenderHint(QPainter::Antialiasing);

    /* Set a pen */
    QPen pen;
    pen.setWidth(5);
    pen.setColor(QColor(200, 100, 50));

    QBrush brush(QColor(100, 100, 50));


    /* Set pen to pianter */
    painter.setBrush(brush);

    painter.drawRect(200, 100, 100, 100);/* Rectangle & Squre */

    QPolygon polygon;
    polygon.setPoints(3, 100, 20, 200, 50, 300, 300);

    /* Triangle */
    painter.drawPolygon(polygon);

    /* Line*/
    painter.drawLine(180, 180, 100, 100);

    /* Draw a Ellipse & Circle */
    painter.drawEllipse(280, 280, 50, 150);
    painter.drawEllipse(360, 360, 50, 50);

    /* Draw Char */
    QRectF recf(0, 0, 200, 100);
    painter.drawText(recf, Qt::AlignHCenter, "JetWen");

    /* Draw Path */
    QPainterPath path;
    path.moveTo(20, 80);
    path.lineTo(20, 30);
    path.cubicTo(80, 0, 50, 50, 80, 80);
    painter.drawPath(path);

}

