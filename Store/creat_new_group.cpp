#include "creat_new_group.h"
#include "ui_creat_new_group.h"
#include<QMessageBox>
creat_new_group::creat_new_group(QList<group>* groups,products pro ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creat_new_group),group_pointer(groups),chosen_pro(pro)
{
    ui->setupUi(this);
}

creat_new_group::~creat_new_group()
{
    delete ui;
}

void creat_new_group::on_addnewgroupbutton_clicked()
{
    group new_group;
    if(!ui->lineEditnewgroupname->text().isEmpty())
    {
        new_group.set_group_name(ui->lineEditnewgroupname->text());
        new_group.add_to_group(chosen_pro);
        group_pointer->append(new_group);
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"title","You can't leave group's name blank!");
        (*(ui->lineEditnewgroupname)).setStyleSheet(" background-color :#ffffcc;");
    }
}

