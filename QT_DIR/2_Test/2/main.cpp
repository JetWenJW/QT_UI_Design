#include "mywindow.h"

#include <QApplication>

int main(int argc, char *argv[])    /* argc is numerous of argument, argv is parameter */
{
    /* QApplication Manage QT APP Foucus on QWigetAPP */
    /* QGuiApplication Manage QT APP Foucus on Non-QWigetAPP */
    /* QCoreApplication Manage QT APP Foucus on Non-GUI APP */
    QApplication a(argc, argv);
    /* Mywindow is our defined Window */
    MyWindow w;
    /* show is show the window what we was created */
    w.show();
    /* Return a QEvent Loop Event (WFE) Wait  for input via keyboard/mouse */
    return a.exec();
}
