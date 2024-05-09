#ifndef NEWFILEDIALOG_H
#define NEWFILEDIALOG_H

#include <QDialog>

namespace Ui {
class NewFileDialog;
}

class NewFileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewFileDialog(QWidget *parent = nullptr);
    ~NewFileDialog();
    QString getTextEditContent();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_released();

    void on_pushButton_clicked();

private:
    Ui::NewFileDialog *ui;
};

#endif // NEWFILEDIALOG_H
