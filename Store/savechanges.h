#ifndef SAVECHANGES_H
#define SAVECHANGES_H

#include <QDialog>
#include<QList>
#include"products.h"
namespace Ui {
class savechanges;
}

class savechanges : public QDialog
{
    Q_OBJECT

public:
    explicit savechanges(QList<products> * list_add_pro,QWidget *parent = nullptr);
    ~savechanges();

private slots:

    void on_save_accepted();

private:
    Ui::savechanges *ui;
    QList<products> * list_save_pro;
};

#endif // SAVECHANGES_H
