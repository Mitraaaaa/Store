#include "read_files.h"
#include "ui_read_files.h"
#include<QFile>
#include<QMessageBox>
read_files::read_files(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::read_files)
{
    ui->setupUi(this);
}

read_files::~read_files()
{
    delete ui;
}



void read_files::on_pushButton_clicked()
{
    QFile file("myfile.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not opened");
    }
    QTextStream in(&file);
    QString text =in.readAll();
    this->ui->textBrowser->append(text);
    file.close();
}

