/********************************************************************************
** Form generated from reading UI file 'change_password.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_PASSWORD_H
#define UI_CHANGE_PASSWORD_H

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

class Ui_change_password
{
public:
    QPushButton *changepassbutton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditcurrentuser;
    QLineEdit *lineEditnew_pass;

    void setupUi(QDialog *change_password)
    {
        if (change_password->objectName().isEmpty())
            change_password->setObjectName(QString::fromUtf8("change_password"));
        change_password->resize(400, 300);
        changepassbutton = new QPushButton(change_password);
        changepassbutton->setObjectName(QString::fromUtf8("changepassbutton"));
        changepassbutton->setGeometry(QRect(140, 220, 113, 32));
        widget = new QWidget(change_password);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(19, 80, 371, 111));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditcurrentuser = new QLineEdit(widget);
        lineEditcurrentuser->setObjectName(QString::fromUtf8("lineEditcurrentuser"));

        verticalLayout->addWidget(lineEditcurrentuser);

        lineEditnew_pass = new QLineEdit(widget);
        lineEditnew_pass->setObjectName(QString::fromUtf8("lineEditnew_pass"));

        verticalLayout->addWidget(lineEditnew_pass);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(change_password);

        QMetaObject::connectSlotsByName(change_password);
    } // setupUi

    void retranslateUi(QDialog *change_password)
    {
        change_password->setWindowTitle(QCoreApplication::translate("change_password", "Dialog", nullptr));
        changepassbutton->setText(QCoreApplication::translate("change_password", "change", nullptr));
        label->setText(QCoreApplication::translate("change_password", "Enter your current username :", nullptr));
        label_2->setText(QCoreApplication::translate("change_password", "Enter your new password :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_password: public Ui_change_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_PASSWORD_H
