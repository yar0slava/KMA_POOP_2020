#include "find_by_phone_dialog.h"

#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>

FindByPhoneDialog::FindByPhoneDialog(QWidget *parent)
    : QDialog(parent)
{
    QLabel *findLabel = new QLabel(tr("Enter the phone of a contact:"));
    lineEdit = new QLineEdit;

    findContactBtn = new QPushButton(tr("&Find"));
    findPhone = "";

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(findLabel);
    layout->addWidget(lineEdit);
    layout->addWidget(findContactBtn);

    setLayout(layout);
    setWindowTitle(tr("Find a Contact"));
    connect(findContactBtn, &QPushButton::clicked,
            this, &FindByPhoneDialog::findBtnClicked);
    connect(findContactBtn, &QPushButton::clicked,
            this, &FindByPhoneDialog::accept);
}

void FindByPhoneDialog::findBtnClicked()
{
    QString text = lineEdit->text();

    if (text.isEmpty()) {
        QMessageBox::information(this, tr("Empty Field"),
            tr("Please enter a phone."));
        return;
    } else {
        findPhone = text;
        lineEdit->clear();
        hide();
    }
}

QString FindByPhoneDialog::getFindPhone()
{
    return findPhone;
}
