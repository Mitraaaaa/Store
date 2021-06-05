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
    QWidget *widget;
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
        editbutton = new QPushButton(editpage);
        editbutton->setObjectName(QString::fromUtf8("editbutton"));
        editbutton->setGeometry(QRect(180, 280, 113, 32));
        widget = new QWidget(editpage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 40, 341, 231));
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


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        lineEditconsmer = new QLineEdit(widget);
        lineEditconsmer->setObjectName(QString::fromUtf8("lineEditconsmer"));

        verticalLayout_2->addWidget(lineEditconsmer);

        lineEdittype = new QLineEdit(widget);
        lineEdittype->setObjectName(QString::fromUtf8("lineEdittype"));

        verticalLayout_2->addWidget(lineEdittype);

        lineEditnumber = new QLineEdit(widget);
        lineEditnumber->setObjectName(QString::fromUtf8("lineEditnumber"));

        verticalLayout_2->addWidget(lineEditnumber);

        lineEditprice = new QLineEdit(widget);
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
        editname->setText(QCoreApplication::translate("editpage", "name", nullptr));
        editconsumer->setText(QCoreApplication::translate("editpage", "consumer", nullptr));
        edittype->setText(QCoreApplication::translate("editpage", "type", nullptr));
        editnumber->setText(QCoreApplication::translate("editpage", "number", nullptr));
        editprice->setText(QCoreApplication::translate("editpage", "price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editpage: public Ui_editpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPAGE_H
