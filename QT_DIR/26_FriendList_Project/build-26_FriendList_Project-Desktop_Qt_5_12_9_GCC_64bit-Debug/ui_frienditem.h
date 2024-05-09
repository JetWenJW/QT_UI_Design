/********************************************************************************
** Form generated from reading UI file 'frienditem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDITEM_H
#define UI_FRIENDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendItem
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QLabel *icon;
    QLabel *phone;
    QLabel *name;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *FriendItem)
    {
        if (FriendItem->objectName().isEmpty())
            FriendItem->setObjectName(QString::fromUtf8("FriendItem"));
        FriendItem->resize(350, 65);
        widget = new QWidget(FriendItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 351, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(48, 48));
        widget1->setMaximumSize(QSize(48, 48));
        icon = new QLabel(widget1);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(0, 0, 48, 48));
        icon->setMinimumSize(QSize(48, 48));
        icon->setMaximumSize(QSize(48, 48));
        icon->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"		background-color: darkgray;\n"
"}"));
        phone = new QLabel(widget1);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(20, 20, 25, 25));
        phone->setMinimumSize(QSize(25, 25));
        phone->setMaximumSize(QSize(25, 25));
        phone->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"		background-color: gray;\n"
"}"));

        horizontalLayout->addWidget(widget1);

        name = new QLabel(widget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"		color: darkgray;\n"
"		font-size: 20px;\n"
"}"));

        horizontalLayout->addWidget(name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(FriendItem);

        QMetaObject::connectSlotsByName(FriendItem);
    } // setupUi

    void retranslateUi(QWidget *FriendItem)
    {
        FriendItem->setWindowTitle(QApplication::translate("FriendItem", "Form", nullptr));
        icon->setText(QString());
        phone->setText(QString());
        name->setText(QApplication::translate("FriendItem", "Leo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FriendItem: public Ui_FriendItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDITEM_H
