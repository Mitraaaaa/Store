#include "change_password.h"
#include "ui_change_password.h"

change_password::change_password( QMap<QString,QString> *user_pass,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_password),user_pass_ptr(user_pass)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
}

change_password::~change_password()
{
    delete ui;
}

void change_password::on_changepassbutton_clicked()
{
    auto it=user_pass_ptr->find(ui->lineEditcurrentuser->text());
   if(user_pass_ptr->find(ui->lineEditcurrentuser->text())!=user_pass_ptr->end())
   {
       it.value()=ui->lineEditnew_pass->text();
   }
   this->close();
}

