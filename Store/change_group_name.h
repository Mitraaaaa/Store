#ifndef CHANGE_GROUP_NAME_H
#define CHANGE_GROUP_NAME_H

#include <QDialog>
#include<QList>
#include"group.h"
namespace Ui {
class change_group_name;
}

class change_group_name : public QDialog
{
    Q_OBJECT

public:
    explicit change_group_name( QList<group> * group,int i,QWidget *parent = nullptr);
    ~change_group_name();

private slots:
    void on_change_name_button_clicked();

private:
    Ui::change_group_name *ui;
    QList<group> * group_pointer;
    int index;
};

#endif // CHANGE_GROUP_NAME_H
