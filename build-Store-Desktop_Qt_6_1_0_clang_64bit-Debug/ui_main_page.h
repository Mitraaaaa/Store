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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QAction *actionReset_the_list;
    QWidget *centralwidget;
    QTabWidget *groups;
    QWidget *tab_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QLineEdit *serchzone;
    QPushButton *searchbutton;
    QTreeWidget *tree;
    QPushButton *showchanges;
    QHBoxLayout *horizontalLayout;
    QPushButton *addtolist;
    QPushButton *addtogroup;
    QPushButton *delete_2;
    QPushButton *edit;
    QWidget *tab_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTreeWidget *grouptree;
    QPushButton *pushButton_2;
    QPushButton *deleteforgroups;
    QWidget *tab_4;
    QWidget *tab_6;
    QMenuBar *menubar;
    QMenu *menuuser_s_info;
    QMenu *changeuserpass;
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
        actionReset_the_list = new QAction(main_page);
        actionReset_the_list->setObjectName(QString::fromUtf8("actionReset_the_list"));
        centralwidget = new QWidget(main_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groups = new QTabWidget(centralwidget);
        groups->setObjectName(QString::fromUtf8("groups"));
        groups->setGeometry(QRect(40, 10, 641, 421));
        groups->setLayoutDirection(Qt::LeftToRight);
        groups->setTabPosition(QTabWidget::North);
        groups->setTabShape(QTabWidget::Rounded);
        groups->setIconSize(QSize(20, 20));
        groups->setTabsClosable(false);
        groups->setMovable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(46, 31, 571, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        serchzone = new QLineEdit(widget);
        serchzone->setObjectName(QString::fromUtf8("serchzone"));
        serchzone->setMaximumSize(QSize(16777215, 21));
        serchzone->setMaxLength(102767);

        horizontalLayout_2->addWidget(serchzone);

        searchbutton = new QPushButton(widget);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));
        searchbutton->setMinimumSize(QSize(75, 0));
        searchbutton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/search.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        searchbutton->setIcon(icon6);
        searchbutton->setIconSize(QSize(16, 16));
        searchbutton->setFlat(false);

        horizontalLayout_2->addWidget(searchbutton);


        verticalLayout->addLayout(horizontalLayout_2);

        tree = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QString::fromUtf8("tree"));

        verticalLayout->addWidget(tree);

        showchanges = new QPushButton(widget);
        showchanges->setObjectName(QString::fromUtf8("showchanges"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("img/details.png"), QSize(), QIcon::Normal, QIcon::Off);
        showchanges->setIcon(icon7);

        verticalLayout->addWidget(showchanges);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addtolist = new QPushButton(widget);
        addtolist->setObjectName(QString::fromUtf8("addtolist"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addtolist->setIcon(icon8);

        horizontalLayout->addWidget(addtolist);

        addtogroup = new QPushButton(widget);
        addtogroup->setObjectName(QString::fromUtf8("addtogroup"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("img/add to groups 2.png"), QSize(), QIcon::Normal, QIcon::Off);
        addtogroup->setIcon(icon9);
        addtogroup->setIconSize(QSize(18, 16));

        horizontalLayout->addWidget(addtogroup);

        delete_2 = new QPushButton(widget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/img/delete.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon10);

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(widget);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setIcon(icon4);

        horizontalLayout->addWidget(edit);


        verticalLayout->addLayout(horizontalLayout);

        groups->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        widget1 = new QWidget(tab_5);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(37, 36, 571, 341));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        horizontalSpacer_2 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        grouptree = new QTreeWidget(widget1);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        grouptree->setHeaderItem(__qtreewidgetitem1);
        grouptree->setObjectName(QString::fromUtf8("grouptree"));

        verticalLayout_2->addWidget(grouptree);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        deleteforgroups = new QPushButton(widget1);
        deleteforgroups->setObjectName(QString::fromUtf8("deleteforgroups"));

        verticalLayout_2->addWidget(deleteforgroups);

        groups->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groups->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        groups->addTab(tab_6, QString());
        main_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 717, 24));
        menubar->setDefaultUp(false);
        menuuser_s_info = new QMenu(menubar);
        menuuser_s_info->setObjectName(QString::fromUtf8("menuuser_s_info"));
        menuuser_s_info->setTearOffEnabled(false);
        menuuser_s_info->setToolTipsVisible(true);
        changeuserpass = new QMenu(menuuser_s_info);
        changeuserpass->setObjectName(QString::fromUtf8("changeuserpass"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/rec/img/download (1).jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        changeuserpass->setIcon(icon11);
        main_page->setMenuBar(menubar);
        statusbar = new QStatusBar(main_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main_page->setStatusBar(statusbar);

        menubar->addAction(menuuser_s_info->menuAction());
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionGroups);
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionMy_products);
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(changeuserpass->menuAction());
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionLog_out);
        changeuserpass->addAction(actionchange_user_pass);
        changeuserpass->addSeparator();
        changeuserpass->addAction(actionEdit_my_basket);
        changeuserpass->addSeparator();
        changeuserpass->addAction(actionReset_the_list);

        retranslateUi(main_page);

        groups->setCurrentIndex(1);
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
        actionReset_the_list->setText(QCoreApplication::translate("main_page", "Reset the list", nullptr));
        comboBox->setCurrentText(QString());
        serchzone->setText(QString());
        searchbutton->setText(QCoreApplication::translate("main_page", "search", nullptr));
        showchanges->setText(QCoreApplication::translate("main_page", "show changes", nullptr));
        addtolist->setText(QCoreApplication::translate("main_page", "add to list", nullptr));
        addtogroup->setText(QCoreApplication::translate("main_page", "add to group", nullptr));
        delete_2->setText(QCoreApplication::translate("main_page", "delete", nullptr));
        edit->setText(QCoreApplication::translate("main_page", "edit", nullptr));
        groups->setTabText(groups->indexOf(tab_3), QCoreApplication::translate("main_page", "Search", nullptr));
        pushButton->setText(QCoreApplication::translate("main_page", "saerch", nullptr));
        pushButton_2->setText(QCoreApplication::translate("main_page", "show", nullptr));
        deleteforgroups->setText(QCoreApplication::translate("main_page", "delete", nullptr));
        groups->setTabText(groups->indexOf(tab_5), QCoreApplication::translate("main_page", "Groups", nullptr));
        groups->setTabText(groups->indexOf(tab_4), QCoreApplication::translate("main_page", "Tab 2", nullptr));
        groups->setTabText(groups->indexOf(tab_6), QCoreApplication::translate("main_page", "Page", nullptr));
        menuuser_s_info->setTitle(QCoreApplication::translate("main_page", "user's info", nullptr));
        changeuserpass->setTitle(QCoreApplication::translate("main_page", "settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_page: public Ui_main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PAGE_H
