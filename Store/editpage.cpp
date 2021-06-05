#include "editpage.h"
#include "ui_editpage.h"
#include<QList>
#include"products.h"
editpage::editpage(QList<products>* list,int i,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editpage),list_pointer(list),index(i)
{
    ui->setupUi(this);
    ui->name->setText((*list_pointer)[index].get_name());
    ui->lineEditconsmer->setText((*list_pointer)[index].get_consumer());
    ui->lineEdittype->setText((*list_pointer)[index].get_type());
    ui->lineEditnumber->setText(QString::number((*list_pointer)[index].get_number()));
    ui->lineEditprice->setText(QString::number((*list_pointer)[index].get_price()));
}

editpage::~editpage()
{
    delete ui;
}

void editpage::on_editbutton_clicked()
{
    products item;
    item.set_name(ui->name->text());
    item.set_consumer(ui->lineEditconsmer->text());
    item.set_type(ui->lineEdittype->text());
    item.set_number((ui->lineEditnumber->text()).toInt());
    item.set_price(ui->lineEditprice->text().toDouble());
    (*list_pointer)[index]=item;
    this->close();
}

