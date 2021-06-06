/********************************************************************************
** Form generated from reading UI file 'change_group_name.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_GROUP_NAME_H
#define UI_CHANGE_GROUP_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_change_group_name
{
public:
    QLineEdit *lineEdit_change_name;
    QPushButton *change_name_button;
    QLabel *label;

    void setupUi(QDialog *change_group_name)
    {
        if (change_group_name->objectName().isEmpty())
            change_group_name->setObjectName(QString::fromUtf8("change_group_name"));
        change_group_name->resize(400, 300);
        lineEdit_change_name = new QLineEdit(change_group_name);
        lineEdit_change_name->setObjectName(QString::fromUtf8("lineEdit_change_name"));
        lineEdit_change_name->setGeometry(QRect(90, 90, 191, 31));
        change_name_button = new QPushButton(change_group_name);
        change_name_button->setObjectName(QString::fromUtf8("change_name_button"));
        change_name_button->setGeometry(QRect(130, 160, 113, 32));
        label = new QLabel(change_group_name);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 141, 20));

        retranslateUi(change_group_name);

        QMetaObject::connectSlotsByName(change_group_name);
    } // setupUi

    void retranslateUi(QDialog *change_group_name)
    {
        change_group_name->setWindowTitle(QCoreApplication::translate("change_group_name", "Dialog", nullptr));
        change_name_button->setText(QCoreApplication::translate("change_group_name", "change", nullptr));
        label->setText(QCoreApplication::translate("change_group_name", "Eneter new name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_group_name: public Ui_change_group_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_GROUP_NAME_H
