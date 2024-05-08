#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);             /* Hide the frame */
    setAttribute(Qt::WA_TranslucentBackground);         /* Set Widget background as transparent */
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    this->close();
}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}
