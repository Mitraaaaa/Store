#include "add_group.h"
#include "ui_add_group.h"
#include "creat_new_group.h"
#include"group.h"
#include<QList>
#include<QTreeWidgetItem>
Add_group::Add_group(QList<group> * group,products chosen,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_group),group_pointer(group),chosen_products(chosen)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    if(group_pointer->size()!=0)
    {
        for(int i=0;i<group_pointer->size();i++)
        {
            ui->comboBox->addItem((*group_pointer)[i].get_group_name());
        }
    }
}

Add_group::~Add_group()
{
    delete ui;
}

void Add_group::on_addtogroup_clicked()
{
    if(group_pointer->size()!=0)
    {
        for(int i=0;i<group_pointer->size();i++)
        {
            if( ui->comboBox->currentText()==(*group_pointer)[i].get_group_name())
            {
                (*group_pointer)[i].add_to_group(chosen_products);
                break;
            }
        }
    }
    this->close();
}

void Add_group::showchanges_comobox()
{
    for(int i=0;i<group_pointer->size();i++)
    {
        ui->comboBox->addItem((*group_pointer)[i].get_group_name());
    }
}

void Add_group::on_creatnewgroup_clicked()
{
    creat_new_group new_page(group_pointer,chosen_products);
    new_page.setModal(true);
    new_page.exec();
    showchanges_comobox();
    this->close();
}

