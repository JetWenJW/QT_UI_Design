#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Hello JetWen Welcome to QT" << endl;
}

void MainWindow::on_pushButton_2_clicked()
{
    for( int i = 0;i < 5;i++)
    {
        qDebug()<< i << "You are so Handsome"<< endl;
    }
}
