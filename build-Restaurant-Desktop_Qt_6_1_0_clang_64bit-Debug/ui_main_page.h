/********************************************************************************
** Form generated from reading UI file 'main_page.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PAGE_H
#define UI_MAIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_page
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main_page)
    {
        if (main_page->objectName().isEmpty())
            main_page->setObjectName(QString::fromUtf8("main_page"));
        main_page->resize(574, 395);
        centralwidget = new QWidget(main_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        main_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 574, 24));
        main_page->setMenuBar(menubar);
        statusbar = new QStatusBar(main_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main_page->setStatusBar(statusbar);

        retranslateUi(main_page);

        QMetaObject::connectSlotsByName(main_page);
    } // setupUi

    void retranslateUi(QMainWindow *main_page)
    {
        main_page->setWindowTitle(QCoreApplication::translate("main_page", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_page: public Ui_main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PAGE_H
