/********************************************************************************
** Form generated from reading UI file 'atm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_H
#define UI_ATM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_atm
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonDeposit;
    QPushButton *pushButton_Withdraw;
    QPushButton *pushButton_Clear;
    QPushButton *pushButtonView;
    QLineEdit *lineEditX;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label1;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *atm)
    {
        if (atm->objectName().isEmpty())
            atm->setObjectName("atm");
        atm->resize(425, 431);
        centralwidget = new QWidget(atm);
        centralwidget->setObjectName("centralwidget");
        pushButtonDeposit = new QPushButton(centralwidget);
        pushButtonDeposit->setObjectName("pushButtonDeposit");
        pushButtonDeposit->setGeometry(QRect(80, 170, 101, 29));
        pushButton_Withdraw = new QPushButton(centralwidget);
        pushButton_Withdraw->setObjectName("pushButton_Withdraw");
        pushButton_Withdraw->setGeometry(QRect(80, 220, 101, 29));
        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName("pushButton_Clear");
        pushButton_Clear->setGeometry(QRect(240, 220, 101, 29));
        pushButtonView = new QPushButton(centralwidget);
        pushButtonView->setObjectName("pushButtonView");
        pushButtonView->setGeometry(QRect(80, 290, 261, 29));
        lineEditX = new QLineEdit(centralwidget);
        lineEditX->setObjectName("lineEditX");
        lineEditX->setGeometry(QRect(232, 170, 121, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 30, 111, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 60, 111, 20));
        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(250, 90, 111, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 30, 111, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 60, 111, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 90, 111, 20));
        atm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(atm);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 425, 25));
        atm->setMenuBar(menubar);
        statusbar = new QStatusBar(atm);
        statusbar->setObjectName("statusbar");
        atm->setStatusBar(statusbar);

        retranslateUi(atm);

        QMetaObject::connectSlotsByName(atm);
    } // setupUi

    void retranslateUi(QMainWindow *atm)
    {
        atm->setWindowTitle(QCoreApplication::translate("atm", "atm", nullptr));
        pushButtonDeposit->setText(QCoreApplication::translate("atm", "Deposit", nullptr));
        pushButton_Withdraw->setText(QCoreApplication::translate("atm", "Withdraw", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("atm", "Clear", nullptr));
        pushButtonView->setText(QCoreApplication::translate("atm", "View Transactions", nullptr));
        label_2->setText(QCoreApplication::translate("atm", "Eman", nullptr));
        label_3->setText(QCoreApplication::translate("atm", "1241254", nullptr));
        label1->setText(QCoreApplication::translate("atm", "0", nullptr));
        label_5->setText(QCoreApplication::translate("atm", "Client Name:", nullptr));
        label_6->setText(QCoreApplication::translate("atm", "Account Number:", nullptr));
        label_7->setText(QCoreApplication::translate("atm", "Account Balance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atm: public Ui_atm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_H
