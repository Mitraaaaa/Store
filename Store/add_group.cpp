#include "add_group.h"
#include "ui_add_group.h"

Add_group::Add_group(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_group)
{
    ui->setupUi(this);
}

Add_group::~Add_group()
{
    delete ui;
}
