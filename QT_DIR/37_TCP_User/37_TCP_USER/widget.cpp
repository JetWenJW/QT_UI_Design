#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpSocket = new QTcpSocket(this);
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(receiveMessages()));
    connect(tcpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(receiveMessages()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::receiveMessages()
{
    ui->textBrowser->append("Server Port:" + tcpSocket->readAll());
}

void Widget::mstateChanged(QAbstractSocket::SocketState state)
{
    switch(state)
    {
    case QAbstractSocket::UnconnectedState:
        ui->textBrowser->append("Disconnected");
        break;
    case QAbstractSocket::ConnectedState:
        ui->textBrowser->append("Connected");
        break;

    default:
        break;
    }
}


void Widget::on_pushButton_3_clicked()
{
    if(tcpSocket->state() == QAbstractSocket::ConnectedState)
    {
        tcpSocket->write(ui->lineEdit->text().toUtf8());
    }
    else
    {
        ui->textBrowser->append("Please Connect to Server First");
    }
}

void Widget::on_pushButton_clicked()
{
    /* Connect to Server Port & IP address */
    tcpSocket->connectToHost(QHostAddress("192.168.1.59"), 10000);
}

void Widget::on_pushButton_2_clicked()
{
    /* Disconnect to SSServer Port & IP address */
    tcpSocket->disconnectFromHost();
}
