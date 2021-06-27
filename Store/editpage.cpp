#include "editpage.h"
#include "ui_editpage.h"
#include<QList>
#include<QString>
#include"products.h"
#include<QMessageBox>
editpage::editpage(QList<products>* list,int i,QList<group> * group ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editpage),list_pointer(list),index(i),group_pointer(group)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());

    ui->name->setText((*list_pointer)[index].get_name());
    ui->lineEditconsmer->setText((*list_pointer)[index].get_consumer());
    ui->lineEdittype->setText((*list_pointer)[index].get_type());
    ui->lineEditnumber->setText(QString::number((*list_pointer)[index].get_number()));
    ui->lineEditprice->setText(QString::number((*list_pointer)[index].get_price()));
    QString date=(*list_pointer)[index].get_date().toString("yyyy/MM/dd");
    QStringList date_list=date.split('/');
    ui->year2->setText(date_list[0]);
    ui->month2->setText(date_list[1]);
    ui->day2->setText(date_list[2]);
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
    if(item1.get_date()!=item1.get_date())
        return false;
    return true;
}
void editpage::on_editbutton_clicked()
{
    products item;
    bool valid_add=true;
    if(!ui->name->text().isEmpty())
    item.set_name(ui->name->text());
    else
    {
        (*(ui->name)).setStyleSheet(" background-color: #ffffcc");
        valid_add=false;
    }

    if(!ui->lineEditconsmer->text().isEmpty())
    item.set_consumer(ui->lineEditconsmer->text());
    else
    {
        (*(ui->lineEditconsmer)).setStyleSheet(" background-color: #ffffcc");
        valid_add=false;
    }

    if(!ui->lineEdittype->text().isEmpty())
    item.set_type(ui->lineEdittype->text());
    else
    {
        (*(ui->lineEdittype)).setStyleSheet(" background-color: #ffffcc");
        valid_add=false;
    }

    if(!(ui->lineEditnumber->text()).isEmpty())
    item.set_number((ui->lineEditnumber->text()).toInt());
    else
    {
        (*(ui->lineEditnumber)).setStyleSheet(" background-color: #ffffcc");
        valid_add=false;
    }

    if(!ui->lineEditprice->text().isEmpty())
    item.set_price(ui->lineEditprice->text().toDouble());
    else
    {
        (*(ui->lineEditprice)).setStyleSheet(" background-color: #ffffcc");
        valid_add=false;
    }

    if(ui->year2->text().isEmpty() || ui->month2->text().isEmpty() || ui->day2->text().isEmpty())
    {
        if(ui->year2->text().isEmpty())
        {
            (*(ui->year2)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
        if(ui->month2->text().isEmpty())
        {
            (*(ui->month2)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
        if(ui->day2->text().isEmpty())
        {
            (*(ui->day2)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
    }
    else
    {
        QString exd=(ui->year2->text()+'/'+ui->month2->text()+'/'+ui->day2->text());
        QStringList date_list=exd.split('/');
        QDate d(date_list[0].toInt(),date_list[1].toInt(),date_list[2].toInt());
        item.set_exdate(d);
    }
    //enable changes also to groups
    if(valid_add)
    {
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
    else
    {
      QMessageBox::warning(this,"title","Please fill all properties");
    }
}

