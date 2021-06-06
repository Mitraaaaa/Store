#ifndef CREAT_NEW_GROUP_H
#define CREAT_NEW_GROUP_H

#include <QDialog>
#include<QList>
#include"group.h"
namespace Ui {
class creat_new_group;
}

class creat_new_group : public QDialog
{
    Q_OBJECT

public:
    explicit creat_new_group(QList<group> * groups,products pro,QWidget *parent = nullptr);
    ~creat_new_group();

private slots:
    void on_addnewgroupbutton_clicked();

private:
    Ui::creat_new_group *ui;
    QList<group> * group_pointer;
    products chosen_pro;
};

#endif // CREAT_NEW_GROUP_H
