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
    connect(tempTcpSocket, SIGNAL(readyRead()), this, SLOT(mNewConnection(receiveMessages)));
    connect(tempTcpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(mstateChanged(QAbstractSocket::SocketState)));

}

void Widget::receiveMessages()
{

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

