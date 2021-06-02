#include "mainwindow.h"
#include "ui_mainwindow.h"
#define user_pass "user_pass.txt"
#include<QMessageBox>
#include<iostream>
#include <read_files.h>
#include<main_page.h>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->comboBox->addItem("settings");
//    ui->comboBox->addItem("password");
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
    QFile file("user_pass.txt");
    if(! file.open( QIODevice::WriteOnly | QIODevice::Append ))
    {
        QMessageBox::warning(this,"title","file not opened");
    }
    if (file.size()== 0) {
        QTextStream out(&file);
        out << "username :"+this->ui->username->text()+'\n';
        out << "password :"+this->ui->password->text()+"\n\n";
    }
    else {
        file.close();
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QString searchString="username :"+this->ui->username->text();
        QTextStream in (&file);
        QString line;
        bool alredy_exist=false;
        do {
            line = in.readLine();
            if (line.contains(searchString, Qt::CaseSensitive)) {
                 QMessageBox::warning(this,"title","exists!");
                alredy_exist=true;
                break;
            }
        } while (!line.isNull());
        if(!alredy_exist)
        {
            file.close();
            file.open( QIODevice::WriteOnly | QIODevice::Append );
            QTextStream out(&file);
            out << "username :"+this->ui->username->text()+'\n';
            out << "password :"+this->ui->password->text()+"\n\n";
        }
    }

    file.close();
}


void MainWindow::on_login_clicked()
{
    QFile file("user_pass.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
          QMessageBox::warning(this,"title","file not opened");
    }
    else{
        QString searchString="username :"+this->ui->username->text();
        QTextStream in (&file);
        QString line;
        bool alredy_exist=false;
        do {
            line = in.readLine();
            if (line.contains(searchString, Qt::CaseSensitive)) {
                line=in.readLine();
                searchString="password :"+this->ui->password->text();
                 if (!line.contains(searchString, Qt::CaseSensitive))
                 {
                      QMessageBox::warning(this,"title","Invalid password!");
                 }
                 else
                 {
                     main_page *newmain= new main_page();
                     newmain->show();
                 }
                alredy_exist=true;
                break;
            }
        } while (!line.isNull());
        if(!alredy_exist)
        {
            QMessageBox::warning(this,"title","Invalid Username!");
        }
    }
}


void MainWindow::on_reload_clicked()
{
    read_files new_page;
    new_page.setModal(true);
    new_page.exec();
}

