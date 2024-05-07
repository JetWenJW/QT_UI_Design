#include "widget.h"

#include <QApplication>
#include <QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /* Open afile that contain all of the background setting */
    QFile file(":/style.qss");      /* Open style.qss */
    if(file.exists())
    {
        file.open(QFile::ReadOnly);/* Open File And set ReadOnly */
        QString styleSheet = QLatin1String(file.readAll()); /* Saving Read Result as String Format */
        qApp->setStyleSheet(styleSheet);
        file.close();
    }

    Widget w;
    w.show();
    return a.exec();
}
