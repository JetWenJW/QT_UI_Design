#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    school = new School(this);
    student = new Student(this);

    connect(school, SIGNAL(sendMessages()), student, SLOT(comeBackToClass()));
    connect(school, SIGNAL(sendMessages_2()), student, SLOT(comeBackToClass()));

    emit school->sendMessages();
}

MainWindow::~MainWindow()
{
    delete ui;
}

