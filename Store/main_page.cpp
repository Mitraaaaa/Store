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
#include"group.h"
#include"add_group.h"
main_page::main_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_page)
{
    ui->setupUi(this);
    group_pointer= new QList<group>;
    list_pointer=new QList<products>;
    default_view_tab1();
    default_view_tab2();

}

void main_page::default_view_tab1()
{
    products pro_list;
    //list file in tab 1(search)
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

void main_page::default_view_tab2()
{
//    //group file in tab2
    group group_list;
    QList<products> pro_group_list ;
    products pro_list;
    QFile group_file ("group.txt");
    if(group_file.open(QIODevice::ReadOnly | QIODevice::Text) && group_file.size()!=0)
       {
             QTextStream in(&group_file);
             int i=1;
             bool first_line=true;
                while (!in.atEnd())
                {
                   QString line = in.readLine();
                   if(line.contains("Group : ") && !first_line)
                   {
                       //the group contains items puls group name
                       if(pro_group_list.size()!=0)
                       {
                           //add previous group to the main_group
                           group_list.set_pro_group(pro_group_list);
                           group_pointer->append(group_list);
                           //clear list
                           pro_group_list.clear();
                       }
                       //the group does not contain products it's only the name of the group
                       else
                       {
                           group group_contain_only_name;
                           group_contain_only_name.set_group_name(group_list.get_group_name());
                           group_pointer->append(group_contain_only_name);
                       }
                       //set for next name group
                       QString name=line;
                       QStringList name_split = name.split(": ");
                       group_list.set_group_name(name_split[1]);
                   }
                   else if(line.contains("Group : ") && first_line)
                   {
                       QString name=line;
                       QStringList name_split = name.split(": ");
                       group_list.set_group_name(name_split[1]);
                          first_line=false;
                   }
                   else
                   {
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
                               pro_group_list.append(pro_list);
                               i=1;
                               break;
                           }
                   }
                   if(in.atEnd())
                   {
                       if(pro_group_list.size()!=0)
                       {
                           group_list.set_pro_group(pro_group_list);
                           group_pointer->append(group_list);
                       }
                       else
                       {
                           group group_contain_only_name;
                           group_contain_only_name.set_group_name(group_list.get_group_name());
                           group_pointer->append(group_contain_only_name);
                       }
                   }
                }

                ui->grouptree->setColumnCount(5);
                ui->grouptree->setHeaderLabels(QStringList()<<"Group/Product/Consumer"<< "Type" <<"Number"<<"price");
                for(int i=0;i<group_pointer->size();i++)
                {
                    addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                }
       }
    group_file.close();
}

void main_page::showchanges()
{
    ui->tree->clear();
      ui->tree->setColumnCount(4);
      ui->tree->setHeaderLabels(QStringList() <<"Product/Consumer" << "Type" <<"Number"<<"price");
      this->ui->tree->clear();
   for(int i=0;i<list_pointer->size();i++)
   {
       addroot((*list_pointer)[i].get_name(),list_pointer,i);
   }
}

void main_page::showchanges_tab2()
{
    ui->grouptree->clear();
    ui->grouptree->setColumnCount(4);
    ui->grouptree->setHeaderLabels(QStringList()<<"Group/Product/Consumer"<< "Type" <<"Number"<<"price");
    for(int i=0;i<group_pointer->size();i++)
    {
        addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
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

void main_page::addroot_group(QString group_name,QList<group> * group_pointer,int index)
{
    QTreeWidgetItem * itm=new QTreeWidgetItem(ui->grouptree);
    itm->setText(0, group_name);
    addchid_group(itm,(*group_pointer)[index]);
}

void main_page::addchid_group(QTreeWidgetItem * pre_parent ,group each_group)
{
   for(int i=0;i<each_group.get_pro_group().size();i++)
   {
      QTreeWidgetItem * itm=new QTreeWidgetItem();
      itm->setText(0,each_group.get_pro_group()[i].get_name());
      products pro=each_group.get_pro_group()[i];
      addchid(itm,pro.get_consumer(),pro.get_type(),pro.get_number(),pro.get_price());
      pre_parent->addChild(itm);
   }
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
            //save product list
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
            //save group list
            QFile group_file("group.txt");
            if(!group_file.open(QFile::WriteOnly | QFile::Text ))
            {
                return;
            }
            else
            {
                QTextStream out(&group_file);
                for(int i=0;i<group_pointer->size();i++)
                {
                    out<<"Group : "+(*group_pointer)[i].get_group_name()+"\n";
                    QList<products> list=(*group_pointer)[i].get_pro_group();
                    if(!list.empty())
                    {
                        for(int j=0;j<list.size();j++)
                        {
                            out<<list[i].get_name()+"\n";
                            out<<list[i].get_consumer()+"\n";
                            out<<list[i].get_type()+"\n";
                            out<<QString::number(list[i].get_number())+"\n";
                            out<<QString::number(list[i].get_price())+"\n";
                        }
                    }
                }
                group_file.close();
            }

            this->close();
        }
          break;
      case QMessageBox::Discard:
         this->close();
          // Don't Save was clicked
          break;
      default:
          // should never be reached
          break;
    }

}

void main_page::on_searchbutton_clicked()
{
    //search in first tab named search
    ui->tree->clear();
    QString search=this->ui->serchzone->text();
    if(!search.isEmpty())
    {
        for(int i=0;i<list_pointer->size();i++)
        {
            if((*list_pointer)[i].get_name().contains(search))
            {
                addroot((*list_pointer)[i].get_name(),list_pointer,i);
            }
            if((*list_pointer)[i].get_consumer().contains(search))
            {
                addroot((*list_pointer)[i].get_name(),list_pointer,i);
            }
            if((*list_pointer)[i].get_type().contains(search))
            {
                addroot((*list_pointer)[i].get_name(),list_pointer,i);
            }
            if(QString::number((*list_pointer)[i].get_number()).contains(search))
            {
               addroot((*list_pointer)[i].get_name(),list_pointer,i);
            }
            if(QString::number((*list_pointer)[i].get_price()).contains(search))
            {
                addroot((*list_pointer)[i].get_name(),list_pointer,i);
            }
        }
    }
    else
    {
        QMessageBox::information(this,"title","Enter something to search!");
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
         QMessageBox::information(this,"title","In order to EDIT an item click on it's name not details");
    }
}

void main_page::on_addtogroup_clicked()
{
    int i=ui->tree->currentIndex().row();
    if(ui->tree->currentItem()->childCount()!=0)
    {
        Add_group  new_page(group_pointer,(*list_pointer)[i]);
        new_page.setModal(true);
        new_page.exec();
        showchanges_tab2();
    }
    else
    {
        for(int j=0;j<4;j++)
        ui->tree->currentItem()->setBackground(j,Qt::red);
        QMessageBox::information(this,"title","In order to ADD an item click on it's name not details");
    }
}

void main_page::on_pushButton_2_clicked()
{
    showchanges_tab2();
}

void main_page::on_deleteforgroups_clicked()
{
    int i=ui->grouptree->currentIndex().row();
    //check if you are clicking on the group name
    if(ui->grouptree->currentItem()->parent()==nullptr)
    {
        (*group_pointer).erase(group_pointer->begin()+i);
        ui->grouptree->removeItemWidget(ui->grouptree->currentItem(),0);
        showchanges_tab2();
    }
    //in case you clicked on products
   else
    {
        if(ui->grouptree->currentItem()->childCount()!=0)
        {
            //one of the itm's of group. it's a product so we already have the row of product in it's own group =>i
            //all we need is it's group's row among all groups => j
            ui->grouptree->currentItem()->parent()->removeChild((ui->grouptree->currentItem()));
            if(ui->grouptree->currentItem()->childCount()!=0)
            {
                /*this will be done bc if you delete a product you will be on the next product after deletion
                (your current item will be next if exist)
                therefore i put the curser to the paretn to undrestand it's row */
                ui->grouptree->setCurrentItem(ui->grouptree->currentItem()->parent());
            }
            int j=ui->grouptree->currentIndex().row();
            // i got an error here bc my get_pro_group was a copy not the refrence so i returned & and fix the problem :)))
            (*group_pointer)[j].get_pro_group().erase((*group_pointer)[j].get_pro_group().begin()+i);
             showchanges_tab2();
        }
        else
        {
            //clicked on the details of a product so we have to find the product's row in the group =>i
            //and the group's row among the group =>j
            ui->grouptree->currentItem()->parent()->removeChild(ui->grouptree->currentItem());
            i=ui->grouptree->currentIndex().row();
            ui->grouptree->currentItem()->parent()->removeChild(ui->grouptree->currentItem());
            int j=ui->grouptree->currentIndex().row();
            (*group_pointer)[j].get_pro_group().erase((*group_pointer)[j].get_pro_group().begin()+i);
             showchanges_tab2();

        }
    }
}

