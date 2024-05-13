#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    serialPort = new QSerialPort(this);

    /* Search Local COM Port & add to comBox Automatically */
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->comboBox->addItem(info.portName());
    }

    /* Read Data */
    connect(serialPort, SIGNAL(readyRead()), this, SLOT(readData()));

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked(bool checked)
{
    if(checked)
    {
        /* Set Selected Serial Port */
        serialPort->setPortName(ui->comboBox->currentText());

        /* Set BaudRate */
        serialPort->setBaudRate(ui->comboBox_2->currentText().toInt());

        /* Set Stop Bit */
        serialPort->setStopBits(QSerialPort::StopBits(ui->comboBox_3->currentText().toInt()));

        /* Set Data Bit */
        serialPort->setDataBits(QSerialPort::DataBits(ui->comboBox_4->currentText().toInt()));

        /* Set Parity Bit */
        switch(ui->comboBox_5->currentIndex())
        {
        case 0:
            serialPort->setParity(QSerialPort::NoParity);
            break;

        case 1:
            serialPort->setParity(QSerialPort::EvenParity);
            break;

        case 2:
            serialPort->setParity(QSerialPort::OddParity);
            break;

        case 3:
            serialPort->setParity(QSerialPort::SpaceParity);
            break;

        case 4:
            serialPort->setParity(QSerialPort::MarkParity);
            break;

        default:
            break;

        }


        /* Set Flow Control as none */
        serialPort->setFlowControl(QSerialPort::NoFlowControl);

        /* Open Serial Port */
        if(!serialPort->open(QIODevice::ReadWrite))
        {
            QMessageBox::about(this, "Error", "Serial Port Error");
            return;
        }

        ui->comboBox->setEnabled(false);
        ui->comboBox_2->setEnabled(false);
        ui->comboBox_3->setEnabled(false);
        ui->comboBox_4->setEnabled(false);
        ui->comboBox_5->setEnabled(false);
        ui->pushButton->setText("close Serial Port");
    }
    else    /* Close Serial Port */
    {
        serialPort->close();
        ui->comboBox->setEnabled(true);
        ui->comboBox_2->setEnabled(true);
        ui->comboBox_3->setEnabled(true);
        ui->comboBox_4->setEnabled(true);
        ui->comboBox_5->setEnabled(true);
        ui->pushButton->setText("Open Serial Port");

    }
}

void Widget::readData()
{
    /* Receive Data */
    ui->textBrowser->insertPlainText(serialPort->readAll());
}

void Widget::on_pushButton_2_clicked()
{
    /* Transfer Data */
    serialPort->write(ui->textEdit->toPlainText().toUtf8());
}

void Widget::on_pushButton_3_clicked()
{
    /* Clear All Data */
    ui->textEdit->clear();
}
