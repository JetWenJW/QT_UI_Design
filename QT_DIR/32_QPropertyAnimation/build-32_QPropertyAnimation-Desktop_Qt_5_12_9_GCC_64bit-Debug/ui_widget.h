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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *geometryWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *ColorWidget;
    QWidget *opacitywidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        geometryWidget = new QWidget(Widget);
        geometryWidget->setObjectName(QString::fromUtf8("geometryWidget"));
        geometryWidget->setGeometry(QRect(110, 180, 120, 80));
        geometryWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color: red;\n"
"}"));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 110, 201, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        ColorWidget = new QWidget(Widget);
        ColorWidget->setObjectName(QString::fromUtf8("ColorWidget"));
        ColorWidget->setGeometry(QRect(110, 310, 120, 80));
        ColorWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color: blue;\n"
"}"));
        opacitywidget = new QWidget(Widget);
        opacitywidget->setObjectName(QString::fromUtf8("opacitywidget"));
        opacitywidget->setGeometry(QRect(110, 430, 120, 80));
        opacitywidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color: black;\n"
"}"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QApplication::translate("Widget", "Geometry", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "Color", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "Tansplate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
