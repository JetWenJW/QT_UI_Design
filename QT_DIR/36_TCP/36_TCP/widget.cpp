#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpserver = new QTcpServer(this);
    connect(tcpserver, SIGNAL(newconnection()), this, SLOT(mNewConnection()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mNewConnection()
{
    /* Connection Successful with User */
    QTcpSocket *tempTcpSocket = tcpserver->nextPendingConnection();

    /* User Port IP address */
    QString ipaddr = tempTcpSocket->peerAddress().toString();
    quint16 port = tempTcpSocket->peerPort();

    /* Print User IP Message */
    ui->textBrowser->append("User IP Address:" + ipaddr);

    /* Print User Port Message */
    ui->textBrowser->append("User Port" + QString::number(port));
    connect(tempTcpSocket, SIGNAL(readyRead()), this, SLOT(mNewConnection(receiveMessages)));
    connect(tempTcpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(mstateChanged(QAbstractSocket::SocketState)));

}

void Widget::receiveMessages()
{
    QTcpSocket * tempTcpSocket = (QTcpSocket *)sender();

    /* Receive Message */
    ui->textBrowser->append(tempTcpSocket->readAll());
}

void Widget::mstatChanged(QAbstractSocket::SocketState state)
{
    QTcpSocket * tempTcpSocket = (QTcpSocket *)sender();
    switch(state)
    {
        case QAbstractSocket::UnconnectedState:
            ui->textBrowser->append("User Port disconnected");
            delete tempTcpSocket;
            break;
        case QAbstractSocket::ConnectedState:
            ui->textBrowser->append("User Port Connected");

            break;
        default:
            break;
    }

}


void Widget::on_pushButton_3_clicked()
{
    QList <QTcpSocket *> socketList = tcpserver->findChildren<QTcpSocket *>();
    foreach(QTcpSocket * tempTcpSocket, socketList)
    {
        /* Server Port Send Message to Each User Port */
        tempTcpSocket->write(ui->lineEdit->text().toUtf8());
    }
}

void Widget::on_pushButton_clicked()
{
    /* Listen Port & IP address */
    tcpserver->listen(QHostAddress("192.168.1.59"), 10000);
}
