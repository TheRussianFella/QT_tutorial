/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myframe.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *lineWidth;
    QSpinBox *widthSpinBox;
    QLineEdit *widthEditor;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *redSlider;
    QSlider *greenSlider;
    QSlider *blueSlider;
    QPushButton *resetButton;
    QPushButton *exitButton;
    QVBoxLayout *verticalLayout;
    MyFrame *frame;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(658, 568);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 621, 523));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineWidth = new QGroupBox(horizontalLayoutWidget);
        lineWidth->setObjectName(QStringLiteral("lineWidth"));
        widthSpinBox = new QSpinBox(lineWidth);
        widthSpinBox->setObjectName(QStringLiteral("widthSpinBox"));
        widthSpinBox->setGeometry(QRect(200, 50, 42, 22));
        widthSpinBox->setMaximum(10);
        widthEditor = new QLineEdit(lineWidth);
        widthEditor->setObjectName(QStringLiteral("widthEditor"));
        widthEditor->setGeometry(QRect(20, 50, 151, 20));
        widthEditor->setMaxLength(2);
        groupBox_2 = new QGroupBox(lineWidth);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 120, 305, 400));
        groupBox_2->setMinimumSize(QSize(99, 400));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 101, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 91, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 160, 46, 13));
        redSlider = new QSlider(groupBox_2);
        redSlider->setObjectName(QStringLiteral("redSlider"));
        redSlider->setGeometry(QRect(20, 60, 261, 19));
        redSlider->setMaximum(255);
        redSlider->setOrientation(Qt::Horizontal);
        redSlider->setTickPosition(QSlider::TicksAbove);
        greenSlider = new QSlider(groupBox_2);
        greenSlider->setObjectName(QStringLiteral("greenSlider"));
        greenSlider->setGeometry(QRect(20, 120, 261, 19));
        greenSlider->setMaximum(255);
        greenSlider->setOrientation(Qt::Horizontal);
        greenSlider->setTickPosition(QSlider::TicksAbove);
        blueSlider = new QSlider(groupBox_2);
        blueSlider->setObjectName(QStringLiteral("blueSlider"));
        blueSlider->setGeometry(QRect(20, 190, 261, 19));
        blueSlider->setMaximum(255);
        blueSlider->setOrientation(Qt::Horizontal);
        blueSlider->setTickPosition(QSlider::TicksAbove);
        resetButton = new QPushButton(groupBox_2);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(20, 310, 261, 23));
        exitButton = new QPushButton(groupBox_2);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(20, 340, 261, 23));

        verticalLayout_2->addWidget(lineWidth);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new MyFrame(horizontalLayoutWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);

        verticalLayout->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);
        QObject::connect(widthEditor, SIGNAL(textEdited(QString)), Widget, SLOT(getString(QString)));
        QObject::connect(widthSpinBox, SIGNAL(valueChanged(int)), Widget, SLOT(getInt(int)));
        QObject::connect(Widget, SIGNAL(sendString(QString)), widthEditor, SLOT(setText(QString)));
        QObject::connect(Widget, SIGNAL(sendInt(int)), widthSpinBox, SLOT(setValue(int)));
        QObject::connect(exitButton, SIGNAL(clicked(bool)), Widget, SLOT(close()));
        QObject::connect(blueSlider, SIGNAL(sliderMoved(int)), Widget, SLOT(redefineValues()));
        QObject::connect(redSlider, SIGNAL(sliderMoved(int)), Widget, SLOT(redefineValues()));
        QObject::connect(greenSlider, SIGNAL(sliderMoved(int)), Widget, SLOT(redefineValues()));
        QObject::connect(Widget, SIGNAL(sendPen(QPen)), frame, SLOT(getPen(QPen)));
        QObject::connect(widthSpinBox, SIGNAL(valueChanged(int)), Widget, SLOT(getWidth(int)));
        QObject::connect(Widget, SIGNAL(sendWidth(int)), frame, SLOT(getWidth(int)));
        QObject::connect(resetButton, SIGNAL(clicked(bool)), Widget, SLOT(getReset()));
        QObject::connect(Widget, SIGNAL(sendReset()), frame, SLOT(getReset()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "ResearchWindow", 0));
        lineWidth->setTitle(QApplication::translate("Widget", "Line width:", 0));
        groupBox_2->setTitle(QApplication::translate("Widget", "Line color:", 0));
        label->setText(QApplication::translate("Widget", "Red:", 0));
        label_2->setText(QApplication::translate("Widget", "Green:", 0));
        label_3->setText(QApplication::translate("Widget", "Blue: ", 0));
        resetButton->setText(QApplication::translate("Widget", "Reset", 0));
        exitButton->setText(QApplication::translate("Widget", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
