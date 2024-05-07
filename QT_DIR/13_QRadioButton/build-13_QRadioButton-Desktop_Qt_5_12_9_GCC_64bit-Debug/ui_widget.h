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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        radioButton = new QRadioButton(Widget);
        buttonGroup_2 = new QButtonGroup(Widget);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(250, 50, 100, 50));
        radioButton->setStyleSheet(QString::fromUtf8(""));
        radioButton_2 = new QRadioButton(Widget);
        buttonGroup_2->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 100, 100, 50));
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton::indicator:checked { image : url(:/icon/radio.png) }\n"
""));
        radioButton_3 = new QRadioButton(Widget);
        buttonGroup = new QButtonGroup(Widget);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(450, 100, 120, 50));
        radioButton_4 = new QRadioButton(Widget);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(450, 50, 120, 50));
        radioButton_5 = new QRadioButton(Widget);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(450, 150, 120, 50));
        radioButton_5->setStyleSheet(QString::fromUtf8("QRadioButton::indicator:unchecked { image-url(:/icon/radio.png) }\n"
"QRadioButton::indicator:checked { image-url(:/icon/radio.png) }\n"
"QRadioButton{font-size: 30px; color:#99404040}\n"
"QRadioButton::indicator:unchecked {width: 0px; height: 0px}\n"
""));
        radioButton_4->raise();
        radioButton_2->raise();
        radioButton->raise();
        radioButton_5->raise();
        radioButton_3->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        radioButton->setText(QApplication::translate("Widget", "Male", nullptr));
        radioButton_2->setText(QApplication::translate("Widget", "Female", nullptr));
        radioButton_3->setText(QApplication::translate("Widget", "Math", nullptr));
        radioButton_4->setText(QApplication::translate("Widget", "Chinese", nullptr));
        radioButton_5->setText(QApplication::translate("Widget", "English", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
