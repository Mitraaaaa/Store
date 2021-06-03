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
    void addroot(QString name);
    void addchid(QTreeWidgetItem * parent ,QString name,QString description );

public:
    explicit main_page(QWidget *parent = nullptr);
    ~main_page();

private slots:


private:
    Ui::main_page *ui;
    QList<products> *list_pointer;
};

#endif // MAIN_PAGE_H
