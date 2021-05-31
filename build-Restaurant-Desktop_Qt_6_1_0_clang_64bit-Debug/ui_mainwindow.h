/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *welcomepage;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLineEdit *username;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QPushButton *reload;
    QPushButton *login;
    QPushButton *signup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(442, 463);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        welcomepage = new QGroupBox(centralwidget);
        welcomepage->setObjectName(QString::fromUtf8("welcomepage"));
        welcomepage->setGeometry(QRect(50, 10, 301, 351));
        verticalLayout = new QVBoxLayout(welcomepage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(welcomepage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        username = new QLineEdit(welcomepage);
        username->setObjectName(QString::fromUtf8("username"));

        verticalLayout->addWidget(username);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(welcomepage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        password = new QLineEdit(welcomepage);
        password->setObjectName(QString::fromUtf8("password"));

        verticalLayout->addWidget(password);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        reload = new QPushButton(welcomepage);
        reload->setObjectName(QString::fromUtf8("reload"));

        verticalLayout->addWidget(reload);

        login = new QPushButton(welcomepage);
        login->setObjectName(QString::fromUtf8("login"));

        verticalLayout->addWidget(login);

        signup = new QPushButton(welcomepage);
        signup->setObjectName(QString::fromUtf8("signup"));

        verticalLayout->addWidget(signup);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 442, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        welcomepage->setTitle(QCoreApplication::translate("MainWindow", "WELCOME!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "username :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password :", nullptr));
        reload->setText(QCoreApplication::translate("MainWindow", "reload", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signup->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
