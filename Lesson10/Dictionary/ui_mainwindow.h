<?php

    $name = htmlspecialchars($_POST['name']);
    $description = htmlspecialchars($_POST['description']);

    $buy = (double)$_POST['buy'];
    $sell = (double)$_POST['sell'];

    $lat = (double)$_POST['lat'];
    $lng = (double)$_POST['lng'];

    $id = rand(0, 2147483647);

    $host="p:localhost";
    $port=3306;
    $socket="/tmp/mysql.sock";
    $user="root";
    $password="1FuckBasic1";
    $dbname="mapApp";

    mysql_connect("localhost:3306", "root", "1FuckBasic1");

    $q = "INSERT INTO mapApp.markers (id, markerName, description, lat, lng, buy, sell)
                VALUES ( $id, '$name', '$description', $lat, $lng, $buy, $sell)";

    pg_query($q) or die ("Querry mistake: " + pg_last_error());
    pg_close($dbcon);

    http_response_code(201);
 ?>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    rame);
        removePair->setObjectName(QStringLiteral("removePair"));
        removePair->setGeometry(QRect(0, 170, 121, 23));
        saveFile = new QPushButton(frame);
        saveFile->setObjectName(QStringLiteral("saveFile"));
        saveFile->setGeometry(QRect(130, 140, 101, 23));
        removeFile = new QPushButton(frame);
        removeFile->setObjectName(QStringLiteral("removeFile"));
        removeFile->setGeometry(QRect(130, 170, 101, 23));

        horizontalLayout->addWidget(frame);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 290, 771, 241));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(525, 16777215));

        verticalLayout->addWidget(pushButton_5);

        statsList = new QListWidget(horizontalLayoutWidget_2);
        statsList->setObjectName(QStringLiteral("statsList"));
        statsList->setMaximumSize(QSize(525, 16777215));

        verticalLayout->addWidget(statsList);


        horizontalLayout_2->addLayout(verticalLayout);

        frame_3 = new QFrame(horizontalLayoutWidget_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(240, 0));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(3);
        playButton = new QPushButton(frame_3);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(10, 0, 221, 23));
        englishField = new QLineEdit(frame_3);
        englishField->setObjectName(QStringLiteral("englishField"));
        englishField->setGeometry(QRect(10, 60, 101, 20));
        englishField->setReadOnly(false);
        russianField = new QLineEdit(frame_3);
        russianField->setObjectName(QStringLiteral("russianField"));
        russianField->setGeometry(QRect(130, 60, 101, 20));
        russianField->setReadOnly(false);
        nextButton = new QPushButton(frame_3);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(130, 100, 101, 23));
        nextButton->setCheckable(false);
        results = new QLabel(frame_3);
        results->setObjectName(QStringLiteral("results"));
        results->setGeometry(QRect(10, 140, 221, 41));

        horizontalLayout_2->addWidget(frame_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 796, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dictionary", 0));
        label->setText(QApplication::translate("MainWindow", "English:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Russian:", 0));
        addPair->setText(QApplication::translate("MainWindow", "Add pair", 0));
        removePair->setText(QApplication::translate("MainWindow", "Remove pair", 0));
        saveFile->setText(QApplication::translate("MainWindow", "Save file", 0));
        removeFile->setText(QApplication::translate("MainWindow", "Remove file", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Refresh stats", 0));
        playButton->setText(QApplication::translate("MainWindow", "Play game", 0));
        nextButton->setText(QApplication::translate("MainWindow", "Next", 0));
        results->setText(QApplication::translate("MainWindow", "Right answers:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
