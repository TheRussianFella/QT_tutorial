/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionDraw_point;
    QAction *actionDraw_polyline;
    QAction *actionDraw_polygon;
    QAction *actionMove_figure;
    QAction *actionClear;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuActions;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(796, 446);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionSettings->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon);
        actionDraw_point = new QAction(MainWindow);
        actionDraw_point->setObjectName(QString::fromUtf8("actionDraw_point"));
        actionDraw_point->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/Images/pointer_4106.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDraw_point->setIcon(icon1);
        actionDraw_polyline = new QAction(MainWindow);
        actionDraw_polyline->setObjectName(QString::fromUtf8("actionDraw_polyline"));
        actionDraw_polyline->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/Images/polyline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDraw_polyline->setIcon(icon2);
        actionDraw_polygon = new QAction(MainWindow);
        actionDraw_polygon->setObjectName(QString::fromUtf8("actionDraw_polygon"));
        actionDraw_polygon->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/Images/polygon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDraw_polygon->setIcon(icon3);
        actionMove_figure = new QAction(MainWindow);
        actionMove_figure->setObjectName(QString::fromUtf8("actionMove_figure"));
        actionMove_figure->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/Images/move.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_figure->setIcon(icon4);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionClear->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/Images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 796, 21));
        menuActions = new QMenu(menuBar);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuActions->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuActions->addAction(actionDraw_point);
        menuActions->addAction(actionDraw_polyline);
        menuActions->addAction(actionDraw_polygon);
        menuActions->addSeparator();
        menuActions->addAction(actionMove_figure);
        menuActions->addSeparator();
        menuActions->addAction(actionClear);
        menuSettings->addAction(actionSettings);
        mainToolBar->addAction(actionDraw_point);
        mainToolBar->addAction(actionDraw_polyline);
        mainToolBar->addAction(actionDraw_polygon);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMove_figure);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSettings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        actionDraw_point->setText(QApplication::translate("MainWindow", "Draw point", 0, QApplication::UnicodeUTF8));
        actionDraw_polyline->setText(QApplication::translate("MainWindow", "Draw polyline", 0, QApplication::UnicodeUTF8));
        actionDraw_polygon->setText(QApplication::translate("MainWindow", "Draw polygon", 0, QApplication::UnicodeUTF8));
        actionMove_figure->setText(QApplication::translate("MainWindow", "Move figure", 0, QApplication::UnicodeUTF8));
        actionClear->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        menuActions->setTitle(QApplication::translate("MainWindow", "Actions", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
