#ifndef PHONEBOOKDIALOG_H
#define PHONEBOOKDIALOG_H

#include "find_by_name_dialog.h"
#include "find_by_phone_dialog.h"

#include <QDialog>
#include <QLineEdit>
#include <QTextEdit>

class PhoneBook : public QWidget
{
    Q_OBJECT

public:
    PhoneBook(QWidget *parent = nullptr);

public slots:
    void addPhone();
    void submitPhone();
    void cancel();
    void next();
    void previous();
    void removeContact();
    void findByName();
    void findByPhone();


private:
    enum Mode { NavigationMode, AddingMode};

    QLineEdit *nameLine;
    QTextEdit *phoneText;
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QPushButton *removeButton;
    QPushButton *findByNameButton;
    QPushButton *findByPhoneButton;

    QMap<QString, QString> contacts;
    QString oldName;
    QString oldPhone;
    Mode currentMode;
    FindByNameDialog *fbNamedialog;
    FindByPhoneDialog *fbPhonedialog;

    void updateInterface(Mode mode);
    QString valueExists(QMap<QString, QString> map, QString valExists);
};
#endif
