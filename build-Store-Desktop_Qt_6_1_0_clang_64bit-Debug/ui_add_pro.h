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
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QLineEdit *consumer;
    QLineEdit *type;
    QLineEdit *number;

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
        widget->setGeometry(QRect(10, 40, 70, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(92, 40, 221, 171));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        name = new QLineEdit(widget1);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        consumer = new QLineEdit(widget1);
        consumer->setObjectName(QString::fromUtf8("consumer"));

        verticalLayout_2->addWidget(consumer);

        type = new QLineEdit(widget1);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout_2->addWidget(type);

        number = new QLineEdit(widget1);
        number->setObjectName(QString::fromUtf8("number"));

        verticalLayout_2->addWidget(number);


        retranslateUi(add_pro);

        QMetaObject::connectSlotsByName(add_pro);
    } // setupUi

    void retranslateUi(QDialog *add_pro)
    {
        add_pro->setWindowTitle(QCoreApplication::translate("add_pro", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("add_pro", "ADD ITEM", nullptr));
        additem->setText(QCoreApplication::translate("add_pro", "Add", nullptr));
        label->setText(QCoreApplication::translate("add_pro", "name :", nullptr));
        label_2->setText(QCoreApplication::translate("add_pro", "consumer :", nullptr));
        label_3->setText(QCoreApplication::translate("add_pro", "type :", nullptr));
        label_4->setText(QCoreApplication::translate("add_pro", "number :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_pro: public Ui_add_pro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PRO_H
