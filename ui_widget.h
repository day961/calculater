/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Tue Mar 19 21:09:35 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit;
    QPushButton *clr;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QHBoxLayout *horizontalLayout;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *num0;
    QPushButton *dot;
    QPushButton *del;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pone;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *equ;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(350, 231);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 328, 205));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setMaxLength(32767);

        horizontalLayout_5->addWidget(lineEdit);

        clr = new QPushButton(layoutWidget);
        clr->setObjectName(QString::fromUtf8("clr"));

        horizontalLayout_5->addWidget(clr);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        num7 = new QPushButton(layoutWidget);
        num7->setObjectName(QString::fromUtf8("num7"));

        horizontalLayout_3->addWidget(num7);

        num8 = new QPushButton(layoutWidget);
        num8->setObjectName(QString::fromUtf8("num8"));

        horizontalLayout_3->addWidget(num8);

        num9 = new QPushButton(layoutWidget);
        num9->setObjectName(QString::fromUtf8("num9"));

        horizontalLayout_3->addWidget(num9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        num4 = new QPushButton(layoutWidget);
        num4->setObjectName(QString::fromUtf8("num4"));

        horizontalLayout_2->addWidget(num4);

        num5 = new QPushButton(layoutWidget);
        num5->setObjectName(QString::fromUtf8("num5"));

        horizontalLayout_2->addWidget(num5);

        num6 = new QPushButton(layoutWidget);
        num6->setObjectName(QString::fromUtf8("num6"));

        horizontalLayout_2->addWidget(num6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        num1 = new QPushButton(layoutWidget);
        num1->setObjectName(QString::fromUtf8("num1"));

        horizontalLayout->addWidget(num1);

        num2 = new QPushButton(layoutWidget);
        num2->setObjectName(QString::fromUtf8("num2"));

        horizontalLayout->addWidget(num2);

        num3 = new QPushButton(layoutWidget);
        num3->setObjectName(QString::fromUtf8("num3"));

        horizontalLayout->addWidget(num3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        num0 = new QPushButton(layoutWidget);
        num0->setObjectName(QString::fromUtf8("num0"));

        horizontalLayout_4->addWidget(num0);

        dot = new QPushButton(layoutWidget);
        dot->setObjectName(QString::fromUtf8("dot"));

        horizontalLayout_4->addWidget(dot);

        del = new QPushButton(layoutWidget);
        del->setObjectName(QString::fromUtf8("del"));

        horizontalLayout_4->addWidget(del);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pone = new QPushButton(layoutWidget);
        pone->setObjectName(QString::fromUtf8("pone"));

        verticalLayout_2->addWidget(pone);

        add = new QPushButton(layoutWidget);
        add->setObjectName(QString::fromUtf8("add"));

        verticalLayout_2->addWidget(add);

        sub = new QPushButton(layoutWidget);
        sub->setObjectName(QString::fromUtf8("sub"));

        verticalLayout_2->addWidget(sub);

        mul = new QPushButton(layoutWidget);
        mul->setObjectName(QString::fromUtf8("mul"));

        verticalLayout_2->addWidget(mul);

        div = new QPushButton(layoutWidget);
        div->setObjectName(QString::fromUtf8("div"));

        verticalLayout_2->addWidget(div);

        equ = new QPushButton(layoutWidget);
        equ->setObjectName(QString::fromUtf8("equ"));

        verticalLayout_2->addWidget(equ);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "calculator", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        clr->setText(QApplication::translate("Widget", "clr", 0, QApplication::UnicodeUTF8));
        num7->setText(QApplication::translate("Widget", "7", 0, QApplication::UnicodeUTF8));
        num8->setText(QApplication::translate("Widget", "8", 0, QApplication::UnicodeUTF8));
        num9->setText(QApplication::translate("Widget", "9", 0, QApplication::UnicodeUTF8));
        num4->setText(QApplication::translate("Widget", "4", 0, QApplication::UnicodeUTF8));
        num5->setText(QApplication::translate("Widget", "5", 0, QApplication::UnicodeUTF8));
        num6->setText(QApplication::translate("Widget", "6", 0, QApplication::UnicodeUTF8));
        num1->setText(QApplication::translate("Widget", "1", 0, QApplication::UnicodeUTF8));
        num2->setText(QApplication::translate("Widget", "2", 0, QApplication::UnicodeUTF8));
        num3->setText(QApplication::translate("Widget", "3", 0, QApplication::UnicodeUTF8));
        num0->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        dot->setText(QApplication::translate("Widget", ".", 0, QApplication::UnicodeUTF8));
        del->setText(QApplication::translate("Widget", "del", 0, QApplication::UnicodeUTF8));
        pone->setText(QApplication::translate("Widget", "\302\261", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("Widget", "+", 0, QApplication::UnicodeUTF8));
        sub->setText(QApplication::translate("Widget", "-", 0, QApplication::UnicodeUTF8));
        mul->setText(QApplication::translate("Widget", "*", 0, QApplication::UnicodeUTF8));
        div->setText(QApplication::translate("Widget", "/", 0, QApplication::UnicodeUTF8));
        equ->setText(QApplication::translate("Widget", "=", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
