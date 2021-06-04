#include "savechanges.h"
#include "ui_savechanges.h"
#include<QFile>
#include<QTextStream>
savechanges::savechanges(QList<products> * list,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::savechanges),list_save_pro(list)
{
    ui->setupUi(this);
}

savechanges::~savechanges()
{
    delete ui;
}



void savechanges::on_save_accepted()
{
    QFile file("list.txt");

    if(!file.open(QFile::WriteOnly | QFile::Text ))
    {
        return;
    }
    else{
          QTextStream out(&file);
          for(int i=0;i<list_save_pro->size();i++)
          {
              out<<(*list_save_pro)[i].get_name()+"\n";
              out<<(*list_save_pro)[i].get_consumer()+"\n";
              out<<(*list_save_pro)[i].get_type()+"\n";
              out<<QString::number((*list_save_pro)[i].get_number())+"\n";
          }
          file.close();
    }
    this->close();
}

