#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    pushButton = new QPushButton(this);
    pushButton->setText("I'm A Button");
    pushButton->setGeometry(50, 150, 100, 50);  /* Set the PushButton Size */
    this->resize(800, 400);                     /* Set The MainWindow Size */
}

MainWindow::~MainWindow()
{

}

