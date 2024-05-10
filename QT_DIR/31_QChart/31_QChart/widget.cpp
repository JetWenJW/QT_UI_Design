#include "widget.h"
#include "ui_widget.h"
#include <QValueAxis>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /* Step1. Create a ChartView (We've already created in ui file) */
    /* Step2. Chart must put in ChartView, so we can see it  */
    QChart *chart = new QChart();

    /* Step3. Create Ordiante */
    QValueAxis *valueAxisX = new QValueAxis();
    QValueAxis *valueAxisY = new QValueAxis();

    /* Step4. Set Ordianted Range */
    valueAxisX->setRange(0, 5000);
    valueAxisY->setRange(0, 100);

    /* Step5. Set Title of Ordinated */
    valueAxisX->setTitleText("Time/ms");
    valueAxisY->setTitleText("Temp/C");
    valueAxisX->setLabelFormat("%d");
    valueAxisY->setLabelFormat("%d");

    /* Step6.  */

}

Widget::~Widget()
{
    delete ui;
}

