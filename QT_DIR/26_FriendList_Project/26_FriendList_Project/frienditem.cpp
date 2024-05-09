#include "frienditem.h"
#include "ui_frienditem.h"

FriendItem::FriendItem(QString icon, bool flag, QString name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendItem)
{
    ui->setupUi(this);
    QImage image(icon);
    ui->icon->setPixmap(QPixmap::fromImage(image.scaled(ui->icon->width(), ui->icon->height())));

    QImage image2(":/icon/injury.png");
    ui->phone->setPixmap(QPixmap::fromImage(image2.scaled(ui->phone->width(), ui->phone->height())));
    ui->phone->setVisible(flag);/* flag control show */

    ui->name->setText(name);

}

FriendItem::~FriendItem()
{
    delete ui;
}
