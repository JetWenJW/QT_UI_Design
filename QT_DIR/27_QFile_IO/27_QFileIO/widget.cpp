#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
#include <QFile>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Choose txt", "/home/ubuntu/QT_Project");
    qDebug()<< fileName <<endl;

    /* Set file name that we're gonna open */
    file.setFileName(fileName);

    /* Open file */
    if(!(file.open(QIODevice::ReadOnly)))
    {
        qDebug()<< "Open Error~" <<endl;
        return ;
    }

    /* QString Struct Funcion read files */
    ui->textEdit->setPlainText(file.readAll());

    /* Close Fils */
    file.close();

}

void Widget::on_pushButton_2_clicked()
{
    if(file.fileName().isEmpty())
    {
        return;
    }

    /* Open file */
    if(!(file.open(QIODevice::ReadWrite)))
    {
        qDebug()<< "Open Error~" <<endl;
        return ;
    }


    /* Write Files */
    file.write(ui->textEdit->toPlainText().toUtf8());
    file.close();
    ui->textEdit->clear();
}


