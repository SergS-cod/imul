/********************************************************************************
** Form generated from reading UI file 'display_m.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_M_H
#define UI_DISPLAY_M_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Display_m
{
public:
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *Display_m)
    {
        if (Display_m->objectName().isEmpty())
            Display_m->setObjectName(QStringLiteral("Display_m"));
        Display_m->resize(480, 136);
        label = new QLabel(Display_m);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 151, 41));
        comboBox = new QComboBox(Display_m);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(220, 50, 241, 22));

        retranslateUi(Display_m);

        QMetaObject::connectSlotsByName(Display_m);
    } // setupUi

    void retranslateUi(QWidget *Display_m)
    {
        Display_m->setWindowTitle(QApplication::translate("Display_m", "Form", 0));
        label->setText(QApplication::translate("Display_m", "8888888888888888888", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Display_m", "Presentation", 0)
         << QApplication::translate("Display_m", "Bright", 0)
         << QApplication::translate("Display_m", "Cinema", 0)
         << QApplication::translate("Display_m", "Film", 0)
         << QApplication::translate("Display_m", "Vivid ", 0)
         << QApplication::translate("Display_m", "Game", 0)
         << QApplication::translate("Display_m", "sRGB", 0)
         << QApplication::translate("Display_m", "Reference", 0)
         << QApplication::translate("Display_m", "DICOM SIM.", 0)
         << QApplication::translate("Display_m", "User", 0)
         << QApplication::translate("Display_m", "3D", 0)
         << QApplication::translate("Display_m", "User (3D)", 0)
         << QApplication::translate("Display_m", "ISF Day", 0)
         << QApplication::translate("Display_m", "ISF Night", 0)
         << QApplication::translate("Display_m", "ISF 3D", 0)
         << QApplication::translate("Display_m", "2D High Speed", 0)
         << QApplication::translate("Display_m", "Blending", 0)
         << QApplication::translate("Display_m", "Sport", 0)
         << QApplication::translate("Display_m", "HDR", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Display_m: public Ui_Display_m {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_M_H
