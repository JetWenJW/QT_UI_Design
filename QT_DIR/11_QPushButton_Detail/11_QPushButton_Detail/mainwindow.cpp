#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << " Clicked " << endl;
}

void MainWindow::on_pushButton_pressed()
{
    qDebug() << " Pressed~ " << endl;
}

void MainWindow::on_pushButton_released()
{
    qDebug() << " Release~ " << endl;
}

void MainWindow::on_pushButton_toggled(bool checked)
{
    qDebug() << " Toggled~ " << checked << endl;
}
