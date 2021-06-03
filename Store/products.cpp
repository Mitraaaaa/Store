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

int products::get_number()
{
    return number;
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
