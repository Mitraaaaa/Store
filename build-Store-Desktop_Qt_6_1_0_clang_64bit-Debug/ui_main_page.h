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
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_page
{
public:
    QAction *actionuser_s_name;
    QAction *actionGroups;
    QAction *actionMy_products;
    QAction *actionchange_user_pass;
    QAction *actionEdit_my_basket;
    QAction *actionLog_out;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *serchzone;
    QPushButton *searchbutton;
    QTreeWidget *treeWidget;
    QPushButton *details;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *addtolist;
    QPushButton *addtogroup;
    QPushButton *delete_2;
    QPushButton *edit;
    QWidget *tab_5;
    QWidget *tab_4;
    QWidget *tab_6;
    QMenuBar *menubar;
    QMenu *menuuser_s_info;
    QMenu *menuSettings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main_page)
    {
        if (main_page->objectName().isEmpty())
            main_page->setObjectName(QString::fromUtf8("main_page"));
        main_page->resize(717, 555);
        main_page->setToolButtonStyle(Qt::ToolButtonIconOnly);
        main_page->setTabShape(QTabWidget::Rounded);
        actionuser_s_name = new QAction(main_page);
        actionuser_s_name->setObjectName(QString::fromUtf8("actionuser_s_name"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/download.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionuser_s_name->setIcon(icon);
        actionGroups = new QAction(main_page);
        actionGroups->setObjectName(QString::fromUtf8("actionGroups"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/groups.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroups->setIcon(icon1);
        actionMy_products = new QAction(main_page);
        actionMy_products->setObjectName(QString::fromUtf8("actionMy_products"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/basket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMy_products->setIcon(icon2);
        actionchange_user_pass = new QAction(main_page);
        actionchange_user_pass->setObjectName(QString::fromUtf8("actionchange_user_pass"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/pass.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionchange_user_pass->setIcon(icon3);
        actionEdit_my_basket = new QAction(main_page);
        actionEdit_my_basket->setObjectName(QString::fromUtf8("actionEdit_my_basket"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_my_basket->setIcon(icon4);
        actionLog_out = new QAction(main_page);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/logout.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog_out->setIcon(icon5);
        centralwidget = new QWidget(main_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 661, 461));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(20, 20));
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(66, 13, 551, 321));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        serchzone = new QLineEdit(widget);
        serchzone->setObjectName(QString::fromUtf8("serchzone"));
        serchzone->setMaximumSize(QSize(16777215, 21));

        verticalLayout->addWidget(serchzone);

        searchbutton = new QPushButton(widget);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));
        searchbutton->setMinimumSize(QSize(75, 0));
        searchbutton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/search.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        searchbutton->setIcon(icon6);
        searchbutton->setIconSize(QSize(16, 16));
        searchbutton->setFlat(false);

        verticalLayout->addWidget(searchbutton);

        treeWidget = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        details = new QPushButton(widget);
        details->setObjectName(QString::fromUtf8("details"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("img/details.png"), QSize(), QIcon::Normal, QIcon::Off);
        details->setIcon(icon7);

        verticalLayout->addWidget(details);

        widget1 = new QWidget(tab_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(70, 340, 551, 32));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addtolist = new QPushButton(widget1);
        addtolist->setObjectName(QString::fromUtf8("addtolist"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addtolist->setIcon(icon8);

        horizontalLayout->addWidget(addtolist);

        addtogroup = new QPushButton(widget1);
        addtogroup->setObjectName(QString::fromUtf8("addtogroup"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("img/add to groups 2.png"), QSize(), QIcon::Normal, QIcon::Off);
        addtogroup->setIcon(icon9);
        addtogroup->setIconSize(QSize(18, 16));

        horizontalLayout->addWidget(addtogroup);

        delete_2 = new QPushButton(widget1);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/img/delete.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon10);

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(widget1);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setIcon(icon4);

        horizontalLayout->addWidget(edit);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        main_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 717, 24));
        menubar->setDefaultUp(false);
        menuuser_s_info = new QMenu(menubar);
        menuuser_s_info->setObjectName(QString::fromUtf8("menuuser_s_info"));
        menuuser_s_info->setTearOffEnabled(false);
        menuuser_s_info->setToolTipsVisible(true);
        menuSettings = new QMenu(menuuser_s_info);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/rec/img/download (1).jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        menuSettings->setIcon(icon11);
        main_page->setMenuBar(menubar);
        statusbar = new QStatusBar(main_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main_page->setStatusBar(statusbar);

        menubar->addAction(menuuser_s_info->menuAction());
        menuuser_s_info->addAction(actionuser_s_name);
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionGroups);
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionMy_products);
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(menuSettings->menuAction());
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionLog_out);
        menuSettings->addAction(actionchange_user_pass);
        menuSettings->addSeparator();
        menuSettings->addAction(actionEdit_my_basket);

        retranslateUi(main_page);

        tabWidget->setCurrentIndex(0);
        searchbutton->setDefault(false);


        QMetaObject::connectSlotsByName(main_page);
    } // setupUi

    void retranslateUi(QMainWindow *main_page)
    {
        main_page->setWindowTitle(QCoreApplication::translate("main_page", "MainWindow", nullptr));
        actionuser_s_name->setText(QCoreApplication::translate("main_page", "user's name", nullptr));
        actionGroups->setText(QCoreApplication::translate("main_page", "Groups", nullptr));
        actionMy_products->setText(QCoreApplication::translate("main_page", "My basket", nullptr));
#if QT_CONFIG(tooltip)
        actionMy_products->setToolTip(QCoreApplication::translate("main_page", "My basket", nullptr));
#endif // QT_CONFIG(tooltip)
        actionchange_user_pass->setText(QCoreApplication::translate("main_page", "change user &pass", nullptr));
        actionEdit_my_basket->setText(QCoreApplication::translate("main_page", "Edit my basket", nullptr));
        actionLog_out->setText(QCoreApplication::translate("main_page", "Log out", nullptr));
        serchzone->setText(QString());
        searchbutton->setText(QCoreApplication::translate("main_page", "search", nullptr));
        details->setText(QCoreApplication::translate("main_page", "show changes", nullptr));
        addtolist->setText(QCoreApplication::translate("main_page", "add to list", nullptr));
        addtogroup->setText(QCoreApplication::translate("main_page", "add to group", nullptr));
        delete_2->setText(QCoreApplication::translate("main_page", "delete", nullptr));
        edit->setText(QCoreApplication::translate("main_page", "edit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("main_page", "search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("main_page", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("main_page", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("main_page", "Page", nullptr));
        menuuser_s_info->setTitle(QCoreApplication::translate("main_page", "user's info", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("main_page", "settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_page: public Ui_main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PAGE_H
