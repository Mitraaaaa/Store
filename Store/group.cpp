#include "group.h"

group::group()
{

}

QString group::get_group_name()
{
    return group_name;
}
QList<products> group::get_pro_group()
{
    return pro_group;
}
void group::set_group_name(QString name)
{
    group_name=name;
}
void  group::set_pro_group(QList<products> pro_list)
{
   pro_group=pro_list;
}
 void group::add_to_group(products pro)
 {
     pro_group.append(pro);
 }
