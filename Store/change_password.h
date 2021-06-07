#ifndef CHANGE_PASSWORD_H
#define CHANGE_PASSWORD_H

#include <QDialog>
#include<QMap>
#include<QString>
namespace Ui {
class change_password;
}

class change_password : public QDialog
{
    Q_OBJECT

public:
    explicit change_password( QMap<QString,QString> *user_pass,QWidget *parent = nullptr);
    ~change_password();

private slots:
    void on_changepassbutton_clicked();

private:
    Ui::change_password *ui;
    QMap<QString,QString> *user_pass_ptr;
};

#endif // CHANGE_PASSWORD_H
