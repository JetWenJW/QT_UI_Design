#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QDebug>

#include <QFontMetrics>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , offset(0)
    , textContent("JetWen is so handsome~")
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->start(100);

    font.setPixelSize(50);

    /* Show the text width */
    QFontMetrics fontMetrics(font);
    textContentWidth = fontMetrics.width(textContentWidth);

    connect(timer, SIGNAL(timeout()), this, SLOT(onTimerTimeout()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QPen pen;
    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.setFont(font);

    QRectF rectF = this->rect();


    rectF.setLeft(this->rect().width() - offset);
    qDebug()<<rectF.width()<<endl;

    painter.drawText(rectF, Qt::AlignVCenter, textContent);

}

void Widget::onTimerTimeout()
{
    if(offset < this->width() + textContentWidth)
    {
        offset += 5;
    }
    else
    {
        offset = 0;
    }

    /* Update the window & show message */
    this->update();

}

