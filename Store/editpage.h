#ifndef EDITPAGE_H
#define EDITPAGE_H

#include <QDialog>
#include<QList>
#include"products.h"
namespace Ui {
class editpage;
}

class editpage : public QDialog
{
    Q_OBJECT

public:
    explicit editpage( QList <products>* list_pointer,int index,QWidget *parent = nullptr);
    ~editpage();

private slots:
    void on_editbutton_clicked();

private:
    Ui::editpage *ui;
    QList <products>* list_pointer;
    int index;
};

#endif // EDITPAGE_H
