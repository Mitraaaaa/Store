#include "mainwindow.h"
#include "ui_mainwindow.h"
#define user_pass "user_pass.txt"
#include<QMessageBox>
#include<iostream>
#include <read_files.h>
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
    QFile file("myfile.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text ))
    {
        QMessageBox::warning(this,"title","file not opened");
    }
    //file.open( QIODevice::WriteOnly | QIODevice::Append );
    if (file.size()== 0) {
        QTextStream out(&file);
        out << "username :"+this->ui->username->text()+'\n';
        out << "password :"+this->ui->password->text()+'\n';
    }
    else {
        QString searchString(this->ui->username->text());
        QTextStream in (&file);
        QString line;
        bool alredy_exist=false;
        do {
            line = in.readLine();
            if (!line.contains(searchString, Qt::CaseSensitive)) {
                // do something
                 QMessageBox::warning(this,"title","exists!");
                alredy_exist=true;
            }
        } while (!line.isNull());
        if(!alredy_exist)
        {
            QTextStream out(&file);
            out << "username :"+this->ui->username->text()+'\n';
            out << "password :"+this->ui->password->text()+'\n';
        }
    }

    file.close();
}


void MainWindow::on_login_clicked()
{

}


void MainWindow::on_reload_clicked()
{
    read_files new_page;
    new_page.setModal(true);
    new_page.exec();
}

