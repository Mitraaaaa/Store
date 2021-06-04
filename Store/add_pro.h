#ifndef ADD_PRO_H
#define ADD_PRO_H

#include <QDialog>
#include"products.h"
#include<QList>
namespace Ui {
class add_pro;
}

class add_pro : public QDialog
{
    Q_OBJECT

public:
    explicit add_pro(QList<products> * list,QWidget *parent = nullptr);
    ~add_pro();

private slots:

    void on_additem_clicked();

private:
    Ui::add_pro *ui;
    QList<products> * list_add_pro;
};

#endif // ADD_PRO_H
