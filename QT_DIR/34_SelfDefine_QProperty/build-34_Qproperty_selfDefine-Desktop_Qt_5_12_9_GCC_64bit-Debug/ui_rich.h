/********************************************************************************
** Form generated from reading UI file 'rich.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RICH_H
#define UI_RICH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rich
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *Moneylabel;

    void setupUi(QWidget *Rich)
    {
        if (Rich->objectName().isEmpty())
            Rich->setObjectName(QString::fromUtf8("Rich"));
        Rich->resize(400, 80);
        horizontalLayout = new QHBoxLayout(Rich);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Moneylabel = new QLabel(Rich);
        Moneylabel->setObjectName(QString::fromUtf8("Moneylabel"));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        Moneylabel->setFont(font);
        Moneylabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Moneylabel);


        retranslateUi(Rich);

        QMetaObject::connectSlotsByName(Rich);
    } // setupUi

    void retranslateUi(QWidget *Rich)
    {
        Rich->setWindowTitle(QApplication::translate("Rich", "Form", nullptr));
        Moneylabel->setText(QApplication::translate("Rich", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rich: public Ui_Rich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RICH_H
