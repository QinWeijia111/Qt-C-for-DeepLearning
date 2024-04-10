/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySaoGang
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushBtn_choose_csv;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *MySaoGang)
    {
        if (MySaoGang->objectName().isEmpty())
            MySaoGang->setObjectName("MySaoGang");
        MySaoGang->resize(701, 472);
        groupBox = new QGroupBox(MySaoGang);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 381, 461));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushBtn_choose_csv = new QPushButton(groupBox);
        pushBtn_choose_csv->setObjectName("pushBtn_choose_csv");

        verticalLayout->addWidget(pushBtn_choose_csv);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_2 = new QPushButton(MySaoGang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(419, 110, 201, 51));

        retranslateUi(MySaoGang);

        QMetaObject::connectSlotsByName(MySaoGang);
    } // setupUi

    void retranslateUi(QWidget *MySaoGang)
    {
        MySaoGang->setWindowTitle(QCoreApplication::translate("MySaoGang", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MySaoGang", "\350\256\255\347\273\203\345\214\272\345\237\237", nullptr));
        pushBtn_choose_csv->setText(QCoreApplication::translate("MySaoGang", "\351\200\211\346\213\251\350\246\201\350\276\223\345\205\245\347\232\204\350\256\255\347\273\203csv\346\226\207\344\273\266", nullptr));
        pushButton->setText(QCoreApplication::translate("MySaoGang", "\346\270\205\351\231\244\350\276\223\345\207\272\345\214\272", nullptr));
        label->setText(QCoreApplication::translate("MySaoGang", "\350\256\255\347\273\203\347\232\204\347\273\223\346\236\234\345\261\225\347\244\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MySaoGang", "FilePath()", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySaoGang: public Ui_MySaoGang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
