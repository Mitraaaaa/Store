#include "add_pro.h"
#include "ui_add_pro.h"
#include "products.h"
#include<QMessageBox>
add_pro::add_pro(QList<products> * list,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_pro),list_add_pro(list)

{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
}

add_pro::~add_pro()
{
    delete ui;
}


void add_pro::on_additem_clicked()
{
    bool valid_add=true;
    bool valid_date=true;
    products item;
        if(ui->name->text().isEmpty())
        {
            (*(ui->name)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
        else
        {
             item.set_name(ui->name->text());
        }

        if(ui->consumer->text().isEmpty())
        {
             (*(ui->consumer)).setStyleSheet(" background-color: #ffffcc");
           valid_add=false;
        }
        else item.set_consumer(ui->consumer->text());

        if(ui->type->text().isEmpty())
        {
             (*(ui->type)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
        else item.set_type(ui->type->text());

        if((ui->number->text()).isEmpty())
        {
             (*(ui->number)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
        else item.set_number((ui->number->text()).toInt());

        if(ui->price->text().isEmpty())
        {
             (*(ui->price)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
        else item.set_price(ui->price->text().toDouble());
        if(ui->year->text().isEmpty() || ui->month->text().isEmpty() || ui->day->text().isEmpty())
        {
            if(ui->year->text().isEmpty())
                (*(ui->year)).setStyleSheet(" background-color: #ffffcc");
            if(ui->month->text().isEmpty())
                (*(ui->month)).setStyleSheet(" background-color: #ffffcc");
            if(ui->day->text().isEmpty())
                (*(ui->day)).setStyleSheet(" background-color: #ffffcc");
            valid_add=false;
        }
        else
        {
            int year=ui->year->text().toInt();
            int month= ui->month->text().toInt();
            int day=ui->day->text().toInt();
            QDate d(year,month,day);
            QDate current=QDate::currentDate();
            if(current.daysTo(d)<=-1)
            {
                QMessageBox::warning(this,"title","This product is already expired!");
                valid_add=false;
                valid_date=false;
            }
            item.set_exdate(d);
        }

   if(valid_add)
   {
       list_add_pro->append(item);
       this->close();
   }
   else if(valid_date)
   {
     QMessageBox::warning(this,"title","Please fill all properties");
   }
}

