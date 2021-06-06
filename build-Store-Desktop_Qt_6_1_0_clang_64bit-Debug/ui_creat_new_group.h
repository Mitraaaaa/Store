/********************************************************************************
** Form generated from reading UI file 'creat_new_group.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAT_NEW_GROUP_H
#define UI_CREAT_NEW_GROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_creat_new_group
{
public:
    QLineEdit *lineEditnewgroupname;
    QPushButton *addnewgroupbutton;

    void setupUi(QDialog *creat_new_group)
    {
        if (creat_new_group->objectName().isEmpty())
            creat_new_group->setObjectName(QString::fromUtf8("creat_new_group"));
        creat_new_group->resize(400, 300);
        lineEditnewgroupname = new QLineEdit(creat_new_group);
        lineEditnewgroupname->setObjectName(QString::fromUtf8("lineEditnewgroupname"));
        lineEditnewgroupname->setGeometry(QRect(92, 80, 211, 21));
        addnewgroupbutton = new QPushButton(creat_new_group);
        addnewgroupbutton->setObjectName(QString::fromUtf8("addnewgroupbutton"));
        addnewgroupbutton->setGeometry(QRect(140, 140, 113, 32));

        retranslateUi(creat_new_group);

        QMetaObject::connectSlotsByName(creat_new_group);
    } // setupUi

    void retranslateUi(QDialog *creat_new_group)
    {
        creat_new_group->setWindowTitle(QCoreApplication::translate("creat_new_group", "Dialog", nullptr));
        addnewgroupbutton->setText(QCoreApplication::translate("creat_new_group", "add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creat_new_group: public Ui_creat_new_group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAT_NEW_GROUP_H
