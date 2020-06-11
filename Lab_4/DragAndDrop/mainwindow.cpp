#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include <qlistwidget.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QListWidget *list1 = ui->listWidget1;
    QListWidget *list2 = ui->listWidget2;

    list1->setDragDropMode(QAbstractItemView::DragDrop);
    list1->setDefaultDropAction(Qt::MoveAction);
    list2->setDragDropMode(QAbstractItemView::DragDrop);
    list2->setDefaultDropAction(Qt::MoveAction);

    list1->addItem("Марія");
    list1->addItem("Олександра");
    list1->addItem("Олена");
    list1->addItem("Ольга");

    list2->addItem("Максим");
    list2->addItem("Валентин");
    list2->addItem("Олексій");
    list2->addItem("Роман");

}

MainWindow::~MainWindow()
{
    delete ui;
}

