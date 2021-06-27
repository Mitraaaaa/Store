/********************************************************************************
** Form generated from reading UI file 'editpage.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPAGE_H
#define UI_EDITPAGE_H

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

class Ui_editpage
{
public:
    QPushButton *editbutton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *editname;
    QLabel *editconsumer;
    QLabel *edittype;
    QLabel *editnumber;
    QLabel *editprice;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEditconsmer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdittype;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEditnumber;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEditprice;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *year2;
    QLabel *label_2;
    QLineEdit *month2;
    QLabel *label_3;
    QLineEdit *day2;

    void setupUi(QDialog *editpage)
    {
        if (editpage->objectName().isEmpty())
            editpage->setObjectName(QString::fromUtf8("editpage"));
        editpage->resize(455, 313);
        editpage->setStyleSheet(QString::fromUtf8("QDialog\n"
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
"	font: 75 17pt \"Comic Sans MS\";\n"
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
        editbutton = new QPushButton(editpage);
        editbutton->setObjectName(QString::fromUtf8("editbutton"));
        editbutton->setGeometry(QRect(210, 270, 131, 32));
        widget = new QWidget(editpage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 30, 381, 230));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editname = new QLabel(widget);
        editname->setObjectName(QString::fromUtf8("editname"));

        verticalLayout->addWidget(editname);

        editconsumer = new QLabel(widget);
        editconsumer->setObjectName(QString::fromUtf8("editconsumer"));

        verticalLayout->addWidget(editconsumer);

        edittype = new QLabel(widget);
        edittype->setObjectName(QString::fromUtf8("edittype"));

        verticalLayout->addWidget(edittype);

        editnumber = new QLabel(widget);
        editnumber->setObjectName(QString::fromUtf8("editnumber"));

        verticalLayout->addWidget(editnumber);

        editprice = new QLabel(widget);
        editprice->setObjectName(QString::fromUtf8("editprice"));

        verticalLayout->addWidget(editprice);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        lineEditconsmer = new QLineEdit(widget);
        lineEditconsmer->setObjectName(QString::fromUtf8("lineEditconsmer"));

        verticalLayout_2->addWidget(lineEditconsmer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        lineEdittype = new QLineEdit(widget);
        lineEdittype->setObjectName(QString::fromUtf8("lineEdittype"));

        verticalLayout_2->addWidget(lineEdittype);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        lineEditnumber = new QLineEdit(widget);
        lineEditnumber->setObjectName(QString::fromUtf8("lineEditnumber"));

        verticalLayout_2->addWidget(lineEditnumber);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        lineEditprice = new QLineEdit(widget);
        lineEditprice->setObjectName(QString::fromUtf8("lineEditprice"));

        verticalLayout_2->addWidget(lineEditprice);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        year2 = new QLineEdit(widget);
        year2->setObjectName(QString::fromUtf8("year2"));

        horizontalLayout_2->addWidget(year2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        month2 = new QLineEdit(widget);
        month2->setObjectName(QString::fromUtf8("month2"));

        horizontalLayout_2->addWidget(month2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        day2 = new QLineEdit(widget);
        day2->setObjectName(QString::fromUtf8("day2"));

        horizontalLayout_2->addWidget(day2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(editpage);

        QMetaObject::connectSlotsByName(editpage);
    } // setupUi

    void retranslateUi(QDialog *editpage)
    {
        editpage->setWindowTitle(QCoreApplication::translate("editpage", "Dialog", nullptr));
        editbutton->setText(QCoreApplication::translate("editpage", "edit", nullptr));
        editname->setText(QCoreApplication::translate("editpage", "name :", nullptr));
        editconsumer->setText(QCoreApplication::translate("editpage", "consumer :", nullptr));
        edittype->setText(QCoreApplication::translate("editpage", "type :", nullptr));
        editnumber->setText(QCoreApplication::translate("editpage", "number :", nullptr));
        editprice->setText(QCoreApplication::translate("editpage", "price :", nullptr));
        label->setText(QCoreApplication::translate("editpage", "expire date :", nullptr));
        lineEditnumber->setText(QString());
        lineEditprice->setText(QString());
        year2->setPlaceholderText(QCoreApplication::translate("editpage", "yyyy", nullptr));
        label_2->setText(QCoreApplication::translate("editpage", "/", nullptr));
        month2->setPlaceholderText(QCoreApplication::translate("editpage", "MM", nullptr));
        label_3->setText(QCoreApplication::translate("editpage", "/", nullptr));
        day2->setPlaceholderText(QCoreApplication::translate("editpage", "dd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editpage: public Ui_editpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPAGE_H
