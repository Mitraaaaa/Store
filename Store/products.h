#ifndef PRODUCTS_H
#define PRODUCTS_H

#include<QString>
class products
{
private:
    QString name;
    QString consumer;
    QString type;
   int number;
public:
    products();
    QString get_name();
    QString get_consumer();
    QString get_type();
    int get_number();
    void set_name(QString name);
    void set_consumer(QString consumer);
    void set_type(QString type);
    void set_number(int number);
};

#endif // PRODUCTS_H
