#ifndef ADD_GROUP_H
#define ADD_GROUP_H
#include<QList>
#include <QDialog>
#include<QTreeWidgetItem>
#include"group.h"
namespace Ui {
class Add_group;
}

class Add_group : public QDialog
{
    Q_OBJECT
public:
    explicit Add_group(QList<group> * group,products chosen,QWidget *parent = nullptr);
    void showchanges_comobox();
    ~Add_group();

private slots:
    void on_addtogroup_clicked();
    void on_creatnewgroup_clicked();

private:
    Ui::Add_group *ui;
    QList<group> * group_pointer;
    products chosen_products;
};

#endif // ADD_GROUP_H
