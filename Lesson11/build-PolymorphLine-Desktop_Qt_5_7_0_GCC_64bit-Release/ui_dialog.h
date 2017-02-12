/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
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
    QFrame *frame;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(672, 540);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(480, 480, 171, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 181, 81));
        thickBox = new QSpinBox(groupBox);
        thickBox->setObjectName(QStringLiteral("thickBox"));
        thickBox->setGeometry(QRect(10, 40, 151, 22));
        thickBox->setMinimum(1);
        thickBox->setMaximum(10);
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 120, 261, 321));
        redSlider = new QSlider(groupBox_2);
        redSlider->setObjectName(QStringLiteral("redSlider"));
        redSlider->setGeometry(QRect(20, 90, 221, 16));
        redSlider->setMaximum(255);
        redSlider->setSliderPosition(0);
        redSlider->setOrientation(Qt::Horizontal);
        redSlider->setTickPosition(QSlider::TicksBelow);
        greenSlider = new QSlider(groupBox_2);
        greenSlider->setObjectName(QStringLiteral("greenSlider"));
        greenSlider->setGeometry(QRect(20, 170, 221, 16));
        greenSlider->setMaximum(255);
        greenSlider->setOrientation(Qt::Horizontal);
        greenSlider->setTickPosition(QSlider::TicksBelow);
        blueSlider = new QSlider(groupBox_2);
        blueSlider->setObjectName(QStringLiteral("blueSlider"));
        blueSlider->setGeometry(QRect(20, 240, 221, 16));
        blueSlider->setMaximum(255);
        blueSlider->setOrientation(Qt::Horizontal);
        blueSlider->setTickPosition(QSlider::TicksBelow);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 47, 13));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 150, 47, 13));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 220, 47, 13));
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 450, 261, 71));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 231, 22));
        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(330, 10, 331, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));
        QObject::connect(redSlider, SIGNAL(valueChanged(int)), Dialog, SLOT(changeColor(int)));
        QObject::connect(greenSlider, SIGNAL(valueChanged(int)), Dialog, SLOT(changeColor(int)));
        QObject::connect(blueSlider, SIGNAL(valueChanged(int)), Dialog, SLOT(changeColor(int)));
        QObject::connect(thickBox, SIGNAL(valueChanged(int)), Dialog, SLOT(changeThickness(int)));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "Thickness:", 0));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Color:", 0));
        label->setText(QApplication::translate("Dialog", "Red:", 0));
        label_2->setText(QApplication::translate("Dialog", "Green:", 0));
        label_3->setText(QApplication::translate("Dialog", "Blue:", 0));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Movement char:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Chaotic movement", 0)
         << QApplication::translate("Dialog", "Syncronised movement", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
