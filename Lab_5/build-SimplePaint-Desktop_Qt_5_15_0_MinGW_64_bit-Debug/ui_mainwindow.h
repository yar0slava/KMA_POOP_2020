/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionClean;
    QAction *action2px;
    QAction *action5px;
    QAction *action10px;
    QAction *actionBlack;
    QAction *actionWhite;
    QAction *actionRed;
    QAction *actionGreen;
    QAction *actionBlue;
    QAction *actionPoint;
    QAction *actionLine;
    QAction *actionRectangle;
    QAction *actionElipse;
    QAction *actionRoundedRect;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionClean = new QAction(MainWindow);
        actionClean->setObjectName(QString::fromUtf8("actionClean"));
        action2px = new QAction(MainWindow);
        action2px->setObjectName(QString::fromUtf8("action2px"));
        action5px = new QAction(MainWindow);
        action5px->setObjectName(QString::fromUtf8("action5px"));
        action10px = new QAction(MainWindow);
        action10px->setObjectName(QString::fromUtf8("action10px"));
        actionBlack = new QAction(MainWindow);
        actionBlack->setObjectName(QString::fromUtf8("actionBlack"));
        actionWhite = new QAction(MainWindow);
        actionWhite->setObjectName(QString::fromUtf8("actionWhite"));
        actionRed = new QAction(MainWindow);
        actionRed->setObjectName(QString::fromUtf8("actionRed"));
        actionGreen = new QAction(MainWindow);
        actionGreen->setObjectName(QString::fromUtf8("actionGreen"));
        actionBlue = new QAction(MainWindow);
        actionBlue->setObjectName(QString::fromUtf8("actionBlue"));
        actionPoint = new QAction(MainWindow);
        actionPoint->setObjectName(QString::fromUtf8("actionPoint"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionElipse = new QAction(MainWindow);
        actionElipse->setObjectName(QString::fromUtf8("actionElipse"));
        actionRoundedRect = new QAction(MainWindow);
        actionRoundedRect->setObjectName(QString::fromUtf8("actionRoundedRect"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(actionSave);
        menu->addAction(actionClean);
        menu_2->addAction(action2px);
        menu_2->addAction(action5px);
        menu_2->addAction(action10px);
        menu_3->addAction(actionBlack);
        menu_3->addAction(actionWhite);
        menu_3->addAction(actionRed);
        menu_3->addAction(actionGreen);
        menu_3->addAction(actionBlue);
        menu_4->addAction(actionPoint);
        menu_4->addAction(actionLine);
        menu_4->addAction(actionRectangle);
        menu_4->addAction(actionElipse);
        menu_4->addAction(actionRoundedRect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        actionClean->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", nullptr));
        action2px->setText(QCoreApplication::translate("MainWindow", "2px", nullptr));
        action5px->setText(QCoreApplication::translate("MainWindow", "5px", nullptr));
        action10px->setText(QCoreApplication::translate("MainWindow", "10px", nullptr));
        actionBlack->setText(QCoreApplication::translate("MainWindow", "\321\207\320\276\321\200\320\275\320\270\320\271", nullptr));
        actionWhite->setText(QCoreApplication::translate("MainWindow", "\320\261\321\226\320\273\320\270\320\271", nullptr));
        actionRed->setText(QCoreApplication::translate("MainWindow", "\321\207\320\265\321\200\320\262\320\276\320\275\320\270\320\271", nullptr));
        actionGreen->setText(QCoreApplication::translate("MainWindow", "\320\267\320\265\320\273\320\265\320\275\320\270\320\271", nullptr));
        actionBlue->setText(QCoreApplication::translate("MainWindow", "\320\261\320\273\320\260\320\272\320\270\321\202\320\275\320\270\320\271", nullptr));
        actionPoint->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\272\320\260", nullptr));
        actionLine->setText(QCoreApplication::translate("MainWindow", "\320\233\321\226\320\275\321\226\321\217", nullptr));
        actionRectangle->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\320\272\321\203\321\202\320\275\320\270\320\272", nullptr));
        actionElipse->setText(QCoreApplication::translate("MainWindow", "\320\225\320\273\321\226\320\277\321\201", nullptr));
        actionRoundedRect->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\320\272\321\203\321\202\320\275\320\270\320\272 \321\226\320\267 \320\272\321\200\321\203\320\263\320\273\320\270\320\274\320\270 \320\272\321\203\321\202\320\260\320\274\320\270", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\272\320\270\321\201\321\202\321\226", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\321\226\321\200 \320\272\320\270\321\201\321\202\321\226", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\320\244\321\226\320\263\321\203\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
