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
#include"change_group_name.h"
#include"change_password.h"
main_page::main_page(QMap<QString,QString> *user_pass,QMap<QString, QString>::iterator current_user,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_page),user_pass_ptr(user_pass),user_iterator(current_user)
{
    ui->setupUi(this);
    group_pointer= new QList<group>;
    list_pointer=new QList<products>;
    my_basket=new QList<products>;
    default_view_tab1();
    default_view_tab2();
    default_view_tab3();
    ui->comosearchtab1->addItem("Start with");
    ui->comosearchtab1->addItem("Contains");
    ui->combo_search_by_tab1->addItem("Products");
    ui->combo_search_by_tab1->addItem("Consumer");
    ui->combo_search_by_tab1->addItem("Type");
    ui->combo_search_by_tab1->addItem("Number");
    ui->combo_search_by_tab1->addItem("Price");
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
            addroot((*list_pointer)[i].get_name(),list_pointer,i,"$", ui->tree);
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

void main_page::default_view_tab3(){
    // get username of current user to make it's uniqe  basket file
    QString current_username=user_iterator.key()+".txt";
    QFile file(current_username);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
       // QMessageBox::warning(this,"title","File not opened!");
    }
    else if(file.size()!=0)
    {
        products my_basket_list;

        QTextStream in(&file);
        int i=1;
           while (!in.atEnd())
           {
              QString line = in.readLine();
              switch(i)
              {
              case 1:
                  my_basket_list.set_name(line);
                  i++;
                  break;
              case 2:
                  my_basket_list.set_consumer(line);
                  i++;
                  break;
              case 3:
                  my_basket_list.set_type(line);
                  i++;
                  break;
              case 4:
                  my_basket_list.set_number(line.toInt());
                  i++;
                  break;
              case 5:
                  my_basket_list.set_price(line.toDouble());
                  my_basket->append(my_basket_list);
                  i=1;
                  break;
              }
           }
           ui->basket_tree->setColumnCount(4);
           ui->basket_tree->setHeaderLabels(QStringList() <<"Consumer" << "Type" <<"Number of purchase"<<"price");
           for(int i=0;i<my_basket->size();i++)
            addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
           file.close();
    }
}

void main_page::save_my_basket_file()
{
    QString current_username=user_iterator.key()+".txt";
    QFile file(current_username);
    if(!file.open(QIODevice::WriteOnly |QIODevice::Text))
    {
        QMessageBox::warning(this,"title","File not opened");
    }
    else
    {
        QTextStream out(&file);
        for(int i=0;i<my_basket->size();i++)
        {
            out<<(*my_basket)[i].get_name()+"\n";
            out<<(*my_basket)[i].get_consumer()+"\n";
            out<<(*my_basket)[i].get_type()+"\n";
            out<<QString::number((*my_basket)[i].get_number())+"\n";
            out<<QString::number((*my_basket)[i].get_price())+"\n";
        }
        file.close();
    }
}

void main_page::save_groups_file()
{
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
                    out<<list[j].get_name()+"\n";
                    out<<list[j].get_consumer()+"\n";
                    out<<list[j].get_type()+"\n";
                    out<<QString::number(list[j].get_number())+"\n";
                    out<<QString::number(list[j].get_price())+"\n";
                }
            }
        }
        group_file.close();
    }
}

void main_page::save_userpass_file()
{
    QFile user_pass_file("user_pass.txt");
    if(!user_pass_file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    else
    {
         QTextStream out(&user_pass_file);
        for(auto it=(*user_pass_ptr).begin();it!=(*user_pass_ptr).end();it++)
        {
            out<<"Username :"+ it.key()+"\n";
            out<<"Password :"+ it.value()+"\n";
        }
        user_pass_file.close();
    }
}

void main_page::save_main_products_list_file()
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
}

void main_page::showchanges_tab3()
{
    ui->basket_tree->clear();
    ui->basket_tree->setColumnCount(4);
    ui->basket_tree->setHeaderLabels(QStringList() <<"Product/Consumer" << "Type" <<"Number of purchase"<<"price");
    for(int i=0;i<my_basket->size();i++)
    {
        addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
    }
}

void main_page::showchanges()
{
    ui->tree->clear();
    ui->tree->setColumnCount(4);
    ui->tree->setHeaderLabels(QStringList() <<"Product/Consumer" << "Type" <<"Number"<<"price");
   for(int i=0;i<list_pointer->size();i++)
   {
       addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
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

void main_page::addroot(QString name,QList<products> * list_pointer,int index,QString mark,QTreeWidget * tab)
{
    QTreeWidgetItem * itm=new QTreeWidgetItem(tab);
    itm->setText(0, name);
    addchid(itm,(*list_pointer)[index].get_consumer(),(*list_pointer)[index].get_type(),(*list_pointer)[index].get_number(),(*list_pointer)[index].get_price(),mark);
}

void main_page::addchid(QTreeWidgetItem * parent ,QString consumer,QString type ,int number,double price,QString mark)
{
    QTreeWidgetItem * itm=new QTreeWidgetItem();
    itm->setText(0,consumer);
    itm->setText(1,type);
    if(mark=="X")
    {
        itm->setText(2,mark+QString::number(number));
    }
    else
    {
        itm->setText(2, QString::number(number));
    }
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
      addchid(itm,pro.get_consumer(),pro.get_type(),pro.get_number(),pro.get_price(),"$");
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
            save_main_products_list_file();
            //save group list
            save_groups_file();
            //save my basket
            save_my_basket_file();
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
        if(ui->comosearchtab1->currentText()=="Contains")
        {
            for(int i=0;i<list_pointer->size();i++)
            {
                if((*list_pointer)[i].get_name().contains(search) && ui->combo_search_by_tab1->currentText()=="Products")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
               else if((*list_pointer)[i].get_consumer().contains(search) && ui->combo_search_by_tab1->currentText()=="Consumer")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
               else if((*list_pointer)[i].get_type().contains(search) && ui->combo_search_by_tab1->currentText()=="Type")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
               else if(QString::number((*list_pointer)[i].get_number()).contains(search) && ui->combo_search_by_tab1->currentText()=="Number")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
               else if(QString::number((*list_pointer)[i].get_price()).contains(search) && ui->combo_search_by_tab1->currentText()=="Price")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
            }
        }
        else {
            for(int i=0;i<list_pointer->size();i++)
            {
                if((*list_pointer)[i].get_name().left(search.size())==search && ui->combo_search_by_tab1->currentText()=="Products")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
                else if((*list_pointer)[i].get_consumer().left(search.size())==search && ui->combo_search_by_tab1->currentText()=="Consumer")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
                else if((*list_pointer)[i].get_type().left(search.size())==search && ui->combo_search_by_tab1->currentText()=="Type")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
                else if(QString::number((*list_pointer)[i].get_number()).left(search.size())==search && ui->combo_search_by_tab1->currentText()=="Number")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
                else if(QString::number((*list_pointer)[i].get_price()).left(search.size())==search && ui->combo_search_by_tab1->currentText()=="Price")
                {
                    addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
                }
            }
        }
    }
    else
    {
        QMessageBox::information(this,"title","Enter something to search!");
    }
}

bool main_page::equal_products(products item1,products item2, bool compare_numbers,bool compare_price)
{
    if(item1.get_name()!=item2.get_name())
        return false;
    if(item1.get_consumer()!=item2.get_consumer())
        return false;
    if(item1.get_type()!=item2.get_type())
        return false;
    if(compare_numbers)
    {
        if(item1.get_number()!=item2.get_number())
            return false;
    }
    if(compare_price)
    {
        if(item1.get_price()!=item2.get_price())
            return false;
    }
    return true;
}

void main_page::on_delete_2_clicked()
{
    int i=ui->tree->currentIndex().row();
    if(ui->tree->currentItem()->childCount()==0)
    {
        ui->tree->setCurrentItem(ui->tree->currentItem()->parent());
        i=ui->tree->currentIndex().row();

    }
    // we will also remove that item from the group
    for(int k=0;k<group_pointer->size();k++)
    {
        QList<products> groups_includes=(*group_pointer)[k].get_pro_group();
        for(int j=0;j<groups_includes.size();j++)
        {
            if(equal_products(groups_includes[j],(*list_pointer)[i],true,true))
            {
               (*group_pointer)[k].get_pro_group().erase((*group_pointer)[k].get_pro_group().begin()+j);
            }
        }
    }
    //we should also delete that item from my_basket list if exists
    for(int k=0;k<my_basket->size();k++)
    {
        if(equal_products((*my_basket)[k],(*list_pointer)[i],false,false))
        {
            (*my_basket).erase(my_basket->begin()+k);
            showchanges_tab3();
            break;
        }
    }
    //delete from product's list
    (*list_pointer).erase(list_pointer->begin()+i);
     ui->tree->removeItemWidget(ui->tree->currentItem(),0);
     showchanges();
     showchanges_tab2();

}

void main_page::on_edit_clicked()
{
    //when clicked on the name of products
    if(ui->tree->currentItem()->childCount()==0)
    {
       ui->tree->setCurrentItem(ui->tree->currentItem()->parent());
    }
    int i=ui->tree->currentIndex().row();
    editpage new_page(list_pointer,i,group_pointer);
      new_page.setModal(true);
      new_page.exec();
      showchanges();
      showchanges_tab2();
}

void main_page::on_addtogroup_clicked()
{
    if(ui->tree->currentItem()->childCount()==0)
    {
      ui->tree->setCurrentItem(ui->tree->currentItem()->parent());
    }
    int i=ui->tree->currentIndex().row();
    Add_group  new_page(group_pointer,(*list_pointer)[i]);
    new_page.setModal(true);
    new_page.exec();
    showchanges_tab2();
}

void main_page::on_pushButton_2_clicked()
{
    showchanges_tab2();
}

void main_page::on_deleteforgroups_clicked()
{
    int i=ui->grouptree->currentIndex().row();
    //check if you are clicking on the group name we will remove group
    if(ui->grouptree->currentItem()->parent()==nullptr)
    {
        (*group_pointer).erase(group_pointer->begin()+i);
        ui->grouptree->removeItemWidget(ui->grouptree->currentItem(),0);
        showchanges_tab2();
    }
    //in case you clicked on products we will remove product
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

void main_page::on_change_group_name_clicked()
{
    while(ui->grouptree->currentItem()->parent()!=0)
    {
        ui->grouptree->setCurrentItem(ui->grouptree->currentItem()->parent());
    }
    int i=ui->grouptree->currentIndex().row();
    change_group_name new_page(group_pointer,i);
    new_page.setModal(true);
    new_page.exec();
    showchanges_tab2();
}

void main_page::on_actionchange_user_pass_triggered()
{
    change_password new_page(user_pass_ptr);
    new_page.setModal(true);
    new_page.exec();
    // save user_pass list
     save_userpass_file();
}

void main_page::on_add_mybasket_clicked()
{
    if(ui->tree->currentItem()->childCount()==0)
    {
        ui->tree->setCurrentItem(ui->tree->currentItem()->parent());
    }
    int i=ui->tree->currentIndex().row();
    products added_to_my_basket =(*list_pointer)[i];
    bool found=false;
    for(int j=0;j<my_basket->size();j++)
    {
        if(equal_products(added_to_my_basket,(*my_basket)[j],false,false))
        {
                (*my_basket)[j].set_number(((*my_basket)[j].get_number())+1);
                (*my_basket)[j].set_price( (*my_basket)[j].get_price()+added_to_my_basket.get_price());
                found=true;
                break;
        }
    }
    if(!found)
    {
         added_to_my_basket.set_number(1);
         my_basket->append(added_to_my_basket);
    }
    showchanges_tab3();
}

