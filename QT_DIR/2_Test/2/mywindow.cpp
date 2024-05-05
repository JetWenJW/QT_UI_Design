#include "mywindow.h"
#include "ui_mywindow.h"
#include <QDebug>

MyWindow::MyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWindow)
{
    ui->setupUi(this);
    qDebug()<< "Running"<<endl;
}

MyWindow::~MyWindow()
{
    qDebug()<<"run2"<<endl;
    delete ui;
}

