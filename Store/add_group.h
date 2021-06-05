#ifndef ADD_GROUP_H
#define ADD_GROUP_H

#include <QDialog>

namespace Ui {
class Add_group;
}

class Add_group : public QDialog
{
    Q_OBJECT

public:
    explicit Add_group(QWidget *parent = nullptr);
    ~Add_group();

private:
    Ui::Add_group *ui;
};

#endif // ADD_GROUP_H
