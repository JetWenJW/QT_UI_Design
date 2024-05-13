#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);
    ui->pushButton_2->setEnabled(false);
    udpSocket->bind(7755);

    /* Bind IP address & Port */
    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(readPendingDatagrams()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::readPendingDatagrams()
{
    QByteArray tmpByteArray;
    /* reDefine Array Size */
    tmpByteArray.resize(udpSocket->pendingDatagramSize());
    QHostAddress ipaddr;
    quint16 port;

    while(udpSocket->hasPendingDatagrams())
    {
        udpSocket->readDatagram(tmpByteArray.data(), tmpByteArray.size(), &ipaddr, &port);
        /* Print Sender IP address & Port */
        ui->textBrowser->append("Receive From: " + ipaddr.toString() + ":" + QString::number(port) + tmpByteArray);
    }
}


void Widget::on_pushButton_3_clicked()
{

    ui->textBrowser->append("Send:" + ui->lineEdit->text());
    udpSocket->writeDatagram(ui->lineEdit->text().toUtf8(), QHostAddress("127.0.0.1"), 7755);
}

void Widget::on_pushButton_clicked()
{
    ui->pushButton_2->setEnabled(true);
    ui->pushButton->setEnabled(false);

    udpSocket->bind(7755);
}

void Widget::on_pushButton_2_clicked()
{

    udpSocket->abort();
    ui->pushButton_2->setEnabled(false);
    ui->pushButton->setEnabled(true);
}

void Widget::on_pushButton_4_clicked()
{
    udpSocket->writeDatagram(ui->lineEdit->text().toUtf8(), QHostAddress::Broadcast, 7755);
}
