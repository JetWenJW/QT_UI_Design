#include "rich.h"
#include "ui_rich.h"

Rich::Rich(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rich)
{
    ui->setupUi(this);
}

Rich::~Rich()
{
    delete ui;
}

qreal Rich::money() const
{
    return richmoney;
}

void Rich::setMoney(qreal m)
{
    richmoney = m;
    ui->Moneylabel->setText(QString::number(richmoney) + "millon");
}
