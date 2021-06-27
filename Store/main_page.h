#ifndef MAIN_PAGE_H
#define MAIN_PAGE_H

#include <QMainWindow>
#include<QList>
#include"products.h"
#include"group.h"
#include<QString>
#include <QTreeWidget>
#include<QMapIterator>
namespace Ui {
class main_page;
}

class main_page : public QMainWindow
{
    Q_OBJECT
    void addroot(QString name,QList<products> * list,int index,QString mark,QTreeWidget * tab);
    void addchid(QTreeWidgetItem * parent ,QString consumer,QString type ,int number,double price,QDate exdate,QString mark);
    void addroot_group(QString group_name,QList<group> * group_pointer,int index);
    void addchid_group(QTreeWidgetItem * pre_parent ,group each_group);

public:
    explicit main_page(QMap<QString,QString> *user_pass,QMap<QString, QString>::iterator current_user,QWidget *parent = nullptr);
    bool equal_products(products item1,products item2,bool compare_numbers,bool compare_price);
    void save_my_basket_file();
    void save_groups_file();
    void save_main_products_list_file();
    void save_userpass_file();
    void showchanges();
    void showchanges_tab2();
    void showchanges_tab3();
    void default_view_tab1();
    void default_view_tab2();
    void default_view_tab3();

    ~main_page();

private slots:


    void on_addtolist_clicked();

    void on_actionLog_out_triggered();

    void on_searchbutton_clicked();


    void on_delete_2_clicked();

    void on_edit_clicked();

    void on_addtogroup_clicked();

    void on_pushButton_2_clicked();


    void on_deleteforgroups_clicked();

    void on_change_group_name_clicked();



    void on_actionchange_user_pass_triggered();

    void on_add_mybasket_clicked();

    void on_delete_from_list_clicked();


    void on_update_spinbox_clicked();

    void on_unreserved_clicked();


    void on_search_button_group_clicked();

    void on_search_mybasket_tab3_clicked();

    void on_current_basket_clicked();


    void on_actionMain_list_triggered();

    void on_actionMy_Basket_triggered();

    void on_actionGroups_2_triggered();

    void on_sort_mainlist_button_clicked();

    void on_sort_groups_button_clicked();

    void on_sort_basket_button_clicked();


    void on_current_list_clicked();

private:
    Ui::main_page *ui;
    QList<products> *list_pointer;
    QList<group> * group_pointer;
    QMap<QString,QString> *user_pass_ptr;
    QMap<QString, QString>::iterator user_iterator;
    QList<products> * my_basket;
};

#endif // MAIN_PAGE_H
