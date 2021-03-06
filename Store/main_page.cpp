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
#include<QtAlgorithms>
#include<algorithm>
#include"mainwindow.h"
main_page::main_page(QMap<QString,QString> *user_pass,QMap<QString, QString>::iterator current_user,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_page),user_pass_ptr(user_pass),user_iterator(current_user)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());

    group_pointer= new QList<group>;
    list_pointer=new QList<products>;
    my_basket=new QList<products>;
    default_view_tab1();
    default_view_tab2();
    default_view_tab3();
    //delete the ones that are expired
    check_exdate();
    check_exdate_basket();
    QString username="Welcome " +user_iterator.key();
    ui->welcome->setText(username+ " !");
    //tab1 search
    ui->comosearchtab1->addItem("Start with");
    ui->comosearchtab1->addItem("Contains");
    ui->combo_search_by_tab1->addItem("Products");
    ui->combo_search_by_tab1->addItem("Consumer");
    ui->combo_search_by_tab1->addItem("Type");
    ui->combo_search_by_tab1->addItem("Number");
    ui->combo_search_by_tab1->addItem("Price");
    ui->combo_search_by_tab1->addItem("Expire Date");
    //tab2 search
    ui->combobox_searchtab2_startwith->addItem("Start with");
    ui->combobox_searchtab2_startwith->addItem("Contains");
    ui->comosearchtab2->addItem("Group's name");
    ui->comosearchtab2->addItem("Products");
    ui->comosearchtab2->addItem("Consumer");
    ui->comosearchtab2->addItem("Type");
    ui->comosearchtab2->addItem("Number");
    ui->comosearchtab2->addItem("Price");
    ui->comosearchtab2->addItem("Expire Date");
    //tab3 search
    ui->comboBox_2_my_basket->addItem("Start with");
    ui->comboBox_2_my_basket->addItem("Contains");
    ui->comboBox_mybasket->addItem("Products");
    ui->comboBox_mybasket->addItem("Consumer");
    ui->comboBox_mybasket->addItem("Type");
    ui->comboBox_mybasket->addItem("Number of purchase");
    ui->comboBox_mybasket->addItem("Price");
    ui->comboBox_mybasket->addItem("Expire Date");

    //tab1 sort
    ui->combo_mainlist_sortby->addItem("Product's name");
    ui->combo_mainlist_sortby->addItem("Consumer");
    ui->combo_mainlist_sortby->addItem("Type");
    ui->combo_mainlist_sortby->addItem("Number of existence");
    ui->combo_mainlist_sortby->addItem("Price");
    ui->combo_mainlist_sortby->addItem("Expire Date");
    ui->combo_mainlist_sorttype->addItem("Ascending");
    ui->combo_mainlist_sorttype->addItem("Descending");
    //tab2 sort
    ui->combo_groups_sortby->addItem("Group's name");
    ui->combo_groups_sorttype->addItem("Ascending");
    ui->combo_groups_sorttype->addItem("Descending");
    //tab3 sort
    ui->combo_basket_sortby->addItem("Product's name");
    ui->combo_basket_sortby->addItem("Consumer");
    ui->combo_basket_sortby->addItem("Type");
    ui->combo_basket_sortby->addItem("Number of purcahse");
    ui->combo_basket_sortby->addItem("Price");
    ui->combo_basket_sortby->addItem("Expire Date");
    ui->combo_basket_sorttype->addItem("Ascending");
    ui->combo_basket_sorttype->addItem("Descending");
    //show date
    QDate cd = QDate::currentDate();
    QStringList date=cd.toString().split(" ");
    ui->date_lable->setText(date[0]+' '+date[1]+" ("+cd.toString("yyyy/MM/dd")+')');
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
                  i++;
                  break;
              case 6:
                  QString name=line;
                  QStringList name_split = name.split("/");
                  QDate d(name_split[0].toInt(),name_split[1].toInt(),name_split[2].toInt());
                  pro_list.set_exdate(d);
                  list_pointer->append(pro_list);
                  i=1;
                  break;
              }
           }
           ui->tree->setColumnCount(4);
           ui->tree->header()->setStyleSheet("QHeaderView::section { background-color:#ff8c8c; color:black; }");
           ui->tree->setHeaderLabels(QStringList() <<"Consumer" << "Type" <<"Number"<<"price"<<"Expire Date");
          // ui->tree->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
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
                               i++;
                               break;
                           case 6:
                               QString name=line;
                               QStringList name_split = name.split("/");
                               QDate d(name_split[0].toInt(),name_split[1].toInt(),name_split[2].toInt());
                               pro_list.set_exdate(d);
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
                ui->grouptree->header()->setStyleSheet("QHeaderView::section { background-color:#ff8c8c; color:black; }");
                ui->grouptree->setHeaderLabels(QStringList()<<"Group/Product/Consumer"<< "Type" <<"Number"<<"Price"<<"Expire Date");
               // ui->grouptree->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
                for(int i=0;i<group_pointer->size();i++)
                {
                    addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                }
       }
    group_file.close();
}

void main_page::default_view_tab3() {
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
                  i++;
                  break;
              case 6:
                  QString name=line;
                  QStringList name_split = name.split("/");
                  QDate d(name_split[0].toInt(),name_split[1].toInt(),name_split[2].toInt());
                  my_basket_list.set_exdate(d);
                  my_basket->append(my_basket_list);
                  i=1;
                  break;
              }
           }
           ui->basket_tree->setColumnCount(5);
           ui->basket_tree->header()->setStyleSheet("QHeaderView::section { background-color:#ff8c8c; color:black; }");
           ui->basket_tree->setHeaderLabels(QStringList() <<"Consumer" << "Type" <<"Number of purchase"<<"price"<<"Expire Date");
           for(int i=0;i<my_basket->size();i++)
            addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
    }
    double total=0;
    for(int i=0;i<my_basket->size();i++)
    {
      total+=(*my_basket)[i].get_price();
    }
    ui->totalprice->setText(QString::number(total));
}

void main_page::check_exdate()
{
    QDate current=QDate::currentDate();
    for(int i=0;i<list_pointer->size();i++)
    {
        if(current.daysTo((*list_pointer)[i].get_date())<=-1)
        {
            //the expire date has passed so it should be delete from list and basket
            for(int k=0;k<my_basket->size();k++)
            {
                if(equal_products((*my_basket)[k],(*list_pointer)[i],false,false))
                {
                    (*my_basket).erase(my_basket->begin()+k);
                    //break bc we don't have repeatetive products in my basket
                    break;
                }
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

            //the expire date has passed so it should be delete from list
             (*list_pointer).erase(list_pointer->begin()+i);

            //it should continue searching in the list to find other product that passed their expiration date
            i--;
        }
    }
    showchanges();
    showchanges_tab2();
    showchanges_tab3();
}

void main_page::check_exdate_basket()
{
     QDate current=QDate::currentDate();
    //if the product does not exist in main list and all of them are in basket , we delete the ones taht are expired
    for(int i=0;i<my_basket->size();i++)
    {
        if(current.daysTo((*my_basket)[i].get_date())<=-1)
        {
             (*my_basket).erase(my_basket->begin()+i);
            i--;
        }
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
        if(my_basket->size()!=0)
        {
            for(int i=0;i<my_basket->size();i++)
            {
                out<<(*my_basket)[i].get_name()+"\n";
                out<<(*my_basket)[i].get_consumer()+"\n";
                out<<(*my_basket)[i].get_type()+"\n";
                out<<QString::number((*my_basket)[i].get_number())+"\n";
                out<<QString::number((*my_basket)[i].get_price())+"\n";
                out<<(*my_basket)[i].get_date().toString("yyyy/MM/dd")+"\n";
            }
        }
        file.close();
    }
}

void main_page::save_groups_file()
{
    QFile group_file("group.txt");
    if(!group_file.open(QFile::WriteOnly | QFile::Text ))
    {
        QMessageBox::warning(this,"title","group.txt not opened");
    }
    else
    {
        QTextStream out(&group_file);
        if(group_pointer->size()!=0)
        {
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
                        out<<list[i].get_date().toString("yyyy/MM/dd")+"\n";
                    }
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
       QMessageBox::warning(this,"title","list.txt not opened");
    }
    else{
          QTextStream out(&file);
          if(list_pointer->size()!=0)
          {
              for(int i=0;i<list_pointer->size();i++)
              {
                  out<<(*list_pointer)[i].get_name()+"\n";
                  out<<(*list_pointer)[i].get_consumer()+"\n";
                  out<<(*list_pointer)[i].get_type()+"\n";
                  out<<QString::number((*list_pointer)[i].get_number())+"\n";
                  out<<QString::number((*list_pointer)[i].get_price())+"\n";
                  out<<(*list_pointer)[i].get_date().toString("yyyy/MM/dd")+"\n";
              }
          }
          file.close();
    }
}

void main_page::showchanges()
{
    ui->tree->clear();
    ui->tree->setColumnCount(5);
    ui->tree->header()->setStyleSheet("QHeaderView::section { background-color:#ff8c8c; color:black; }");
    ui->tree->setHeaderLabels(QStringList() <<"Product/Consumer" << "Type" <<"Number"<<"Price"<<"Expire Date");
   for(int i=0;i<list_pointer->size();i++)
   {
       addroot((*list_pointer)[i].get_name(),list_pointer,i,"$",ui->tree);
   }
}

void main_page::showchanges_tab3()
{
    ui->basket_tree->clear();
    ui->basket_tree->setColumnCount(5);
    ui->basket_tree->header()->setStyleSheet("QHeaderView::section { background-color:#ff8c8c; color:black; }");
    ui->basket_tree->setHeaderLabels(QStringList() <<"Product/Consumer" << "Type" <<"Number of purchase"<<"price"<<"Expire Date");
    for(int i=0;i<my_basket->size();i++)
    {
        addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
    }
    double total=0;
    for(int i=0;i<my_basket->size();i++)
    {
      total+=(*my_basket)[i].get_price();
    }
    ui->totalprice->setText(QString::number(total));
}

void main_page::showchanges_tab2()
{
    ui->grouptree->clear();
    ui->grouptree->setColumnCount(5);
    ui->grouptree->header()->setStyleSheet("QHeaderView::section { background-color:#ff8c8c; color:black; }");
    ui->grouptree->setHeaderLabels(QStringList()<<"Group/Product/Consumer"<< "Type" <<"Number"<<"price"<<"Expire Date");
    for(int i=0;i<group_pointer->size();i++)
    {
        addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
    }
}

void main_page::addroot(QString name,QList<products> * list_pointer,int index,QString mark,QTreeWidget * tab)
{
    QTreeWidgetItem * itm=new QTreeWidgetItem(tab);
    itm->setText(0, name);
    addchid(itm,(*list_pointer)[index].get_consumer(),(*list_pointer)[index].get_type(),(*list_pointer)[index].get_number(),(*list_pointer)[index].get_price(),(*list_pointer)[index].get_date(),mark);
}

void main_page::addchid(QTreeWidgetItem * parent ,QString consumer,QString type ,int number,double price,QDate exdate,QString mark)
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
    itm->setText(4,exdate.toString("yyyy/MM/dd"));
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
      addchid(itm,pro.get_consumer(),pro.get_type(),pro.get_number(),pro.get_price(),pro.get_date(),"$");
      pre_parent->addChild(itm);
   }
}

main_page::~main_page()
{
    delete group_pointer;
    delete list_pointer;
    delete my_basket;
    delete ui;
}

void main_page::on_addtolist_clicked()
{
    add_pro new_page(list_pointer);
    new_page.setModal(true);
    new_page.exec();
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
            delete group_pointer;
            delete list_pointer;
            delete my_basket;
            MainWindow *mainWindow = new MainWindow();
                mainWindow->show();
            this->close();
        }
          break;
      case QMessageBox::Discard:
    {
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
        this->close();
    }
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
                else if ((*list_pointer)[i].get_date().toString("yyyy/MM/dd").contains(search) && ui->combo_search_by_tab1->currentText()=="Expire Date")
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
                else if(((*list_pointer)[i].get_date().toString("yyyy/MM/dd")).left(search.size())==search && ui->combo_search_by_tab1->currentText()=="Expire Date")
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
    if(item1.get_date()!=item2.get_date())
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
    if(i!=-1)
    {
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
    else
    {
        QMessageBox::information(this,"title","Choose an item first!");
    }

}

void main_page::on_edit_clicked()
{
    //when clicked on the name of products
   if(ui->tree->currentIndex().row()!=-1)
   {
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
   else
   {
       QMessageBox::information(this,"title","Choose an item first!");
   }
}

void main_page::on_addtogroup_clicked()
{
    if(ui->tree->currentIndex().row()!=-1)
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
    else
    {
        QMessageBox::information(this,"title","Choose an item first!");
    }
}

void main_page::on_pushButton_2_clicked()
{
    showchanges_tab2();
}

void main_page::on_deleteforgroups_clicked()
{
    int i=ui->grouptree->currentIndex().row();
    //check if you are clicking on the group name we will remove group
    if(i!=-1)
    {
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
    else
    {
        QMessageBox::information(this,"title","Choose an item first!");
    }

}

void main_page::on_change_group_name_clicked()
{
    if(ui->grouptree->currentIndex().row()!=-1)
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
    else
    {
        QMessageBox::information(this,"title","Choose an item first!");
    }
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
    if(ui->tree->currentIndex().row()!=-1)
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
            //check if already exist in my basket
            if(equal_products(added_to_my_basket,(*my_basket)[j],false,false))
            {
                found=true;
                if((*list_pointer)[i].get_number()>0)
                {
                    (*my_basket)[j].set_number(((*my_basket)[j].get_number())+1);
                    (*my_basket)[j].set_price( (*my_basket)[j].get_price()+added_to_my_basket.get_price());
                    (*list_pointer)[i].set_number((*list_pointer)[i].get_number()-1);

                    //change number also in group that contains this product
                    for(int k=0;k<group_pointer->size();k++)
                    {
                        QList<products> groups_includes=(*group_pointer)[k].get_pro_group();
                        for(int s=0;s<groups_includes.size();s++)
                        {
                            if(equal_products(groups_includes[s],(*list_pointer)[i],false,true))
                            {
                                if((*list_pointer)[i].get_number()==0)
                                (*group_pointer)[k].get_pro_group().erase((*group_pointer)[k].get_pro_group().begin()+s);

                                else
                                {
                                    (*group_pointer)[k].get_pro_group()[s].set_number((*list_pointer)[i].get_number());
                                }
                            }
                        }
                    }
                    if((*list_pointer)[i].get_number()==0)
                    {
                        list_pointer->erase(list_pointer->begin()+i);
                    }
                    showchanges();
                    showchanges_tab2();
                    break;
                }
                else
                {
                    QMessageBox::warning(this,"title","This item has been finished!");
                    break;
                }
            }
        }
        if(!found)
        {
            //if the add product is not in the basket and this is the first order
            if((*list_pointer)[i].get_number()>0)
            {
                added_to_my_basket.set_number(1);
                (*list_pointer)[i].set_number((*list_pointer)[i].get_number()-1);

                //change number also in group that contains this product
                for(int k=0;k<group_pointer->size();k++)
                {
                    QList<products> groups_includes=(*group_pointer)[k].get_pro_group();
                    for(int s=0;s<groups_includes.size();s++)
                    {
                        if(equal_products(groups_includes[s],(*list_pointer)[i],false,true))
                        {
                            if((*list_pointer)[i].get_number()==0)
                            (*group_pointer)[k].get_pro_group().erase((*group_pointer)[k].get_pro_group().begin()+s);

                            else
                            {
                                (*group_pointer)[k].get_pro_group()[s].set_number((*list_pointer)[i].get_number());
                            }
                        }
                    }
                }

                showchanges_tab2();
                showchanges();
                my_basket->append(added_to_my_basket);
            }
            else  QMessageBox::warning(this,"title","This item has been finished!");
        }
        showchanges_tab3();
    }
    else
    {
        QMessageBox::information(this,"title","Choose an item first!");
    }
}

void main_page::on_delete_from_list_clicked()
{
    //delete from my basket
    if(ui->basket_tree->currentIndex().row()!=-1)
    {
        if( ui->basket_tree->currentItem()->childCount()==0)
        {
            ui->basket_tree->setCurrentItem(ui->basket_tree->currentItem()->parent());
        }
        int i=ui->basket_tree->currentIndex().row();
        (*my_basket).erase(my_basket->begin()+i);
        showchanges_tab3();
    }
    else
    {
        QMessageBox::information(this,"title","Choose an item first!");
    }
}

void main_page::on_update_spinbox_clicked()
{
    if(ui->basket_tree->currentIndex().row()!=-1)
    {
        if(ui->basket_tree->currentItem()->childCount()==0)
        {
            ui->basket_tree->setCurrentItem(ui->basket_tree->currentItem()->parent());
        }
        int i=ui->basket_tree->currentIndex().row();
        for(int j=0;j<list_pointer->size();j++)
        {
            if(equal_products((*my_basket)[i],(*list_pointer)[j],false,false))
            {
                if(ui->spinBox->cleanText().toInt()-(*my_basket)[i].get_number()<=(*list_pointer)[j].get_number())
                {
                    (*list_pointer)[j].set_number((*list_pointer)[j].get_number()-(ui->spinBox->cleanText().toInt()-(*my_basket)[i].get_number()));
                    (*my_basket)[i].set_number(ui->spinBox->cleanText().toInt());
                    (*my_basket)[i].set_price( ui->spinBox->cleanText().toInt()*(*list_pointer)[j].get_price());
                    //delete that product
                    if(ui->spinBox->cleanText().toInt()==0)
                    {
                        (*my_basket).erase(my_basket->begin()+i);
                    }
                    showchanges_tab3();
                    showchanges_tab2();
                    showchanges();
                    ui->spinBox->clear();
                }

                else
                {
                    QMessageBox::warning(this,"title","The purchase_number is out of range of existed items!");
                }
                break;
            }
        }
    }
    else
    {
        QMessageBox::information(this,"title","Choose an item first!");
    }
}

void main_page::on_unreserved_clicked()
{
     if(ui->basket_tree->currentIndex().row()!=-1)
     {
         if( ui->basket_tree->currentItem()->childCount()==0)
         {
             ui->basket_tree->setCurrentItem(ui->basket_tree->currentItem()->parent());
         }
         int i=ui->basket_tree->currentIndex().row();
         bool found=false;
         for(int j=0;j<list_pointer->size();j++)
         {
             if(equal_products((*my_basket)[i],(*list_pointer)[j],false,false))
             {
                 (*list_pointer)[j].set_number((*list_pointer)[j].get_number()+(*my_basket)[i].get_number());
                 showchanges();
                 found=true;
                 break;
             }
         }
         if(!found)
         {
             list_pointer->append((*my_basket)[i]);
             showchanges();
         }
         (*my_basket).erase(my_basket->begin()+i);
         showchanges_tab3();
     }
     else
     {
         QMessageBox::information(this,"title","Choose an item first!");
     }
}

void main_page::on_search_button_group_clicked()
{
    ui->grouptree->clear();
     QString search=this->ui->searchzone_tab2->text();
     if(!search.isEmpty())
     {
         if(ui->combobox_searchtab2_startwith->currentText()=="Contains")
         {
             if( ui->comosearchtab2->currentText()=="Group's name")
             {
                 for(int i=0;i<group_pointer->size();i++)
                 {
                     if((*group_pointer)[i].get_group_name().contains(search))
                     {
                         addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                     }
                 }
             }
             else
             {
                 for(int i=0;i<group_pointer->size();i++)
                 {
                     QList<products> list_in_group=(*group_pointer)[i].get_pro_group();
                         for(int j=0;j<list_in_group.size();j++)
                         {
                             if(list_in_group[j].get_name().contains(search) && ui->comosearchtab2->currentText()=="Products")
                             {
                                 addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                                  break;
                             }
                             else if(list_in_group[j].get_consumer().contains(search) && ui->comosearchtab2->currentText()=="Consumer")
                             {
                                 addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                                  break;
                             }
                             else if(list_in_group[j].get_type().contains(search) && ui->comosearchtab2->currentText()=="Type")
                             {
                                 addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                                  break;
                             }
                             else if(QString::number(list_in_group[j].get_number()).contains(search) && ui->comosearchtab2->currentText()=="Number")
                             {
                                 addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                                  break;
                             }
                             else if(QString::number(list_in_group[j].get_price()).contains(search) && ui->comosearchtab2->currentText()=="Price")
                             {
                                 addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                                  break;
                             }
                             else if(list_in_group[j].get_date().toString("yyyy/MM/dd").contains(search) && ui->comosearchtab2->currentText()=="Expire Date")
                             {
                                 addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                                  break;
                             }
                         }
                  }

              }
         }
         else
         {
             if( ui->comosearchtab2->currentText()=="Group's name")
             {
                 for(int i=0;i<group_pointer->size();i++)
                 {
                     if((*group_pointer)[i].get_group_name().left(search.size())==search)
                     {
                         addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                     }
                 }
             }
             else
             {
                 for(int i=0;i<group_pointer->size();i++)
                 {
                     QList<products> list_in_group=(*group_pointer)[i].get_pro_group();
                     for(int j=0;j<list_in_group.size();j++)
                     {
                         if(list_in_group[j].get_name().left(search.size())==search && ui->comosearchtab2->currentText()=="Products")
                         {
                             addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                             break;
                         }
                         else if(list_in_group[j].get_consumer().left(search.size())==search && ui->comosearchtab2->currentText()=="Consumer")
                         {
                             addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                              break;
                         }
                         else if(list_in_group[j].get_type().left(search.size())==search && ui->comosearchtab2->currentText()=="Type")
                         {
                             addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                              break;
                         }
                         else if(QString::number(list_in_group[j].get_number()).left(search.size())==search && ui->comosearchtab2->currentText()=="Number")
                         {
                             addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                              break;
                         }
                         else if(QString::number(list_in_group[j].get_price()).left(search.size())==search && ui->comosearchtab2->currentText()=="Price")
                         {
                             addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                              break;
                         }
                         else if(list_in_group[j].get_date().toString("yyyy/MM/dd").left(search.size())==search && ui->comosearchtab2->currentText()=="Expire Date")
                         {
                             addroot_group((*group_pointer)[i].get_group_name(),group_pointer,i);
                              break;
                         }
                     }
                 }
             }

         }
     }
     else
     {
         QMessageBox::information(this,"title","Enter something to search!");

     }
}

void main_page::on_search_mybasket_tab3_clicked()
{
    ui->basket_tree->clear();
     QString search=this->ui->searchzone_mybasket->text();
    if(!search.isEmpty())
    {
        if(ui->comboBox_2_my_basket->currentText()=="Contains")
        {
            for(int i=0;i<my_basket->size();i++)
            {
                if((*my_basket)[i].get_name().contains(search) && ui->comboBox_mybasket->currentText()=="Products")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
               else if((*my_basket)[i].get_consumer().contains(search) && ui->comboBox_mybasket->currentText()=="Consumer")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
               else if((*my_basket)[i].get_type().contains(search) && ui->comboBox_mybasket->currentText()=="Type")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
               else if(QString::number((*my_basket)[i].get_number()).contains(search) && ui->comboBox_mybasket->currentText()=="Number of purchase")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
               else if(QString::number((*my_basket)[i].get_price()).contains(search) && ui->comboBox_mybasket->currentText()=="Price")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
                else if((*my_basket)[i].get_date().toString("yyyy/MM/dd").contains(search) && ui->comboBox_mybasket->currentText()=="Expire Date")
                 {
                     addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                 }
            }

        }
        else
        {
            for(int i=0;i<my_basket->size();i++)
            {
                if((*my_basket)[i].get_name().left(search.size())==search && ui->comboBox_mybasket->currentText()=="Products")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
                else if((*my_basket)[i].get_consumer().left(search.size())==search && ui->comboBox_mybasket->currentText()=="Consumer")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
                else if((*my_basket)[i].get_type().left(search.size())==search && ui->comboBox_mybasket->currentText()=="Type")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
                else if(QString::number((*my_basket)[i].get_number()).left(search.size())==search && ui->comboBox_mybasket->currentText()=="Number of purchase")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
                else if(QString::number((*my_basket)[i].get_price()).left(search.size())==search && ui->comboBox_mybasket->currentText()=="Price")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
                else if((*my_basket)[i].get_date().toString("yyyy/MM/dd").left(search.size())==search && ui->comboBox_mybasket->currentText()=="Expire Date")
                {
                    addroot((*my_basket)[i].get_name(),my_basket,i,"X",ui->basket_tree);
                }
            }
        }
    }
    else
    {
        QMessageBox::information(this,"title","Enter something to search!");
    }
}

void main_page::on_current_basket_clicked()
{
    showchanges_tab3();
}

void main_page::on_actionMain_list_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Deleting your main list will also delete YOUR BASKET & GROUOPS(reset all), once you done this there is no comming back,ARE YOU SURE TO TAKE THIS ACTION?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No );
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
    switch (ret) {
      case QMessageBox::Yes:
        {
        //delete main_list file
        (*list_pointer).clear();
        QFile file("list.txt");
        if(file.size()!=0)
        {
            file.resize(0);
        }
          showchanges();
        //delete my_basket file
        (*my_basket).clear();
        QString current_username=user_iterator.key()+".txt";
        QFile basket_file(current_username);
        if(basket_file.size()!=0)
        {
            basket_file.resize(0);
        }
        showchanges_tab3();
        //delete groups file
        (*group_pointer).clear();
        QFile group_file("group.txt");
        if(group_file.size()!=0)
        {
            group_file.resize(0);
        }
        showchanges_tab2();
        }
          break;
      case QMessageBox::No:
          break;
      default:
          break;
    }
}

void main_page::on_actionMy_Basket_triggered()
{
    QMessageBox msg;
    msg.setText("Once you done this, there is no comming back,ARE YOU SURE TO TAKE THIS ACTION?");
    msg.setStandardButtons(QMessageBox::Yes | QMessageBox::No );
    msg.setDefaultButton(QMessageBox::No);
    int ret=msg.exec();
    switch (ret) {
      case QMessageBox::Yes:
        {
        (*my_basket).clear();
        QString current_username=user_iterator.key()+".txt";
        QFile file(current_username);
        if(file.size()!=0)
        {
            file.resize(0);
        }
          showchanges_tab3();
        }

          break;
      case QMessageBox::No:
          break;
      default:
          break;
    }
}

void main_page::on_actionGroups_2_triggered()
{
    QMessageBox msg;
    msg.setText("Once you done this, there is no comming back,ARE YOU SURE TO TAKE THIS ACTION?");
    msg.setStandardButtons(QMessageBox::Yes | QMessageBox::No );
    msg.setDefaultButton(QMessageBox::No);
    int ret=msg.exec();
    switch (ret) {
      case QMessageBox::Yes:
        {
        (*group_pointer).clear();
        QFile file("group.txt");
        if(file.size()!=0)
        {
            file.resize(0);
        }
        showchanges_tab2();
        }

          break;
      case QMessageBox::No:
          break;
      default:
          break;
    }

}

bool comparePro_name( products one, products  two)
{
   return one.get_name().toLower() < two.get_name().toLower();
}

bool comparePro_consumer( products one, products two)
{
    return one.get_consumer().toLower() <two.get_consumer().toLower();
}

bool comparePro_type( products one, products two)
{
    return one.get_type().toLower() <two.get_type().toLower();
}

bool comparePro_number( products one, products two)
{
    return one.get_number() <two.get_number();
}

bool comparePro_price( products one, products two)
{
    return one.get_price() < two.get_price();
}

bool camparePro_Exdate(products one,products two)
{
    return one.get_date() <two.get_date();
}

bool compareGroup(group one , group two)
{
    return one.get_group_name().toLower() < two.get_group_name().toLower();
}

void main_page::on_sort_mainlist_button_clicked()
{
    QString type=ui->combo_mainlist_sortby->currentText();
    if(type=="Product's name")
        std::sort(list_pointer->begin(),list_pointer->end(),comparePro_name);

    else if(type=="Consumer")
         std::sort(list_pointer->begin(),list_pointer->end(),comparePro_consumer);

    else if(type=="Type")
        std::sort(list_pointer->begin(),list_pointer->end(),comparePro_type);

    else if(type=="Number of existence")
         std::sort(list_pointer->begin(),list_pointer->end(),comparePro_number);

    else if(type=="Price")
        std::sort(list_pointer->begin(),list_pointer->end(),comparePro_price);

    else if(type=="Expire Date")
         std::sort(list_pointer->begin(),list_pointer->end(),camparePro_Exdate);

    if(ui->combo_mainlist_sorttype->currentText()=="Descending")
        std::reverse(list_pointer->begin(),list_pointer->end());

    showchanges();

}

void main_page::on_sort_groups_button_clicked()
{
     if(ui->combo_groups_sortby->currentText()=="Group's name")
         std::sort(group_pointer->begin(),group_pointer->end(),compareGroup);

     if(ui->combo_groups_sorttype->currentText()=="Descending")
         std::reverse(group_pointer->begin(),group_pointer->end());
     showchanges_tab2();

}

void main_page::on_sort_basket_button_clicked()
{
    QString type=ui->combo_basket_sortby->currentText();
    if(type=="Product's name")
        std::sort(my_basket->begin(),my_basket->end(),comparePro_name);

    else if(type=="Consumer")
         std::sort(my_basket->begin(),my_basket->end(),comparePro_consumer);

    else if(type=="Type")
        std::sort(my_basket->begin(),my_basket->end(),comparePro_type);

    else if(type=="Number of purcahse")
         std::sort(my_basket->begin(),my_basket->end(),comparePro_number);

    else if(type=="Price")
        std::sort(my_basket->begin(),my_basket->end(),comparePro_price);

    else if(type=="Expire Date")
         std::sort(my_basket->begin(),my_basket->end(),camparePro_Exdate);

    if(ui->combo_basket_sorttype->currentText()=="Descending")
        std::reverse(my_basket->begin(),my_basket->end());
    showchanges_tab3();
}

void main_page::on_current_list_clicked()
{
    showchanges();
}

void main_page::on_actionsave_changes_triggered()
{
    //save product list
    save_main_products_list_file();
    //save group list
    save_groups_file();
    //save my basket
    save_my_basket_file();
}

