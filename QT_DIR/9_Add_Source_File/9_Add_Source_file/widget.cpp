#include "widget.h"
#include "ui_widget.h"

#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //ui->setupUi(this);
    /* What if we don't have UI file */
    //this->setStyleSheet("QWidget{background-color: black}");
    QLabel *label = new QLabel(this);
    label->setGeometry(0, 0, 100, 100);

    QLabel *label2 = new QLabel(this);
    label2->setGeometry(100, 100, 100, 100);
    label2->setObjectName("label2");
    //label->setStyleSheet("QLabel{background-color: white}");
    this->resize(800, 480);

}

Widget::~Widget()
{
    delete ui;
}

