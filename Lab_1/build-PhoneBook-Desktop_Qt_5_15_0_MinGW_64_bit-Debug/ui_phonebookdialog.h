/********************************************************************************
** Form generated from reading UI file 'phonebookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEBOOKDIALOG_H
#define UI_PHONEBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneBookDialog
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *PhoneBookDialog)
    {
        if (PhoneBookDialog->objectName().isEmpty())
            PhoneBookDialog->setObjectName(QString::fromUtf8("PhoneBookDialog"));
        PhoneBookDialog->resize(800, 600);
        tableWidget = new QTableWidget(PhoneBookDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 50, 541, 361));

        retranslateUi(PhoneBookDialog);

        QMetaObject::connectSlotsByName(PhoneBookDialog);
    } // setupUi

    void retranslateUi(QDialog *PhoneBookDialog)
    {
        PhoneBookDialog->setWindowTitle(QCoreApplication::translate("PhoneBookDialog", "PhoneBookDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhoneBookDialog: public Ui_PhoneBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOKDIALOG_H
