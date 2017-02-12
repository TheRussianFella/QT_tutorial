/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include "myframe.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    MyFrame *frame;
    QGroupBox *groupBox;
    QSpinBox *thickBox;
    QGroupBox *groupBox_2;
    QSlider *redSlider;
    QSlider *greenSlider;
    QSlider *blueSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(672, 540);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(480, 480, 171, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new MyFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(300, 30, 351, 411));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 181, 81));
        thickBox = new QSpinBox(groupBox);
        thickBox->setObjectName(QString::fromUtf8("thickBox"));
        thickBox->setGeometry(QRect(10, 40, 151, 22));
        thickBox->setMinimum(1);
        thickBox->setMaximum(10);
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 120, 261, 321));
        redSlider = new QSlider(groupBox_2);
        redSlider->setObjectName(QString::fromUtf8("redSlider"));
        redSlider->setGeometry(QRect(20, 90, 221, 16));
        redSlider->setMaximum(255);
        redSlider->setSliderPosition(0);
        redSlider->setOrientation(Qt::Horizontal);
        redSlider->setTickPosition(QSlider::TicksBelow);
        greenSlider = new QSlider(groupBox_2);
        greenSlider->setObjectName(QString::fromUtf8("greenSlider"));
        greenSlider->setGeometry(QRect(20, 170, 221, 16));
        greenSlider->setMaximum(255);
        greenSlider->setOrientation(Qt::Horizontal);
        greenSlider->setTickPosition(QSlider::TicksBelow);
        blueSlider = new QSlider(groupBox_2);
        blueSlider->setObjectName(QString::fromUtf8("blueSlider"));
        blueSlider->setGeometry(QRect(20, 240, 221, 16));
        blueSlider->setMaximum(255);
        blueSlider->setOrientation(Qt::Horizontal);
        blueSlider->setTickPosition(QSlider::TicksBelow);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 47, 13));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 47, 13));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 220, 47, 13));
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 450, 261, 71));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 231, 22));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "Thickness:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Color:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Red:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Green:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "Blue:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Movement char:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Chaotic movement", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Syncronised movement", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
