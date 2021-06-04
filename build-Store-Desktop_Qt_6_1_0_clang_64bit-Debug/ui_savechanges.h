/********************************************************************************
** Form generated from reading UI file 'savechanges.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECHANGES_H
#define UI_SAVECHANGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_savechanges
{
public:
    QDialogButtonBox *save;
    QLineEdit *lineEdit;

    void setupUi(QDialog *savechanges)
    {
        if (savechanges->objectName().isEmpty())
            savechanges->setObjectName(QString::fromUtf8("savechanges"));
        savechanges->resize(400, 300);
        save = new QDialogButtonBox(savechanges);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(110, 150, 164, 32));
        save->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(savechanges);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 100, 261, 31));

        retranslateUi(savechanges);

        QMetaObject::connectSlotsByName(savechanges);
    } // setupUi

    void retranslateUi(QDialog *savechanges)
    {
        savechanges->setWindowTitle(QCoreApplication::translate("savechanges", "Dialog", nullptr));
        lineEdit->setText(QCoreApplication::translate("savechanges", "Save changes for the next time you login?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class savechanges: public Ui_savechanges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECHANGES_H
