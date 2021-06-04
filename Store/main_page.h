#ifndef MAIN_PAGE_H
#define MAIN_PAGE_H

#include <QMainWindow>
#include<QList>
#include"products.h"
#include<QString>
#include <QTreeWidget>
namespace Ui {
class main_page;
}

class main_page : public QMainWindow
{
    Q_OBJECT
    void addroot(QString name,QList<products> * list,int index);
    void addchid(QTreeWidgetItem * parent ,QString consumer,QString description ,int number);

public:
    explicit main_page(QWidget *parent = nullptr);
    ~main_page();

private slots:


    void on_addtolist_clicked();


    void on_showchanges_clicked();

    void on_actionLog_out_triggered();

private:
    Ui::main_page *ui;
    QList<products> *list_pointer;
};

#endif // MAIN_PAGE_H
