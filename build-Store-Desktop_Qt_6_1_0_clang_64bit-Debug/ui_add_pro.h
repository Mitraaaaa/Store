/********************************************************************************
** Form generated from reading UI file 'add_pro.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PRO_H
#define UI_ADD_PRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_pro
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *name_2;
    QLabel *consumer_2;
    QLabel *type_2;
    QLabel *number_2;
    QLabel *price_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QLineEdit *consumer;
    QLineEdit *type;
    QLineEdit *number;
    QLineEdit *price;
    QPushButton *additem;

    void setupUi(QDialog *add_pro)
    {
        if (add_pro->objectName().isEmpty())
            add_pro->setObjectName(QString::fromUtf8("add_pro"));
        add_pro->resize(436, 306);
        add_pro->setStyleSheet(QString::fromUtf8("QDialog\n"
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
"	font: 75 16pt \"Comic Sans MS\";\n"
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
        layoutWidget = new QWidget(add_pro);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 311, 231));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name_2 = new QLabel(layoutWidget);
        name_2->setObjectName(QString::fromUtf8("name_2"));

        verticalLayout->addWidget(name_2);

        consumer_2 = new QLabel(layoutWidget);
        consumer_2->setObjectName(QString::fromUtf8("consumer_2"));

        verticalLayout->addWidget(consumer_2);

        type_2 = new QLabel(layoutWidget);
        type_2->setObjectName(QString::fromUtf8("type_2"));

        verticalLayout->addWidget(type_2);

        number_2 = new QLabel(layoutWidget);
        number_2->setObjectName(QString::fromUtf8("number_2"));

        verticalLayout->addWidget(number_2);

        price_2 = new QLabel(layoutWidget);
        price_2->setObjectName(QString::fromUtf8("price_2"));

        verticalLayout->addWidget(price_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name = new QLineEdit(layoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        consumer = new QLineEdit(layoutWidget);
        consumer->setObjectName(QString::fromUtf8("consumer"));

        verticalLayout_2->addWidget(consumer);

        type = new QLineEdit(layoutWidget);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout_2->addWidget(type);

        number = new QLineEdit(layoutWidget);
        number->setObjectName(QString::fromUtf8("number"));

        verticalLayout_2->addWidget(number);

        price = new QLineEdit(layoutWidget);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout_2->addWidget(price);


        horizontalLayout->addLayout(verticalLayout_2);

        additem = new QPushButton(add_pro);
        additem->setObjectName(QString::fromUtf8("additem"));
        additem->setGeometry(QRect(170, 260, 151, 32));

        retranslateUi(add_pro);

        QMetaObject::connectSlotsByName(add_pro);
    } // setupUi

    void retranslateUi(QDialog *add_pro)
    {
        add_pro->setWindowTitle(QCoreApplication::translate("add_pro", "Dialog", nullptr));
        name_2->setText(QCoreApplication::translate("add_pro", "name :", nullptr));
        consumer_2->setText(QCoreApplication::translate("add_pro", "consumer :", nullptr));
        type_2->setText(QCoreApplication::translate("add_pro", "type :", nullptr));
        number_2->setText(QCoreApplication::translate("add_pro", "number :", nullptr));
        price_2->setText(QCoreApplication::translate("add_pro", "price", nullptr));
        additem->setText(QCoreApplication::translate("add_pro", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_pro: public Ui_add_pro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PRO_H
