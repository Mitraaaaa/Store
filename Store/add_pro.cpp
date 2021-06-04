#include "add_pro.h"
#include "ui_add_pro.h"
#include "products.h"
add_pro::add_pro(QList<products> * list,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_pro),list_add_pro(list)

{
    ui->setupUi(this);
}

add_pro::~add_pro()
{
    delete ui;
}


void add_pro::on_additem_clicked()
{
    products item;
    item.set_name(ui->name->text());
    item.set_consumer(ui->consumer->text());
    item.set_type(ui->type->text());
    item.set_number((ui->number->text()).toInt());
    list_add_pro->append(item);
}

