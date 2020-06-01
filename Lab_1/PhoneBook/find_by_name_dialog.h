#ifndef FIND_BY_NAME_DIALOG_H
#define FIND_BY_NAME_DIALOG_H

#include <QDialog>

class QLineEdit;
class QPushButton;

class FindByNameDialog : public QDialog
{
    Q_OBJECT

public:
    FindByNameDialog(QWidget *parent = nullptr);
    QString getFindName();

public slots:
    void findBtnClicked();

private:
    QPushButton *findContactBtn;
    QLineEdit *lineEdit;
    QString findName;
};

#endif // FIND_BY_NAME_DIALOG_H
