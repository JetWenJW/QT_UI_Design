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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(150, 10, 650, 480));
        scrollArea->setMinimumSize(QSize(650, 480));
        scrollArea->setMaximumSize(QSize(650, 480));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical\n"
"{\n"
"		width: 20px;\n"
"		background-color: white;\n"
"		border-radius: 30px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"		background-color: rgb(154, 153, 150);\n"
"		border-radius: 30px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"		width: 0px;\n"
"		height: 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"		width: 0px;\n"
"		height: 0px;\n"
"}\n"
"\n"
"QScrollBar:horizontal\n"
"{\n"
"		width: 20px;\n"
"		background-color: white;\n"
"		\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"		background-color: rgb(154, 153, 150);\n"
"		border::radius: 15px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"		width: 0px;\n"
"		height: 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"		width: 0px;\n"
"		height: 0px;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, -322, 1000, 800));
        scrollAreaWidgetContents_3->setMinimumSize(QSize(1000, 800));
        scrollAreaWidgetContents_3->setMaximumSize(QSize(1000, 800));
        scrollAreaWidgetContents_3->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color: gray;\n"
"}"));
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
