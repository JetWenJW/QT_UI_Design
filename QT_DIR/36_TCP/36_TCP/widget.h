#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

    QTcpServer * tcpserver;

private slots:
    void mNewConnection();
    void receiveMessages();
    void mstatChanged(QAbstractSocket::SocketState);

};
#endif // WIDGET_H
