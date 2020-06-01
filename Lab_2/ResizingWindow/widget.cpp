#include "widget.h"
#include "ui_widget.h"

#include <iostream>
#include <QLabel>
#include <QGridLayout>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    sizeLabel = new QLabel(tr("Width:   Height: "));

    QVBoxLayout *labelsLayout = new QVBoxLayout;
    labelsLayout->addWidget(sizeLabel, Qt::AlignCenter);

    labelsLayout->setAlignment(Qt::AlignCenter);

    setLayout(labelsLayout);
    setWindowTitle("Resizing Window");

    //resize();
}

void Widget::resizeEvent(QResizeEvent *e){

    QString size;
    size.append("Width: ");
    size.append(QString::number(e->size().width()));
    size.append("  Height: ");
    size.append(QString::number(e->size().height()));

    cout<<size.toStdString();

    sizeLabel->clear();
    sizeLabel->setText(size);
    sizeLabel->repaint();

    QWidget::resizeEvent(e);
}

Widget::~Widget()
{
    delete ui;
}

