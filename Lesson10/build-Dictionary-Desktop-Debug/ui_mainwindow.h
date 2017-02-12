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
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *englishList;
    QListWidget *russianList;
    QFrame *frame;
    QLabel *label;
    QLineEdit *englishEdit;
    QLabel *label_2;
    QLineEdit *russianEdit;
    QPushButton *addPair;
    QPushButton *removePair;
    QPushButton *saveFile;
    QPushButton *removeFile;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QListWidget *statsList;
    QFrame *frame_3;
    QPushButton *playButton;
    QLineEdit *englishField;
    QLineEdit *russianField;
    QPushButton *nextButton;
    QLabel *results;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(796, 585);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 771, 271));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        englishList = new QListWidget(horizontalLayoutWidget);
        englishList->setObjectName(QString::fromUtf8("englishList"));

        horizontalLayout->addWidget(englishList);

        russianList = new QListWidget(horizontalLayoutWidget);
        russianList->setObjectName(QString::fromUtf8("russianList"));

        horizontalLayout->addWidget(russianList);

        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(240, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 81, 21));
        englishEdit = new QLineEdit(frame);
        englishEdit->setObjectName(QString::fromUtf8("englishEdit"));
        englishEdit->setGeometry(QRect(0, 30, 231, 20));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 70, 101, 16));
        russianEdit = new QLineEdit(frame);
        russianEdit->setObjectName(QString::fromUtf8("russianEdit"));
        russianEdit->setGeometry(QRect(0, 100, 231, 20));
        addPair = new QPushButton(frame);
        addPair->setObjectName(QString::fromUtf8("addPair"));
        addPair->setGeometry(QRect(0, 140, 121, 23));
        removePair = new QPushButton(frame);
        removePair->setObjectName(QString::fromUtf8("removePair"));
        removePair->setGeometry(QRect(0, 170, 121, 23));
        saveFile = new QPushButton(frame);
        saveFile->setObjectName(QString::fromUtf8("saveFile"));
        saveFile->setGeometry(QRect(130, 140, 101, 23));
        removeFile = new QPushButton(frame);
        removeFile->setObjectName(QString::fromUtf8("removeFile"));
        removeFile->setGeometry(QRect(130, 170, 101, 23));

        horizontalLayout->addWidget(frame);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 290, 771, 241));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(525, 16777215));

        verticalLayout->addWidget(pushButton_5);

        statsList = new QListWidget(horizontalLayoutWidget_2);
        statsList->setObjectName(QString::fromUtf8("statsList"));
        statsList->setMaximumSize(QSize(525, 16777215));

        verticalLayout->addWidget(statsList);


        horizontalLayout_2->addLayout(verticalLayout);

        frame_3 = new QFrame(horizontalLayoutWidget_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(240, 0));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(3);
        playButton = new QPushButton(frame_3);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(10, 0, 221, 23));
        englishField = new QLineEdit(frame_3);
        englishField->setObjectName(QString::fromUtf8("englishField"));
        englishField->setGeometry(QRect(10, 60, 101, 20));
        englishField->setReadOnly(false);
        russianField = new QLineEdit(frame_3);
        russianField->setObjectName(QString::fromUtf8("russianField"));
        russianField->setGeometry(QRect(130, 60, 101, 20));
        russianField->setReadOnly(false);
        nextButton = new QPushButton(frame_3);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(130, 100, 101, 23));
        nextButton->setCheckable(false);
        results = new QLabel(frame_3);
        results->setObjectName(QString::fromUtf8("results"));
        results->setGeometry(QRect(10, 140, 221, 41));

        horizontalLayout_2->addWidget(frame_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 796, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(addPair, SIGNAL(clicked(bool)), MainWindow, SLOT(buttonPressed()));
        QObject::connect(saveFile, SIGNAL(clicked(bool)), MainWindow, SLOT(buttonPressed()));
        QObject::connect(removePair, SIGNAL(clicked(bool)), MainWindow, SLOT(buttonPressed()));
        QObject::connect(removeFile, SIGNAL(clicked(bool)), MainWindow, SLOT(buttonPressed()));
        QObject::connect(pushButton_5, SIGNAL(clicked(bool)), MainWindow, SLOT(showStats()));
        QObject::connect(playButton, SIGNAL(clicked(bool)), MainWindow, SLOT(startGame()));
        QObject::connect(nextButton, SIGNAL(clicked(bool)), MainWindow, SLOT(getAnswer()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dictionary", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "English:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Russian:", 0, QApplication::UnicodeUTF8));
        addPair->setText(QApplication::translate("MainWindow", "Add pair", 0, QApplication::UnicodeUTF8));
        removePair->setText(QApplication::translate("MainWindow", "Remove pair", 0, QApplication::UnicodeUTF8));
        saveFile->setText(QApplication::translate("MainWindow", "Save file", 0, QApplication::UnicodeUTF8));
        removeFile->setText(QApplication::translate("MainWindow", "Remove file", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Refresh stats", 0, QApplication::UnicodeUTF8));
        playButton->setText(QApplication::translate("MainWindow", "Play game", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("MainWindow", "Next", 0, QApplication::UnicodeUTF8));
        results->setText(QApplication::translate("MainWindow", "Right answers:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
