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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 801, 481));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget);
        QFont font;
        font.setPointSize(12);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(150, 1000));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setStyleSheet(QString::fromUtf8("QListView\n"
"{\n"
"		background-color:gray;\n"
"		border: none;\n"
"}\n"
"\n"
"QListView::item\n"
"{\n"
"		height: 50px;\n"
"}\n"
"\n"
"QListView::item:selected\n"
"{\n"
"		background-color: white;\n"
"		color: black;\n"
"}\n"
""));

        horizontalLayout->addWidget(listWidget);

        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color: white;\n"
"}\n"
"\n"
"QTabWidget\n"
"{\n"
"		border: none;\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"		width: 0px;\n"
"		height: 0px;\n"
"}"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color: blue;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color: red;\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Widget", "Sign in", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Widget", "Status", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Widget", "Dialog", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "page 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "Page3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
