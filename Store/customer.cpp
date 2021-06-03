#include "customer.h"
#include<QString>
#include<iostream>
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
using namespace std;
Customer::Customer()
{

}

void Customer::set_username(QString user)
{
    this->username=user;
}

void Customer::set_password(QString pass)
{
    this->password=pass;
}

QString Customer:: get_name()
{
    return username;
}

bool Customer::valid_username(QString new_username)
{
    QFile file("user_pass.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in (&file);
    QString line;
    do {
        line = in.readLine();
        if (line.contains(new_username, Qt::CaseSensitive)) {
            file.close();
           return false;
        }
    } while (!line.isNull());
    file.close();
    return true;

}

void Customer:: change_user_pass(QString old_user_pass,QString new_user_pass)
{
    QFile file("user_pass.txt");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QString dataText = file.readAll();

            QRegularExpression re(old_user_pass);
            QString replacementText(new_user_pass);


            dataText.replace(re, replacementText);
       file.close();
       file.open(QIODevice::WriteOnly | QIODevice::Text);
             QTextStream out(&file);
             out << dataText;
       file.close();


}

void Customer::add_to_my_basket()
{

}

void Customer::groups()
{

}
