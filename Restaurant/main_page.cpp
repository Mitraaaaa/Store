#include "main_page.h"
#include "ui_main_page.h"
#include<QMessageBox>
main_page::main_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_page)
{
    ui->setupUi(this);
}

main_page::~main_page()
{
    delete ui;
}

void main_page::on_actionuser_s_name_triggered()
{
    QMessageBox::information(this,"title","yessss");
}

