#ifndef PRODUCTS_H
#define PRODUCTS_H

#include<QString>
#include<QDate>
class products
{
private:
    QString name;
    QString consumer;
    QString type;
    double price;
   int number;
   QDate exdate;
public:
    products();
    QString get_name();
    QString get_consumer();
    QString get_type();
    double get_price();
    int get_number();
    QDate get_date();
    void set_name(QString name);
    void set_consumer(QString consumer);
    void set_type(QString type);
    void set_number(int number);
    void set_price(double price);
    void set_exdate(QDate exdate);
};

#endif // PRODUCTS_H
