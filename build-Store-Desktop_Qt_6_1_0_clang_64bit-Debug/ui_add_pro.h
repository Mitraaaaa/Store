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
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QPushButton *additem;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *name_2;
    QLabel *consumer_2;
    QLabel *type_2;
    QLabel *number_2;
    QLabel *price;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QLineEdit *consumer;
    QLineEdit *type;
    QLineEdit *number;
    QLineEdit *price_2;

    void setupUi(QDialog *add_pro)
    {
        if (add_pro->objectName().isEmpty())
            add_pro->setObjectName(QString::fromUtf8("add_pro"));
        add_pro->resize(400, 300);
        groupBox = new QGroupBox(add_pro);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 321, 261));
        additem = new QPushButton(groupBox);
        additem->setObjectName(QString::fromUtf8("additem"));
        additem->setGeometry(QRect(120, 220, 151, 32));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 311, 201));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name_2 = new QLabel(widget);
        name_2->setObjectName(QString::fromUtf8("name_2"));

        verticalLayout->addWidget(name_2);

        consumer_2 = new QLabel(widget);
        consumer_2->setObjectName(QString::fromUtf8("consumer_2"));

        verticalLayout->addWidget(consumer_2);

        type_2 = new QLabel(widget);
        type_2->setObjectName(QString::fromUtf8("type_2"));

        verticalLayout->addWidget(type_2);

        number_2 = new QLabel(widget);
        number_2->setObjectName(QString::fromUtf8("number_2"));

        verticalLayout->addWidget(number_2);

        price = new QLabel(widget);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout->addWidget(price);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        consumer = new QLineEdit(widget);
        consumer->setObjectName(QString::fromUtf8("consumer"));

        verticalLayout_2->addWidget(consumer);

        type = new QLineEdit(widget);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout_2->addWidget(type);

        number = new QLineEdit(widget);
        number->setObjectName(QString::fromUtf8("number"));

        verticalLayout_2->addWidget(number);

        price_2 = new QLineEdit(widget);
        price_2->setObjectName(QString::fromUtf8("price_2"));

        verticalLayout_2->addWidget(price_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(add_pro);

        QMetaObject::connectSlotsByName(add_pro);
    } // setupUi

    void retranslateUi(QDialog *add_pro)
    {
        add_pro->setWindowTitle(QCoreApplication::translate("add_pro", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("add_pro", "ADD ITEM", nullptr));
        additem->setText(QCoreApplication::translate("add_pro", "Add", nullptr));
        name_2->setText(QCoreApplication::translate("add_pro", "name :", nullptr));
        consumer_2->setText(QCoreApplication::translate("add_pro", "consumer :", nullptr));
        type_2->setText(QCoreApplication::translate("add_pro", "type :", nullptr));
        number_2->setText(QCoreApplication::translate("add_pro", "number :", nullptr));
        price->setText(QCoreApplication::translate("add_pro", "price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_pro: public Ui_add_pro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PRO_H
