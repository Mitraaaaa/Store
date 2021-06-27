#include "products.h"
#include<QString>
products::products()
{

}

QString products::get_name()
{
    return name;
}

QString products::get_consumer()
{
    return consumer;
}

QString products::get_type()
{
    return type;
}

double products::get_price()
{
    return price;
}

int products::get_number()
{
    return number;
}

QDate products::get_date()
{
    return exdate;
}

void products::set_name(QString name)
{
    this->name=name;
}

void products::set_consumer(QString consumer)
{
    this->consumer=consumer;
}

void products::set_type(QString type)
{
    this->type=type;
}

void products::set_number(int number)
{
    this->number=number;
}

void products::set_price(double price)
{
    this->price=price;
}

void products::set_exdate(QDate exdate)
{
    this->exdate=exdate;
}
