#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "mywidget.h"


class MyWidget;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QPushButton * pushButton;
    MyWidget * myWidget;

};
#endif // WIDGET_H
