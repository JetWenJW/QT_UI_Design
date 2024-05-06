#ifndef SCHOOL_H
#define SCHOOL_H

#include <QObject>

class School : public QObject
{
    Q_OBJECT
public:
    explicit School(QObject *parent = nullptr);

signals: /* QT Signal Key Word */

    /* This Function is Our self_create Signal,
     * we don't need to define it,
     * we only need to Declare it
     */
    void sendMessages();
    void sendMessages_2();

};

#endif // SCHOOL_H
