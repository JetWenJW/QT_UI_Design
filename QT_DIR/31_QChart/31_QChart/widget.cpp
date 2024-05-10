#include "widget.h"
#include "ui_widget.h"
#include <QValueAxis>
#include <QSplineSeries>
#include <QLineSeries>

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

    valueAxisX->setTickCount(10);       /* Set Grid of X axis */
    valueAxisY->setTickCount(10);       /* Set Grid of Y axis */


    /* Step6. Chart add Ordinated */
    chart->createDefaultAxes();
    chart->addAxis(valueAxisX, Qt::AlignBottom);
    chart->addAxis(valueAxisY, Qt::AlignLeft);

    /* Step7. Set Topic & legend of Chart */
    chart->setTitle("Temp & Time Curve");
    chart->legend()->setVisible(true);

    /* Step8. Set Curve, add all point and connect them */
    QSplineSeries *splineSeries = new QSplineSeries();
    splineSeries->append(0, 50);
    splineSeries->append(1000, 60);
    splineSeries->append(2000, 80);
    splineSeries->append(3000, 50);
    splineSeries->append(4000, 30);
    splineSeries->append(5000, 80);

    QPen pen(QColor(0xFF5566));
    splineSeries->setPen(pen);

    /* Step9. Add Curve to Chart */
    chart->addSeries(splineSeries);

    /* Step10. Connect all the point in Ordinate */
    splineSeries->attachAxis(valueAxisX);
    splineSeries->attachAxis(valueAxisY);

    /* Step11. Put Chart into ChartView */
    ui->ChartView->setChart(chart);




}

Widget::~Widget()
{
    delete ui;
}

