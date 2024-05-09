#include "widget.h"
#include "ui_widget.h"
#include "frienditem.h"
#include <QListWidgetItem>


class FriendItem;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);

    FriendItem *frienditem = new FriendItem(":/icon/head.png", true, "Vincent");
    FriendItem *frienditem1 = new FriendItem(":/icon/person.png", false, "Sam");
    FriendItem *frienditem2 = new FriendItem(":/icon/injury.png", true, "KaMi");
    FriendItem *frienditem3 = new FriendItem(":/icon/man-hair.png", false, "Jet");

    QListWidgetItem *item0 = new QListWidgetItem;
    QListWidgetItem *item1 = new QListWidgetItem;
    QListWidgetItem *item2 = new QListWidgetItem;
    QListWidgetItem *item3 = new QListWidgetItem;

    ui->listWidget->addItem(item0);
    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);

    ui->listWidget->setItemWidget(item0, frienditem);
    ui->listWidget->setItemWidget(item1, frienditem1);
    ui->listWidget->setItemWidget(item2, frienditem2);
    ui->listWidget->setItemWidget(item3, frienditem3);
}

Widget::~Widget()
{
    delete ui;
}

