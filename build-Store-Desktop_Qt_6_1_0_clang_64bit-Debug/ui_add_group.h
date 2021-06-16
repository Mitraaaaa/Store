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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *creatnewgroup;
    QPushButton *addtogroup;

    void setupUi(QDialog *Add_group)
    {
        if (Add_group->objectName().isEmpty())
            Add_group->setObjectName(QString::fromUtf8("Add_group"));
        Add_group->resize(400, 300);
        Add_group->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"      background: qconicalgradient(cx:0.5, cy:0.5, angle:30,\n"
"                stop:0 rgb(193, 192, 193), stop:1 rgb(255, 159, 159));\n"
"}\n"
"QLabel\n"
"{\n"
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
"}\n"
"QComboBox QAbstractItemView {\n"
"    selection-background-color: rgb(255, 138, 125);\n"
"    color:black;\n"
"}\n"
"QComboBox{\n"
"	color:black;\n"
"	font: 13pt \"Comic Sans MS\";\n"
"}"));
        comboBox = new QComboBox(Add_group);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 60, 321, 41));
        label = new QLabel(Add_group);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(169, 30, 61, 20));
        layoutWidget = new QWidget(Add_group);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 140, 234, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        creatnewgroup = new QPushButton(layoutWidget);
        creatnewgroup->setObjectName(QString::fromUtf8("creatnewgroup"));

        horizontalLayout->addWidget(creatnewgroup);

        addtogroup = new QPushButton(layoutWidget);
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
