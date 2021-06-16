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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editpage
{
public:
    QPushButton *editbutton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *editname;
    QLabel *editconsumer;
    QLabel *edittype;
    QLabel *editnumber;
    QLabel *editprice;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QLineEdit *lineEditconsmer;
    QLineEdit *lineEdittype;
    QLineEdit *lineEditnumber;
    QLineEdit *lineEditprice;

    void setupUi(QDialog *editpage)
    {
        if (editpage->objectName().isEmpty())
            editpage->setObjectName(QString::fromUtf8("editpage"));
        editpage->resize(465, 327);
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
        editbutton->setGeometry(QRect(180, 280, 113, 32));
        layoutWidget = new QWidget(editpage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 341, 231));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editname = new QLabel(layoutWidget);
        editname->setObjectName(QString::fromUtf8("editname"));

        verticalLayout->addWidget(editname);

        editconsumer = new QLabel(layoutWidget);
        editconsumer->setObjectName(QString::fromUtf8("editconsumer"));

        verticalLayout->addWidget(editconsumer);

        edittype = new QLabel(layoutWidget);
        edittype->setObjectName(QString::fromUtf8("edittype"));

        verticalLayout->addWidget(edittype);

        editnumber = new QLabel(layoutWidget);
        editnumber->setObjectName(QString::fromUtf8("editnumber"));

        verticalLayout->addWidget(editnumber);

        editprice = new QLabel(layoutWidget);
        editprice->setObjectName(QString::fromUtf8("editprice"));

        verticalLayout->addWidget(editprice);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name = new QLineEdit(layoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        lineEditconsmer = new QLineEdit(layoutWidget);
        lineEditconsmer->setObjectName(QString::fromUtf8("lineEditconsmer"));

        verticalLayout_2->addWidget(lineEditconsmer);

        lineEdittype = new QLineEdit(layoutWidget);
        lineEdittype->setObjectName(QString::fromUtf8("lineEdittype"));

        verticalLayout_2->addWidget(lineEdittype);

        lineEditnumber = new QLineEdit(layoutWidget);
        lineEditnumber->setObjectName(QString::fromUtf8("lineEditnumber"));

        verticalLayout_2->addWidget(lineEditnumber);

        lineEditprice = new QLineEdit(layoutWidget);
        lineEditprice->setObjectName(QString::fromUtf8("lineEditprice"));

        verticalLayout_2->addWidget(lineEditprice);


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
        lineEditnumber->setText(QString());
        lineEditprice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editpage: public Ui_editpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPAGE_H
