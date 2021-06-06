#ifndef GROUP_H
#define GROUP_H
#include"products.h"
#include<QList>
#include<QString>
class group
{
private:
    QString group_name;
    QList<products> pro_group;
public:
    group();
    QString get_group_name();
    QList<products> & get_pro_group();
    void set_group_name(QString name);
    void set_pro_group(QList<products> pro_list);
    void add_to_group(products pro);
};

#endif // GROUP_H
