#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "products.h"
#include<QMessageBox>
#include<iostream>
#include <read_files.h>
#include<main_page.h>
#include<QList>
#include<QMap>
#include<QList>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    user_pass=new QMap<QString,QString>;
    ui->setupUi(this);
    QFile file("user_pass.txt");
    if(file.open(QIODevice::ReadOnly |QIODevice::Text))
    {
        if(file.size()!=0)
        {
            QTextStream in(&file);
            while(!in.atEnd())
            {
                QString line=in.readLine();
                if(line.contains("Username :"))
               {
                    QStringList user,pass;
                    QString pre_line=line;
                    line=in.readLine();
                    user=pre_line.split("Username :");
                    pass=line.split("Password :");
                    user_pass->insert(user[1],pass[1]);
                }
            }
        }
    }
    file.close();
}

void MainWindow::save_user_pass_file()
{
    QFile file("user_pass.txt");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    else
    {
         QTextStream out(&file);
        for(auto it=(*user_pass).begin();it!=(*user_pass).end();it++)
        {
            out<<"Username :"+ it.key()+"\n";
            out<<"Password :"+ it.value()+"\n";
        }
        file.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //ui->pushButton->

}


void MainWindow::on_signup_clicked()
{
    if(user_pass->size()==0)
    {
        user_pass->insert(ui->username->text(),ui->password->text());
        save_user_pass_file();
        main_page *newmain= new main_page(user_pass,user_pass->begin());
        newmain->show();
    }
    else
    {
        bool alredy_exist=false;
        for(int i=0;i<user_pass->size();i++)
        {
           if (user_pass->find(ui->username->text())!=user_pass->end())
           {
                 QMessageBox::warning(this,"title","This Username is already used,try another one !");
                 ui->username->clear();
                 alredy_exist=true;
                 break;
           }
        }
        if(!alredy_exist)
        {
            user_pass->insert(ui->username->text(),ui->password->text());
             save_user_pass_file();
            main_page *newmain= new main_page(user_pass,user_pass->find(ui->username->text()));
            newmain->show();
        }

    }
}
void MainWindow::on_login_clicked()
{
       if(user_pass->size()!=0)
       {
           if(user_pass->find(ui->username->text())!=user_pass->end())
           {
               if((user_pass->find(ui->username->text())).value()==ui->password->text())
               {
                       main_page *newmain= new main_page(user_pass,user_pass->find(ui->username->text()));
                       newmain->show();
                }
                   else  QMessageBox::warning(this,"title","Wrong Password");
            }
               else QMessageBox::warning(this,"title","This Username doesn't exists!");
           }
       else
       {
          QMessageBox::warning(this,"title","You haven't signed up yet!");
       }

}

