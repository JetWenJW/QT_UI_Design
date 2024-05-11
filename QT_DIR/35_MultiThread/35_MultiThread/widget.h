#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QThread>
#include <QDebug>

class MyThread;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    MyThread *myThread;
};

class MyThread:public QThread
{
    Q_OBJECT

public:
    MyThread(QWidget *parent = nullptr)
    {
        Q_UNUSED(parent);
    }

    ~MyThread()
    {
        qDebug() << "Thread Delete" << endl;
    }

    /* Only this run() Method will be in New Thread */
    void run() override
    {
        qDebug() << "Thread Start" << endl;
        sleep(5); /* Only QThread Can use ThisFunction */
        qDebug() << "Thread End" << endl;
        deleteLater();

    }
};

#endif // WIDGET_H
