#ifndef EDITPAGE_H
#define EDITPAGE_H

#include <QDialog>
#include<QList>
#include"products.h"
#include"group.h"
namespace Ui {
class editpage;
}

class editpage : public QDialog
{
    Q_OBJECT

public:
    explicit editpage( QList <products>* list_pointer,int index,QList<group> * groups ,QWidget *parent = nullptr);
    bool equal(products item1,products item2);
    ~editpage();

private slots:
    void on_editbutton_clicked();

private:
    Ui::editpage *ui;
    QList <products>* list_pointer;
    int index;
    QList<group> * group_pointer;
};

#endif // EDITPAGE_H
