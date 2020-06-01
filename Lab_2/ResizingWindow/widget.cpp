#include "widget.h"
#include "ui_widget.h"

#include <QLabel>
#include <QGridLayout>

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

    sizeLabel->clear();
    sizeLabel->setText(size);
    sizeLabel->repaint();

    QWidget::resizeEvent(e);
}

Widget::~Widget()
{
    delete ui;
}

