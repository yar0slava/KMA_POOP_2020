#include "phonebook.h"
//#include "ui_phonebookdialog.h"
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>

#include <iostream>
using namespace std;

PhoneBook::PhoneBook(QWidget *parent)
    : QWidget(parent)
{
    QLabel *nameLabel = new QLabel(tr("Name:"));
    nameLine = new QLineEdit;
    nameLine->setReadOnly(true);

    QLabel *phoneLabel = new QLabel(tr("Phone:"));
    phoneText = new QTextEdit;
    phoneText->setReadOnly(true);

    addButton = new QPushButton(tr("&Add"));
    addButton->show();
    submitButton = new QPushButton(tr("&Submit"));
    submitButton->hide();
    cancelButton = new QPushButton(tr("&Cancel"));
    cancelButton->hide();
    nextButton = new QPushButton(tr("&Next"));
    nextButton->setEnabled(false);
    previousButton = new QPushButton(tr("&Previous"));
    previousButton->setEnabled(false);
    removeButton = new QPushButton(tr("&Remove"));
    removeButton->setEnabled(false);
    findByNameButton = new QPushButton(tr("&Find by name"));
    findByNameButton->setEnabled(false);
    findByPhoneButton= new QPushButton(tr("&Find by phone"));
    findByPhoneButton->setEnabled(false);

    fbNamedialog = new FindByNameDialog(this);
    fbPhonedialog = new FindByPhoneDialog(this);

    connect(addButton, &QPushButton::clicked,
            this, &PhoneBook::addPhone);
    connect(submitButton, &QPushButton::clicked,
            this, &PhoneBook::submitPhone);
    connect(cancelButton, &QPushButton::clicked,
            this, &PhoneBook::cancel);
    connect(nextButton, &QPushButton::clicked,
            this, &PhoneBook::next);
    connect(previousButton, &QPushButton::clicked,
            this, &PhoneBook::previous);
    connect(removeButton, &QPushButton::clicked,
            this, &PhoneBook::removeContact);
    connect(findByNameButton, &QPushButton::clicked,
            this, &PhoneBook::findByName);
    connect(findByPhoneButton, &QPushButton::clicked,
            this, &PhoneBook::findByPhone);

    QVBoxLayout *buttonLayout1 = new QVBoxLayout;
    buttonLayout1->addWidget(addButton, Qt::AlignTop);
    buttonLayout1->addWidget(submitButton);
    buttonLayout1->addWidget(cancelButton);
    buttonLayout1->addStretch();
    buttonLayout1->addWidget(removeButton);
    buttonLayout1->addWidget(findByNameButton);
    buttonLayout1->addWidget(findByPhoneButton);

    QHBoxLayout *buttonLayout2 = new QHBoxLayout;
    buttonLayout2->addWidget(previousButton);
    buttonLayout2->addWidget(nextButton);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(nameLabel, 0, 0);
    mainLayout->addWidget(nameLine, 0, 1);
    mainLayout->addWidget(phoneLabel, 1, 0, Qt::AlignTop);
    mainLayout->addWidget(phoneText, 1, 1);
    mainLayout->addLayout(buttonLayout1, 1, 2);
    mainLayout->addLayout(buttonLayout2, 2, 1);

    setLayout(mainLayout);
    setWindowTitle(tr("Simple Phone Book"));
}

void PhoneBook::addPhone()
{
//    nextButton->setEnabled(false);
//    previousButton->setEnabled(false);

    updateInterface(AddingMode);

    oldName = nameLine->text();
    oldPhone = phoneText->toPlainText();

    nameLine->clear();
    phoneText->clear();

//    nameLine->setReadOnly(false);
//    nameLine->setFocus(Qt::OtherFocusReason);
//    phoneText->setReadOnly(false);

//    addButton->setEnabled(false);
//    submitButton->show();
//    cancelButton->show();

}

void PhoneBook::submitPhone()
{
    QString name = nameLine->text();
    QString address = phoneText->toPlainText();

    if (name.isEmpty() || address.isEmpty()) {
        QMessageBox::information(this, tr("Empty Field"),
                                 tr("Please enter a name and phone."));
        return;
    }

    if (currentMode == AddingMode) {

        if (!contacts.contains(name)) {
            contacts.insert(name, address);
            QMessageBox::information(this, tr("Add Successful"),
                                     tr("\"%1\" has been added to your phone book.").arg(name));
        } else {
            QMessageBox::information(this, tr("Add Unsuccessful"),
                                     tr("Sorry, \"%1\" is already in your phone book.").arg(name));
            return;
        }

    }

    updateInterface(NavigationMode);

    //    nameLine->setReadOnly(true);
    //    phoneText->setReadOnly(true);
    //    addButton->setEnabled(true);
    //    submitButton->hide();
    //    cancelButton->hide();

    //    int number = contacts.size();
    //    nextButton->setEnabled(number > 1);
    //    previousButton->setEnabled(number > 1);
}

void PhoneBook::cancel()
{
    nameLine->setText(oldName);
    nameLine->setReadOnly(true);

    phoneText->setText(oldPhone);
    phoneText->setReadOnly(true);

//    addButton->setEnabled(true);
//    submitButton->hide();
//    cancelButton->hide();

//    int number = contacts.size();
//    nextButton->setEnabled(number > 1);
//    previousButton->setEnabled(number > 1);

    updateInterface(NavigationMode);
}

void PhoneBook::next()
{
    QString name = nameLine->text();
    QMap<QString, QString>::iterator i = contacts.find(name);

    if (i != contacts.end())
        i++;

    if (i == contacts.end())
        i = contacts.begin();

    nameLine->setText(i.key());
    phoneText->setText(i.value());
}

void PhoneBook::previous()
{
    QString name = nameLine->text();
    QMap<QString, QString>::iterator i = contacts.find(name);

    if (i == contacts.end()){
        nameLine->clear();
        phoneText->clear();
        return;
    }

    if (i == contacts.begin())
        i = contacts.end();

    i--;
    nameLine->setText(i.key());
    phoneText->setText(i.value());
}

void PhoneBook::removeContact()
{
    QString name = nameLine->text();
    QString address = phoneText->toPlainText();

    if (contacts.contains(name)) {

        int button = QMessageBox::question(this,
                                           tr("Confirm Remove"),
                                           tr("Are you sure you want to remove \"%1\"?").arg(name),
                                           QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {

            previous();
            contacts.remove(name);

            QMessageBox::information(this, tr("Remove Successful"),
                                     tr("\"%1\" has been removed from your address book.").arg(name));
        }
    }

    updateInterface(NavigationMode);
}

void PhoneBook::updateInterface(Mode mode)
{
    currentMode = mode;

    switch (currentMode) {

    case AddingMode:

        nameLine->setReadOnly(false);
        nameLine->setFocus(Qt::OtherFocusReason);
        phoneText->setReadOnly(false);

        addButton->setEnabled(false);
        removeButton->setEnabled(false);
        findByNameButton->setEnabled(false);
        findByPhoneButton->setEnabled(false);

        nextButton->setEnabled(false);
        previousButton->setEnabled(false);

        submitButton->show();
        cancelButton->show();
        break;

    case NavigationMode:

        if (contacts.isEmpty()) {
            nameLine->clear();
            phoneText->clear();
        }

        nameLine->setReadOnly(true);
        phoneText->setReadOnly(true);
        addButton->setEnabled(true);

        int number = contacts.size();
        removeButton->setEnabled(number >= 1);
        findByNameButton->setEnabled(number >= 1);
        findByPhoneButton->setEnabled(number >= 1);
        nextButton->setEnabled(number > 1);
        previousButton->setEnabled(number >1 );

        submitButton->hide();
        cancelButton->hide();
        break;
    }
}

void PhoneBook::findByName()
{
    fbNamedialog->show();

    if (fbNamedialog->exec() == QDialog::Accepted) {
        QString contactName = fbNamedialog->getFindName();

        if (contacts.contains(contactName)) {
            nameLine->setText(contactName);
            phoneText->setText(contacts.value(contactName));
        } else {
            QMessageBox::information(this, tr("Contact Not Found"),
                tr("Sorry, \"%1\" is not in your address book.").arg(contactName));
            return;
        }
    }

    updateInterface(NavigationMode);
}

void PhoneBook::findByPhone()
{
    cout << "entered";

    fbPhonedialog->show();

    if (fbPhonedialog->exec() == QDialog::Accepted) {
        QString contactPhone = fbPhonedialog->getFindPhone();

        QString name = valueExists(contacts, contactPhone);

        if (name == "no res") {
            QMessageBox::information(this, tr("Contact Not Found"),
                tr("Sorry, \"%1\" is not in your address book.").arg(contactPhone));
            return;
        } else {
            nameLine->setText(name);
            phoneText->setText(contacts.value(name));
        }
    }

    updateInterface(NavigationMode);
}

QString PhoneBook::valueExists(QMap<QString, QString> map, QString valExists)
{
    QList<QString> valuesList = map.values();

    QList<QString> keys = map.keys();

    foreach(QString key, keys)
    {
        if(map.value(key).contains(valExists))
        {
            return key;
        }
    }
    return QString("no res");
}
