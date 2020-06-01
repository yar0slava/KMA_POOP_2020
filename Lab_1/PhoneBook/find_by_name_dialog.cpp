#include "find_by_name_dialog.h"

#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>

FindByNameDialog::FindByNameDialog(QWidget *parent)
    : QDialog(parent)
{
    QLabel *findLabel = new QLabel(tr("Enter the name of a contact:"));
    lineEdit = new QLineEdit;

    findContactBtn = new QPushButton(tr("&Find"));
    findName = "";

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(findLabel);
    layout->addWidget(lineEdit);
    layout->addWidget(findContactBtn);

    setLayout(layout);
    setWindowTitle(tr("Find a Contact"));
    connect(findContactBtn, &QPushButton::clicked,
            this, &FindByNameDialog::findBtnClicked);
    connect(findContactBtn, &QPushButton::clicked,
            this, &FindByNameDialog::accept);
}

void FindByNameDialog::findBtnClicked()
{
    QString text = lineEdit->text();

    if (text.isEmpty()) {
        QMessageBox::information(this, tr("Empty Field"),
            tr("Please enter a name."));
        return;
    } else {
        findName = text;
        lineEdit->clear();
        hide();
    }
}

QString FindByNameDialog::getFindName()
{
    return findName;
}
