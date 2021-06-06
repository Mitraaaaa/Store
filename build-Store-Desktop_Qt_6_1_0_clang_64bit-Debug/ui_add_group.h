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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_group
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *creatnewgroup;
    QPushButton *addtogroup;

    void setupUi(QDialog *Add_group)
    {
        if (Add_group->objectName().isEmpty())
            Add_group->setObjectName(QString::fromUtf8("Add_group"));
        Add_group->resize(400, 300);
        comboBox = new QComboBox(Add_group);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 60, 321, 41));
        label = new QLabel(Add_group);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(169, 30, 61, 20));
        widget = new QWidget(Add_group);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 140, 234, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        creatnewgroup = new QPushButton(widget);
        creatnewgroup->setObjectName(QString::fromUtf8("creatnewgroup"));

        horizontalLayout->addWidget(creatnewgroup);

        addtogroup = new QPushButton(widget);
        addtogroup->setObjectName(QString::fromUtf8("addtogroup"));

        horizontalLayout->addWidget(addtogroup);


        retranslateUi(Add_group);

        QMetaObject::connectSlotsByName(Add_group);
    } // setupUi

    void retranslateUi(QDialog *Add_group)
    {
        Add_group->setWindowTitle(QCoreApplication::translate("Add_group", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Add_group", "Gruops", nullptr));
        creatnewgroup->setText(QCoreApplication::translate("Add_group", "creat a new group", nullptr));
        addtogroup->setText(QCoreApplication::translate("Add_group", "add to", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_group: public Ui_Add_group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_GROUP_H
