#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    /*
     * This is self_define SLOT,
     * We not only need to Defeine it
     * but also need to Declare it
     */
    void comeBackToClass();

};

#endif // STUDENT_H
