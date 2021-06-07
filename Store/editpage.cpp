#include "editpage.h"
#include "ui_editpage.h"
#include<QList>
#include"products.h"
editpage::editpage(QList<products>* list,int i,QList<group> * group ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editpage),list_pointer(list),index(i),group_pointer(group)
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

bool editpage::equal(products item1,products item2)
{
    if(item1.get_name()!=item2.get_name())
        return false;
    if(item1.get_consumer()!=item2.get_consumer())
        return false;
    if(item1.get_type()!=item2.get_type())
        return false;
    if(item1.get_number()!=item2.get_number())
        return false;
    if(item1.get_price()!=item2.get_price())
        return false;
    return true;
}
void editpage::on_editbutton_clicked()
{
    products item;
    item.set_name(ui->name->text());
    item.set_consumer(ui->lineEditconsmer->text());
    item.set_type(ui->lineEdittype->text());
    item.set_number((ui->lineEditnumber->text()).toInt());
    item.set_price(ui->lineEditprice->text().toDouble());
    //enable changes also to groups
    for(int i=0;i<group_pointer->size();i++)
    {
        QList<products> groups_includes=(*group_pointer)[i].get_pro_group();
        for(int j=0;j<groups_includes.size();j++)
        {
            if(equal(groups_includes[j],(*list_pointer)[index]))
            {
                (*group_pointer)[i].get_pro_group()[j]=item;
            }
        }
    }
    (*list_pointer)[index]=item;
    this->close();
}

