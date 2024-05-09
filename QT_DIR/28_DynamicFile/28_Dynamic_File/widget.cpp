#include "widget.h"
#include "ui_widget.h"
#include "newfiledialog.h"
#include <QFile>
#include <QDateTime>

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
    QFile file;
    file.setFileName(QDateTime::currentDateTime().toString("MMddhhmmss"));

    file.open(QIODevice::ReadWrite);

    NewFileDialog *filedialog = new NewFileDialog(this);
    filedialog->resize(this->size());

    filedialog->show();
    filedialog->setModal(true);
    filedialog->exec();

    file.write(filedialog->getTextEditContent().toUtf8());
    file.close();


    delete filedialog;
}
