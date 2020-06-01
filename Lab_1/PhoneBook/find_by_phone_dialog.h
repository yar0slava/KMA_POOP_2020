#ifndef FIND_BY_PHONE_DIALOG_H
#define FIND_BY_PHONE_DIALOG_H

#include <QDialog>

class QLineEdit;
class QPushButton;

class FindByPhoneDialog : public QDialog
{
    Q_OBJECT

public:
    FindByPhoneDialog(QWidget *parent = nullptr);
    QString getFindPhone();

public slots:
    void findBtnClicked();

private:
    QPushButton *findContactBtn;
    QLineEdit *lineEdit;
    QString findPhone;
};

#endif // FIND_BY_PHONE_DIALOG_H
