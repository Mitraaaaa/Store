#include "main_page.h"
#include "ui_main_page.h"
#include<QMessageBox>
#include<QFile>
#include<QList>
#include<QString>
#include<QMessageBox>
#include<QString>
#include<QTextStream>
#include<QTreeWidgetItem>
#include "products.h"
#include "add_pro.h"
#include "editpage.h"
main_page::main_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_page)
{
    ui->setupUi(this);
    list_pointer=new QList<products>;
    products pro_list;
    QFile file("list.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
       // QMessageBox::warning(this,"title","File not opened!");
    }
    //set the list if it's not empty
    else if(file.size()!=0)
    {
        QTextStream in(&file);
        int i=1;
           while (!in.atEnd())
           {
              QString line = in.readLine();
              switch(i)
              {
              case 1:
                  pro_list.set_name(line);
                  i++;
                  break;
              case 2:
                  pro_list.set_consumer(line);
                  i++;
                  break;
              case 3:
                  pro_list.set_type(line);
                  i++;
                  break;
              case 4:
                  pro_list.set_number(line.toInt());
                  i++;
                  break;
              case 5:
                  pro_list.set_price(line.toDouble());
                  list_pointer->append(pro_list);
                  i=1;
                  break;
              }
           }
           ui->tree->setColumnCount(4);
           ui->tree->setHeaderLabels(QStringList() <<"Consumer" << "Type" <<"Number"<<"price");
           for(int i=0;i<list_pointer->size();i++)
            addroot((*list_pointer)[i].get_name(),list_pointer,i);
           file.close();
    }

}

void main_page::showchanges()
{
    ui->tree->clear();
      ui->tree->setColumnCount(4);
      ui->tree->setHeaderLabels(QStringList() <<"Consumer" << "Type" <<"Number"<<"price");
      this->ui->tree->clear();
   for(int i=0;i<list_pointer->size();i++)
   {
       addroot((*list_pointer)[i].get_name(),list_pointer,i);
   }
}

void main_page::addroot(QString name,QList<products> * list_pointer,int index)
{
    QTreeWidgetItem * itm=new QTreeWidgetItem(ui->tree);
    itm->setText(0, name);
    addchid(itm,(*list_pointer)[index].get_consumer(),(*list_pointer)[index].get_type(),(*list_pointer)[index].get_number(),(*list_pointer)[index].get_price());

}

void main_page::addchid(QTreeWidgetItem * parent ,QString consumer,QString type ,int count,double price)
{
    QTreeWidgetItem * itm=new QTreeWidgetItem();
    itm->setText(0,consumer);
    itm->setText(1,type);
    itm->setText(2, QString::number(count));
    itm->setText(3,QString::number(price)+" $");

    parent->addChild(itm);
}

main_page::~main_page()
{
    delete ui;
}

void main_page::on_addtolist_clicked()
{
    add_pro new_page(list_pointer);
    new_page.setModal(true);
    new_page.exec();
    showchanges();
}

void main_page::on_showchanges_clicked()
{
    showchanges();
}

void main_page::on_actionLog_out_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Do you want to save your changes?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard );
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    switch (ret) {
      case QMessageBox::Save:
        {
            QFile file ("list.txt");
            if(!file.open(QFile::WriteOnly | QFile::Text ))
            {
                return;
            }
            else{
                  QTextStream out(&file);
                  for(int i=0;i<list_pointer->size();i++)
                  {
                      out<<(*list_pointer)[i].get_name()+"\n";
                      out<<(*list_pointer)[i].get_consumer()+"\n";
                      out<<(*list_pointer)[i].get_type()+"\n";
                      out<<QString::number((*list_pointer)[i].get_number())+"\n";
                      out<<QString::number((*list_pointer)[i].get_price())+"\n";
                  }
                  file.close();
            }
            this->close();
        }
          break;
      case QMessageBox::Discard:
          // Don't Save was clicked
          break;
      default:
          // should never be reached
          break;
    }

}

void main_page::on_searchbutton_clicked()
{
    ui->tree->clear();
    QString search=this->ui->serchzone->text();
    for(int i=0;i<list_pointer->size();i++)
    {
        if((*list_pointer)[i].get_name().contains(search))
        {
            addroot((*list_pointer)[i].get_name(),list_pointer,i);
        }
         if((*list_pointer)[i].get_consumer().contains(search))
        {
            addroot((*list_pointer)[i].get_consumer(),list_pointer,i);
        }
         if((*list_pointer)[i].get_type().contains(search))
        {
            addroot((*list_pointer)[i].get_type(),list_pointer,i);
        }
         if(QString::number((*list_pointer)[i].get_number()).contains(search))
        {
            addroot(QString::number((*list_pointer)[i].get_number()),list_pointer,i);
        }
         if(QString::number((*list_pointer)[i].get_price()).contains(search))
        {
            addroot(QString::number((*list_pointer)[i].get_price()),list_pointer,i);
        }
    }
}

void main_page::on_delete_2_clicked()
{
     int i=ui->tree->currentIndex().row();
     //when clicked on name of prducts not details so we have row's amount
     if(ui->tree->currentIndex().column()==0 && i!=0)
     {
         (*list_pointer).erase(list_pointer->begin()+i);
      ui->tree->removeItemWidget(ui->tree->currentItem(),0);
      showchanges();

     }
     else if(ui->tree->currentIndex().column()==0 && i==0 && ui->tree->currentItem()->childCount()!=0)
     {
         //when clicked on the first item so the row and colume is zero
        delete ui->tree->takeTopLevelItem(i);
     }
    else{
         //if clicked on child of colume 0 , so the row becomes 0 too since it's a child . it's an item and not nessecery top_level_item
         ui->tree->currentItem()->parent()->removeChild((ui->tree->currentItem()));
         i=ui->tree->currentIndex().row();
         (*list_pointer).erase(list_pointer->begin()+i);
         ui->tree->removeItemWidget(ui->tree->currentItem(),0);
          showchanges();
     }

}

void main_page::on_edit_clicked()
{
     int i=ui->tree->currentIndex().row();
    //when clicked on the name of products
    if(ui->tree->currentItem()->childCount()!=0)
    {
        editpage new_page(list_pointer,i);
          new_page.setModal(true);
          new_page.exec();
          showchanges();
    }
    else {
        for(int j=0;j<4;j++)
        ui->tree->currentItem()->setBackground(j,Qt::red);
         QMessageBox::information(this,"title","In order to EDIT an item click on it's name no details");
    }

//      if(ui->tree->currentIndex().column()==0)
//      {
//          editpage new_page(list_pointer,i);
//          new_page.setModal(true);
//          new_page.exec();
//      }
//      else
//      {
//            QMessageBox::information(this,"title","In order to EDIT an item click on it's name no details");
//      }
}

