/********************************************************************************
** Form generated from reading UI file 'add_group.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_GROUP_H
#define UI_ADD_GROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Add_group
{
public:

    void setupUi(QDialog *Add_group)
    {
        if (Add_group->objectName().isEmpty())
            Add_group->setObjectName(QString::fromUtf8("Add_group"));
        Add_group->resize(400, 300);

        retranslateUi(Add_group);

        QMetaObject::connectSlotsByName(Add_group);
    } // setupUi

    void retranslateUi(QDialog *Add_group)
    {
        Add_group->setWindowTitle(QCoreApplication::translate("Add_group", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_group: public Ui_Add_group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_GROUP_H
