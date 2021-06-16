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
        change_group_name->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"      background: qconicalgradient(cx:0.5, cy:0.5, angle:30,\n"
"                stop:0 rgb(193, 192, 193), stop:1 rgb(255, 159, 159))\n"
"\n"
"}\n"
"QLineEdit\n"
"{\n"
" border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color:rgb(162, 10, 23);\n"
"    border-radius: 4px;\n"
"background-color:white;\n"
"color:rgb(166, 5, 0);\n"
"	font: 13pt \"Comic Sans MS\";\n"
"}\n"
"QLabel\n"
"{\n"
"	\n"
"	font: 75 18pt \"Comic Sans MS\";\n"
"color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	\n"
"	font: 75 14pt \"Comic Sans MS\";\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 white, stop: 0.4 white, stop:1 rgb(193, 192, 193));\n"
"color:black;\n"
"  	 border-width: 1px;\n"
"    border-style: solid;\n"
"    border-radius: 4px;\n"
"}"));
        lineEdit_change_name = new QLineEdit(change_group_name);
        lineEdit_change_name->setObjectName(QString::fromUtf8("lineEdit_change_name"));
        lineEdit_change_name->setGeometry(QRect(70, 90, 251, 31));
        change_name_button = new QPushButton(change_group_name);
        change_name_button->setObjectName(QString::fromUtf8("change_name_button"));
        change_name_button->setGeometry(QRect(140, 160, 113, 32));
        label = new QLabel(change_group_name);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 141, 20));

        retranslateUi(change_group_name);

        QMetaObject::connectSlotsByName(change_group_name);
    } // setupUi

    void retranslateUi(QDialog *change_group_name)
    {
        change_group_name->setWindowTitle(QCoreApplication::translate("change_group_name", "Dialog", nullptr));
        lineEdit_change_name->setText(QString());
        change_name_button->setText(QCoreApplication::translate("change_group_name", "change", nullptr));
        label->setText(QCoreApplication::translate("change_group_name", "Eneter new name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_group_name: public Ui_change_group_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_GROUP_NAME_H
