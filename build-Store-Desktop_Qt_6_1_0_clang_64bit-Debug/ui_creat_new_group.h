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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_creat_new_group
{
public:
    QLineEdit *lineEditnewgroupname;
    QPushButton *addnewgroupbutton;
    QLabel *label;

    void setupUi(QDialog *creat_new_group)
    {
        if (creat_new_group->objectName().isEmpty())
            creat_new_group->setObjectName(QString::fromUtf8("creat_new_group"));
        creat_new_group->resize(400, 300);
        creat_new_group->setStyleSheet(QString::fromUtf8("QDialog\n"
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
"	font: 14pt \"Comic Sans MS\";\n"
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
"}\n"
"QLabel\n"
"{\n"
"	\n"
"	font: 75 18pt \"Comic Sans MS\";\n"
"color:black;\n"
"}\n"
""));
        lineEditnewgroupname = new QLineEdit(creat_new_group);
        lineEditnewgroupname->setObjectName(QString::fromUtf8("lineEditnewgroupname"));
        lineEditnewgroupname->setGeometry(QRect(82, 80, 231, 31));
        addnewgroupbutton = new QPushButton(creat_new_group);
        addnewgroupbutton->setObjectName(QString::fromUtf8("addnewgroupbutton"));
        addnewgroupbutton->setGeometry(QRect(140, 150, 111, 31));
        label = new QLabel(creat_new_group);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 131, 20));

        retranslateUi(creat_new_group);

        QMetaObject::connectSlotsByName(creat_new_group);
    } // setupUi

    void retranslateUi(QDialog *creat_new_group)
    {
        creat_new_group->setWindowTitle(QCoreApplication::translate("creat_new_group", "Dialog", nullptr));
        lineEditnewgroupname->setText(QString());
        addnewgroupbutton->setText(QCoreApplication::translate("creat_new_group", "add", nullptr));
        label->setText(QCoreApplication::translate("creat_new_group", "Group's name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creat_new_group: public Ui_creat_new_group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAT_NEW_GROUP_H
