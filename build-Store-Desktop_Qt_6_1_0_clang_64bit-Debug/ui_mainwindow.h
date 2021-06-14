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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *welcomepage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *login;
    QPushButton *signup;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(394, 464);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("\n"
"#login\n"
"{\n"
" background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 white, stop: 0.4 rgb(155, 154, 156) stop:0.8 rgb(255, 163, 168));\n"
"	font: 75 14pt \"Comic Sans MS\";\n"
"}\n"
"#signup\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 white, stop: 0.2 rgb(255, 163, 168) , stop:0.7 rgb(155, 154, 156));\n"
"	\n"
"	font: 75 14pt \"Comic Sans MS\";\n"
"}\n"
"QLineEdit\n"
"{\n"
"	\n"
"	font: 15pt \"Papyrus\";\n"
"}\n"
"#centralwidget\n"
"{\n"
"background: qconicalgradient(cx:0.5, cy:0.5, angle:30,\n"
"                stop:0 white stop:1 rgb(255, 132, 129))\n"
"}"));
        welcomepage = new QGroupBox(centralwidget);
        welcomepage->setObjectName(QString::fromUtf8("welcomepage"));
        welcomepage->setGeometry(QRect(12, 0, 361, 411));
        welcomepage->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(welcomepage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 270, 291, 66));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        login = new QPushButton(layoutWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8(""));
        login->setAutoDefault(false);

        verticalLayout->addWidget(login);

        signup = new QPushButton(layoutWidget);
        signup->setObjectName(QString::fromUtf8("signup"));

        verticalLayout->addWidget(signup);

        layoutWidget1 = new QWidget(welcomepage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 40, 291, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Comic Sans MS\";\n"
""));

        horizontalLayout->addWidget(label);

        username = new QLineEdit(layoutWidget1);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout->addWidget(username);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Comic Sans MS\";"));

        horizontalLayout_2->addWidget(label_2);

        password = new QLineEdit(layoutWidget1);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_2->addWidget(password);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 394, 24));
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
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signup->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "username :", nullptr));
        username->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "password :", nullptr));
        password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
