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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_pro
{
public:
    QPushButton *additem;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *name_2;
    QLabel *consumer_2;
    QLabel *type_2;
    QLabel *number_2;
    QLabel *price_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QSpacerItem *verticalSpacer;
    QLineEdit *consumer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *type;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *number;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *price;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *year;
    QLabel *label_2;
    QLineEdit *month;
    QLabel *label_3;
    QLineEdit *day;

    void setupUi(QDialog *add_pro)
    {
        if (add_pro->objectName().isEmpty())
            add_pro->setObjectName(QString::fromUtf8("add_pro"));
        add_pro->resize(455, 313);
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
        additem = new QPushButton(add_pro);
        additem->setObjectName(QString::fromUtf8("additem"));
        additem->setGeometry(QRect(180, 270, 151, 32));
        widget = new QWidget(add_pro);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 361, 231));
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

        price_2 = new QLabel(widget);
        price_2->setObjectName(QString::fromUtf8("price_2"));

        verticalLayout->addWidget(price_2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        consumer = new QLineEdit(widget);
        consumer->setObjectName(QString::fromUtf8("consumer"));

        verticalLayout_2->addWidget(consumer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        type = new QLineEdit(widget);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout_2->addWidget(type);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        number = new QLineEdit(widget);
        number->setObjectName(QString::fromUtf8("number"));

        verticalLayout_2->addWidget(number);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        price = new QLineEdit(widget);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout_2->addWidget(price);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        year = new QLineEdit(widget);
        year->setObjectName(QString::fromUtf8("year"));

        horizontalLayout_2->addWidget(year);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        month = new QLineEdit(widget);
        month->setObjectName(QString::fromUtf8("month"));

        horizontalLayout_2->addWidget(month);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        day = new QLineEdit(widget);
        day->setObjectName(QString::fromUtf8("day"));

        horizontalLayout_2->addWidget(day);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(add_pro);

        QMetaObject::connectSlotsByName(add_pro);
    } // setupUi

    void retranslateUi(QDialog *add_pro)
    {
        add_pro->setWindowTitle(QCoreApplication::translate("add_pro", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        add_pro->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        add_pro->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        add_pro->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        additem->setText(QCoreApplication::translate("add_pro", "Add", nullptr));
        name_2->setText(QCoreApplication::translate("add_pro", "name :", nullptr));
        consumer_2->setText(QCoreApplication::translate("add_pro", "consumer :", nullptr));
        type_2->setText(QCoreApplication::translate("add_pro", "type :", nullptr));
        number_2->setText(QCoreApplication::translate("add_pro", "number :", nullptr));
        price_2->setText(QCoreApplication::translate("add_pro", "price", nullptr));
        label->setText(QCoreApplication::translate("add_pro", "expire date :", nullptr));
#if QT_CONFIG(tooltip)
        year->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        year->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        year->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        year->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        year->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        year->setInputMask(QString());
        year->setText(QString());
        year->setPlaceholderText(QCoreApplication::translate("add_pro", "yyyy", nullptr));
        label_2->setText(QCoreApplication::translate("add_pro", "/", nullptr));
        month->setInputMask(QString());
        month->setPlaceholderText(QCoreApplication::translate("add_pro", "MM", nullptr));
        label_3->setText(QCoreApplication::translate("add_pro", "/", nullptr));
        day->setPlaceholderText(QCoreApplication::translate("add_pro", "dd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_pro: public Ui_add_pro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PRO_H
