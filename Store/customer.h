#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<QString>
#include<iostream>
#include<QMessageBox>
using namespace std;
class Customer
{
private:
    QString username;
    QString password;
public:
    Customer();
    QString get_name();
    void set_username(QString user);
    void set_password(QString pass);
    bool valid_username(QString new_username);
    void change_user_pass(QString new_user_pass,QString old_username);
    void add_to_my_basket();
    void groups();
};

#endif // CUSTOMER_H
