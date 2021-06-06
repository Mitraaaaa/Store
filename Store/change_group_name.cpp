#include "change_group_name.h"
#include "ui_change_group_name.h"

change_group_name::change_group_name( QList<group> * group,int i,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_group_name),group_pointer(group),index(i)
{
    ui->setupUi(this);
}

change_group_name::~change_group_name()
{
    delete ui;
}

void change_group_name::on_change_name_button_clicked()
{
    (*group_pointer)[index].set_group_name(ui->lineEdit_change_name->text());
    this->close();
}

