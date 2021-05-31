/********************************************************************************
** Form generated from reading UI file 'read_files.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READ_FILES_H
#define UI_READ_FILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_read_files
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *read_files)
    {
        if (read_files->objectName().isEmpty())
            read_files->setObjectName(QString::fromUtf8("read_files"));
        read_files->resize(400, 300);
        textBrowser = new QTextBrowser(read_files);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 40, 256, 192));
        pushButton = new QPushButton(read_files);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(62, 250, 261, 32));

        retranslateUi(read_files);

        QMetaObject::connectSlotsByName(read_files);
    } // setupUi

    void retranslateUi(QDialog *read_files)
    {
        read_files->setWindowTitle(QCoreApplication::translate("read_files", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("read_files", "show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class read_files: public Ui_read_files {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READ_FILES_H
