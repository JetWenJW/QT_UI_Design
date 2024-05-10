/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QChartView *ChartView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        ChartView = new QChartView(Widget);
        ChartView->setObjectName(QString::fromUtf8("ChartView"));

        verticalLayout->addWidget(ChartView);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "QChart Example", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
