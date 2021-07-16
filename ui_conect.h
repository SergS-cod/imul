/********************************************************************************
** Form generated from reading UI file 'conect.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONECT_H
#define UI_CONECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conect
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_com;
    QLineEdit *lineEdit_portt;
    QPushButton *pushButton;
    QCheckBox *checkBox;

    void setupUi(QWidget *Conect)
    {
        if (Conect->objectName().isEmpty())
            Conect->setObjectName(QStringLiteral("Conect"));
        Conect->resize(400, 300);
        gridLayout = new QGridLayout(Conect);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(Conect);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(Conect);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_com = new QLineEdit(Conect);
        lineEdit_com->setObjectName(QStringLiteral("lineEdit_com"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_com->sizePolicy().hasHeightForWidth());
        lineEdit_com->setSizePolicy(sizePolicy);
        lineEdit_com->setMaximumSize(QSize(500, 16777215));

        gridLayout->addWidget(lineEdit_com, 0, 1, 1, 1);

        lineEdit_portt = new QLineEdit(Conect);
        lineEdit_portt->setObjectName(QStringLiteral("lineEdit_portt"));
        sizePolicy.setHeightForWidth(lineEdit_portt->sizePolicy().hasHeightForWidth());
        lineEdit_portt->setSizePolicy(sizePolicy);
        lineEdit_portt->setMaximumSize(QSize(500, 16777215));

        gridLayout->addWidget(lineEdit_portt, 1, 1, 1, 1);

        pushButton = new QPushButton(Conect);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        checkBox = new QCheckBox(Conect);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);


        retranslateUi(Conect);

        QMetaObject::connectSlotsByName(Conect);
    } // setupUi

    void retranslateUi(QWidget *Conect)
    {
        Conect->setWindowTitle(QApplication::translate("Conect", "Form", 0));
        label_2->setText(QApplication::translate("Conect", "               TCP/IP", 0));
        label->setText(QApplication::translate("Conect", "                  COM", 0));
        lineEdit_com->setText(QApplication::translate("Conect", "COM3", 0));
        lineEdit_portt->setText(QApplication::translate("Conect", "8888", 0));
        pushButton->setText(QApplication::translate("Conect", "Connect", 0));
        checkBox->setText(QApplication::translate("Conect", "\320\222\320\232\320\233 /  \320\222\320\253\320\232\320\233 \320\236\320\242\320\222\320\225\320\242 ", 0));
    } // retranslateUi

};

namespace Ui {
    class Conect: public Ui_Conect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONECT_H
