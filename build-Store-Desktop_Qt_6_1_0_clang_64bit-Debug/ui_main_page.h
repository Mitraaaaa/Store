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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QAction *actionMain_list;
    QAction *actionGroups_2;
    QAction *actionMy_Basket;
    QAction *actionsave_changes;
    QWidget *centralwidget;
    QTabWidget *groups;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *combo_search_by_tab1;
    QComboBox *comosearchtab1;
    QLineEdit *serchzone;
    QPushButton *searchbutton;
    QTreeWidget *tree;
    QPushButton *current_list;
    QHBoxLayout *horizontalLayout;
    QPushButton *addtolist;
    QPushButton *add_mybasket;
    QPushButton *addtogroup;
    QPushButton *delete_2;
    QPushButton *edit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *combo_mainlist_sortby;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_6;
    QComboBox *combo_mainlist_sorttype;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *sort_mainlist_button;
    QWidget *tab_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comosearchtab2;
    QComboBox *combobox_searchtab2_startwith;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *searchzone_tab2;
    QPushButton *search_button_group;
    QTreeWidget *grouptree;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *deleteforgroups;
    QPushButton *change_group_name;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QComboBox *combo_groups_sortby;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_7;
    QComboBox *combo_groups_sorttype;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *sort_groups_button;
    QWidget *tab_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox_mybasket;
    QComboBox *comboBox_2_my_basket;
    QLineEdit *searchzone_mybasket;
    QPushButton *search_mybasket_tab3;
    QTreeWidget *basket_tree;
    QPushButton *current_basket;
    QHBoxLayout *horizontalLayout_6;
    QLabel *totalprice;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *update_spinbox;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *unreserved;
    QPushButton *delete_from_list;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QComboBox *combo_basket_sortby;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QComboBox *combo_basket_sorttype;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *sort_basket_button;
    QLabel *welcome;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *date_lable;
    QMenuBar *menubar;
    QMenu *menuuser_s_info;
    QMenu *chnagepass;
    QMenu *menuReset;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main_page)
    {
        if (main_page->objectName().isEmpty())
            main_page->setObjectName(QString::fromUtf8("main_page"));
        main_page->resize(733, 555);
        main_page->setMinimumSize(QSize(0, 0));
        main_page->setStyleSheet(QString::fromUtf8(""));
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/update2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset_the_list->setIcon(icon6);
        actionMain_list = new QAction(main_page);
        actionMain_list->setObjectName(QString::fromUtf8("actionMain_list"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/img/mainlist2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMain_list->setIcon(icon7);
        actionGroups_2 = new QAction(main_page);
        actionGroups_2->setObjectName(QString::fromUtf8("actionGroups_2"));
        actionGroups_2->setIcon(icon1);
        actionMy_Basket = new QAction(main_page);
        actionMy_Basket->setObjectName(QString::fromUtf8("actionMy_Basket"));
        actionMy_Basket->setIcon(icon2);
        actionsave_changes = new QAction(main_page);
        actionsave_changes->setObjectName(QString::fromUtf8("actionsave_changes"));
        centralwidget = new QWidget(main_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"    selection-background-color: rgb(255, 138, 125);\n"
"   /* color:black;*/\n"
"}\n"
"QComboBox{\n"
"backgroud-color:white;\n"
"	color:black;\n"
"	font: 13pt \"Comic Sans MS\";\n"
"}\n"
"#centralwidget\n"
"{\n"
"background: qconicalgradient(cx:0.5, cy:0.5, angle:30,\n"
"                stop:0 white stop:1 rgb(255, 132, 129))\n"
"}\n"
"QTreeWidget\n"
"{\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 white, stop: 0.4 white, stop:1 rgb(255, 157, 149));\n"
"color:black;\n"
"	font: 13pt \"Comic Sans MS\";\n"
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
"}\n"
"QLineEdit\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"font: 13pt \"Comic Sans MS\";\n"
"font: 15pt \"Papyrus\";\n"
"}\n"
""
                        "QLabel\n"
"{\n"
"	font: 15pt \"Comic Sans MS\";\n"
"	color:rgb(0, 0, 0);\n"
"}\n"
"QSpinBox\n"
"{\n"
"background-color:white;\n"
"color:black;\n"
"}"));
        groups = new QTabWidget(centralwidget);
        groups->setObjectName(QString::fromUtf8("groups"));
        groups->setGeometry(QRect(30, 40, 671, 421));
        groups->setMaximumSize(QSize(671, 421));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(14);
        font.setBold(true);
        groups->setFont(font);
        groups->setLayoutDirection(Qt::LeftToRight);
        groups->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        groups->setTabPosition(QTabWidget::North);
        groups->setTabShape(QTabWidget::Rounded);
        groups->setIconSize(QSize(20, 20));
        groups->setTabsClosable(false);
        groups->setMovable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(18, 24, 635, 354));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        combo_search_by_tab1 = new QComboBox(layoutWidget);
        combo_search_by_tab1->setObjectName(QString::fromUtf8("combo_search_by_tab1"));

        horizontalLayout_2->addWidget(combo_search_by_tab1);

        comosearchtab1 = new QComboBox(layoutWidget);
        comosearchtab1->setObjectName(QString::fromUtf8("comosearchtab1"));

        horizontalLayout_2->addWidget(comosearchtab1);

        serchzone = new QLineEdit(layoutWidget);
        serchzone->setObjectName(QString::fromUtf8("serchzone"));
        serchzone->setMaximumSize(QSize(16777215, 21));
        serchzone->setMaxLength(102767);

        horizontalLayout_2->addWidget(serchzone);

        searchbutton = new QPushButton(layoutWidget);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));
        searchbutton->setMinimumSize(QSize(75, 0));
        searchbutton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/search.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        searchbutton->setIcon(icon8);
        searchbutton->setIconSize(QSize(16, 16));
        searchbutton->setFlat(false);

        horizontalLayout_2->addWidget(searchbutton);


        verticalLayout->addLayout(horizontalLayout_2);

        tree = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QString::fromUtf8("tree"));

        verticalLayout->addWidget(tree);

        current_list = new QPushButton(layoutWidget);
        current_list->setObjectName(QString::fromUtf8("current_list"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/img/details.png"), QSize(), QIcon::Normal, QIcon::Off);
        current_list->setIcon(icon9);

        verticalLayout->addWidget(current_list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addtolist = new QPushButton(layoutWidget);
        addtolist->setObjectName(QString::fromUtf8("addtolist"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addtolist->setIcon(icon10);

        horizontalLayout->addWidget(addtolist);

        add_mybasket = new QPushButton(layoutWidget);
        add_mybasket->setObjectName(QString::fromUtf8("add_mybasket"));
        add_mybasket->setIcon(icon2);

        horizontalLayout->addWidget(add_mybasket);

        addtogroup = new QPushButton(layoutWidget);
        addtogroup->setObjectName(QString::fromUtf8("addtogroup"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/rec/img/download (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        addtogroup->setIcon(icon11);
        addtogroup->setIconSize(QSize(18, 16));

        horizontalLayout->addWidget(addtogroup);

        delete_2 = new QPushButton(layoutWidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/rec/img/delete.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon12);

        horizontalLayout->addWidget(delete_2);

        edit = new QPushButton(layoutWidget);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setIcon(icon4);

        horizontalLayout->addWidget(edit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        combo_mainlist_sortby = new QComboBox(layoutWidget);
        combo_mainlist_sortby->setObjectName(QString::fromUtf8("combo_mainlist_sortby"));

        horizontalLayout_7->addWidget(combo_mainlist_sortby);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        combo_mainlist_sorttype = new QComboBox(layoutWidget);
        combo_mainlist_sorttype->setObjectName(QString::fromUtf8("combo_mainlist_sorttype"));

        horizontalLayout_7->addWidget(combo_mainlist_sorttype);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        sort_mainlist_button = new QPushButton(layoutWidget);
        sort_mainlist_button->setObjectName(QString::fromUtf8("sort_mainlist_button"));

        horizontalLayout_7->addWidget(sort_mainlist_button);


        verticalLayout_5->addLayout(horizontalLayout_7);

        groups->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        layoutWidget1 = new QWidget(tab_5);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(17, 17, 641, 352));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comosearchtab2 = new QComboBox(layoutWidget1);
        comosearchtab2->setObjectName(QString::fromUtf8("comosearchtab2"));

        horizontalLayout_3->addWidget(comosearchtab2);

        combobox_searchtab2_startwith = new QComboBox(layoutWidget1);
        combobox_searchtab2_startwith->setObjectName(QString::fromUtf8("combobox_searchtab2_startwith"));

        horizontalLayout_3->addWidget(combobox_searchtab2_startwith);

        horizontalSpacer_2 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        searchzone_tab2 = new QLineEdit(layoutWidget1);
        searchzone_tab2->setObjectName(QString::fromUtf8("searchzone_tab2"));

        horizontalLayout_3->addWidget(searchzone_tab2);

        search_button_group = new QPushButton(layoutWidget1);
        search_button_group->setObjectName(QString::fromUtf8("search_button_group"));
        search_button_group->setIcon(icon8);

        horizontalLayout_3->addWidget(search_button_group);


        verticalLayout_2->addLayout(horizontalLayout_3);

        grouptree = new QTreeWidget(layoutWidget1);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        grouptree->setHeaderItem(__qtreewidgetitem1);
        grouptree->setObjectName(QString::fromUtf8("grouptree"));

        verticalLayout_2->addWidget(grouptree);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setIcon(icon1);

        verticalLayout_2->addWidget(pushButton_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        deleteforgroups = new QPushButton(layoutWidget1);
        deleteforgroups->setObjectName(QString::fromUtf8("deleteforgroups"));
        deleteforgroups->setIcon(icon12);

        horizontalLayout_4->addWidget(deleteforgroups);

        change_group_name = new QPushButton(layoutWidget1);
        change_group_name->setObjectName(QString::fromUtf8("change_group_name"));
        change_group_name->setIcon(icon4);

        horizontalLayout_4->addWidget(change_group_name);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        combo_groups_sortby = new QComboBox(layoutWidget1);
        combo_groups_sortby->setObjectName(QString::fromUtf8("combo_groups_sortby"));

        horizontalLayout_9->addWidget(combo_groups_sortby);

        horizontalSpacer_9 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        combo_groups_sorttype = new QComboBox(layoutWidget1);
        combo_groups_sorttype->setObjectName(QString::fromUtf8("combo_groups_sorttype"));

        horizontalLayout_9->addWidget(combo_groups_sorttype);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        sort_groups_button = new QPushButton(layoutWidget1);
        sort_groups_button->setObjectName(QString::fromUtf8("sort_groups_button"));

        horizontalLayout_9->addWidget(sort_groups_button);


        verticalLayout_2->addLayout(horizontalLayout_9);

        groups->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        layoutWidget2 = new QWidget(tab_4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 631, 352));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBox_mybasket = new QComboBox(layoutWidget2);
        comboBox_mybasket->setObjectName(QString::fromUtf8("comboBox_mybasket"));

        horizontalLayout_5->addWidget(comboBox_mybasket);

        comboBox_2_my_basket = new QComboBox(layoutWidget2);
        comboBox_2_my_basket->setObjectName(QString::fromUtf8("comboBox_2_my_basket"));

        horizontalLayout_5->addWidget(comboBox_2_my_basket);

        searchzone_mybasket = new QLineEdit(layoutWidget2);
        searchzone_mybasket->setObjectName(QString::fromUtf8("searchzone_mybasket"));

        horizontalLayout_5->addWidget(searchzone_mybasket);

        search_mybasket_tab3 = new QPushButton(layoutWidget2);
        search_mybasket_tab3->setObjectName(QString::fromUtf8("search_mybasket_tab3"));

        horizontalLayout_5->addWidget(search_mybasket_tab3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        basket_tree = new QTreeWidget(layoutWidget2);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QString::fromUtf8("1"));
        basket_tree->setHeaderItem(__qtreewidgetitem2);
        basket_tree->setObjectName(QString::fromUtf8("basket_tree"));

        verticalLayout_3->addWidget(basket_tree);

        current_basket = new QPushButton(layoutWidget2);
        current_basket->setObjectName(QString::fromUtf8("current_basket"));
        current_basket->setIcon(icon2);

        verticalLayout_3->addWidget(current_basket);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        totalprice = new QLabel(layoutWidget2);
        totalprice->setObjectName(QString::fromUtf8("totalprice"));

        horizontalLayout_6->addWidget(totalprice);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        update_spinbox = new QPushButton(layoutWidget2);
        update_spinbox->setObjectName(QString::fromUtf8("update_spinbox"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/rec/img/update3.png"), QSize(), QIcon::Normal, QIcon::Off);
        update_spinbox->setIcon(icon13);

        horizontalLayout_6->addWidget(update_spinbox);

        spinBox = new QSpinBox(layoutWidget2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(10000);

        horizontalLayout_6->addWidget(spinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        unreserved = new QPushButton(layoutWidget2);
        unreserved->setObjectName(QString::fromUtf8("unreserved"));

        horizontalLayout_6->addWidget(unreserved);

        delete_from_list = new QPushButton(layoutWidget2);
        delete_from_list->setObjectName(QString::fromUtf8("delete_from_list"));
        delete_from_list->setIcon(icon12);

        horizontalLayout_6->addWidget(delete_from_list);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        combo_basket_sortby = new QComboBox(layoutWidget2);
        combo_basket_sortby->setObjectName(QString::fromUtf8("combo_basket_sortby"));

        horizontalLayout_10->addWidget(combo_basket_sortby);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        combo_basket_sorttype = new QComboBox(layoutWidget2);
        combo_basket_sorttype->setObjectName(QString::fromUtf8("combo_basket_sorttype"));

        horizontalLayout_10->addWidget(combo_basket_sorttype);

        horizontalSpacer_10 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        sort_basket_button = new QPushButton(layoutWidget2);
        sort_basket_button->setObjectName(QString::fromUtf8("sort_basket_button"));

        horizontalLayout_10->addWidget(sort_basket_button);


        verticalLayout_3->addLayout(horizontalLayout_10);

        groups->addTab(tab_4, QString());
        welcome = new QLabel(centralwidget);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(30, 20, 291, 16));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        date_lable = new QLabel(centralwidget);
        date_lable->setObjectName(QString::fromUtf8("date_lable"));
        date_lable->setGeometry(QRect(519, 20, 161, 20));
        main_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 733, 24));
        menubar->setDefaultUp(false);
        menuuser_s_info = new QMenu(menubar);
        menuuser_s_info->setObjectName(QString::fromUtf8("menuuser_s_info"));
        menuuser_s_info->setTearOffEnabled(false);
        menuuser_s_info->setToolTipsVisible(true);
        chnagepass = new QMenu(menuuser_s_info);
        chnagepass->setObjectName(QString::fromUtf8("chnagepass"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/rec/img/download (1).jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        chnagepass->setIcon(icon14);
        menuReset = new QMenu(menuuser_s_info);
        menuReset->setObjectName(QString::fromUtf8("menuReset"));
        main_page->setMenuBar(menubar);
        statusbar = new QStatusBar(main_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main_page->setStatusBar(statusbar);

        menubar->addAction(menuuser_s_info->menuAction());
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(chnagepass->menuAction());
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(menuReset->menuAction());
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionLog_out);
        menuuser_s_info->addSeparator();
        menuuser_s_info->addAction(actionsave_changes);
        chnagepass->addAction(actionchange_user_pass);
        chnagepass->addSeparator();
        menuReset->addAction(actionMain_list);
        menuReset->addSeparator();
        menuReset->addAction(actionGroups_2);
        menuReset->addSeparator();
        menuReset->addAction(actionMy_Basket);
        menuReset->addSeparator();

        retranslateUi(main_page);

        groups->setCurrentIndex(0);
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
        actionchange_user_pass->setText(QCoreApplication::translate("main_page", "change password", nullptr));
        actionEdit_my_basket->setText(QCoreApplication::translate("main_page", "Edit my basket", nullptr));
        actionLog_out->setText(QCoreApplication::translate("main_page", "Log out", nullptr));
        actionReset_the_list->setText(QCoreApplication::translate("main_page", "Reset the list", nullptr));
        actionMain_list->setText(QCoreApplication::translate("main_page", "Main List", nullptr));
        actionGroups_2->setText(QCoreApplication::translate("main_page", "Groups", nullptr));
        actionMy_Basket->setText(QCoreApplication::translate("main_page", "My Basket", nullptr));
        actionsave_changes->setText(QCoreApplication::translate("main_page", "save changes", nullptr));
        comosearchtab1->setCurrentText(QString());
        serchzone->setText(QString());
        serchzone->setPlaceholderText(QCoreApplication::translate("main_page", "search here", nullptr));
        searchbutton->setText(QCoreApplication::translate("main_page", "search", nullptr));
        current_list->setText(QCoreApplication::translate("main_page", "current list", nullptr));
        addtolist->setText(QCoreApplication::translate("main_page", "add to list", nullptr));
        add_mybasket->setText(QCoreApplication::translate("main_page", "add to mybasket", nullptr));
        addtogroup->setText(QCoreApplication::translate("main_page", "add to group", nullptr));
        delete_2->setText(QCoreApplication::translate("main_page", "delete", nullptr));
        edit->setText(QCoreApplication::translate("main_page", "edit", nullptr));
        label->setText(QCoreApplication::translate("main_page", "sort by :", nullptr));
        label_6->setText(QCoreApplication::translate("main_page", "sort type :", nullptr));
        sort_mainlist_button->setText(QCoreApplication::translate("main_page", "sort", nullptr));
        groups->setTabText(groups->indexOf(tab_3), QCoreApplication::translate("main_page", "Main List", nullptr));
        searchzone_tab2->setPlaceholderText(QCoreApplication::translate("main_page", "search  here", nullptr));
        search_button_group->setText(QCoreApplication::translate("main_page", "saerch", nullptr));
        pushButton_2->setText(QCoreApplication::translate("main_page", "current group_list", nullptr));
        deleteforgroups->setText(QCoreApplication::translate("main_page", "delete", nullptr));
        change_group_name->setText(QCoreApplication::translate("main_page", "change Group's name", nullptr));
        label_4->setText(QCoreApplication::translate("main_page", "sort by :", nullptr));
        label_7->setText(QCoreApplication::translate("main_page", "sort type :", nullptr));
        sort_groups_button->setText(QCoreApplication::translate("main_page", "sort", nullptr));
        groups->setTabText(groups->indexOf(tab_5), QCoreApplication::translate("main_page", "Groups", nullptr));
        searchzone_mybasket->setText(QString());
        searchzone_mybasket->setPlaceholderText(QCoreApplication::translate("main_page", "search here", nullptr));
        search_mybasket_tab3->setText(QCoreApplication::translate("main_page", "search", nullptr));
        current_basket->setText(QCoreApplication::translate("main_page", "current basket", nullptr));
        totalprice->setText(QString());
        label_2->setText(QCoreApplication::translate("main_page", "<html><head/><body><p><span style=\" color:#ff0a00;\">$</span></p></body></html>", nullptr));
        update_spinbox->setText(QCoreApplication::translate("main_page", "update", nullptr));
        spinBox->setPrefix(QString());
        unreserved->setText(QCoreApplication::translate("main_page", "unreserve", nullptr));
        delete_from_list->setText(QCoreApplication::translate("main_page", "delete", nullptr));
        label_5->setText(QCoreApplication::translate("main_page", "sort by :", nullptr));
        label_8->setText(QCoreApplication::translate("main_page", "sort type :", nullptr));
        sort_basket_button->setText(QCoreApplication::translate("main_page", "sort", nullptr));
        groups->setTabText(groups->indexOf(tab_4), QCoreApplication::translate("main_page", "Your Basket", nullptr));
        welcome->setText(QString());
        date_lable->setText(QString());
        menuuser_s_info->setTitle(QCoreApplication::translate("main_page", "user's info", nullptr));
        chnagepass->setTitle(QCoreApplication::translate("main_page", "settings", nullptr));
        menuReset->setTitle(QCoreApplication::translate("main_page", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_page: public Ui_main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PAGE_H
