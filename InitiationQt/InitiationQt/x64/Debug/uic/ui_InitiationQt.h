/********************************************************************************
** Form generated from reading UI file 'InitiationQt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIATIONQT_H
#define UI_INITIATIONQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitiationQtClass
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *IPLineEdit;
    QLineEdit *portLineEdit;
    QPushButton *pushButton_2;
    QLabel *connectionStatusLabel;
    QLabel *MessageEditLine;
    QLabel *label_2;
    QPlainTextEdit *Message;
    QPushButton *BtnC;
    QPushButton *BtnF;
    QPushButton *BtnHr;
    QLabel *label_5;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InitiationQtClass)
    {
        if (InitiationQtClass->objectName().isEmpty())
            InitiationQtClass->setObjectName(QString::fromUtf8("InitiationQtClass"));
        InitiationQtClass->setEnabled(true);
        InitiationQtClass->resize(754, 400);
        centralWidget = new QWidget(InitiationQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 40, 41, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 70, 71, 20));
        IPLineEdit = new QLineEdit(centralWidget);
        IPLineEdit->setObjectName(QString::fromUtf8("IPLineEdit"));
        IPLineEdit->setGeometry(QRect(120, 38, 113, 20));
        portLineEdit = new QLineEdit(centralWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(120, 68, 113, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 98, 75, 23));
        connectionStatusLabel = new QLabel(centralWidget);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));
        connectionStatusLabel->setGeometry(QRect(240, 0, 221, 41));
        MessageEditLine = new QLabel(centralWidget);
        MessageEditLine->setObjectName(QString::fromUtf8("MessageEditLine"));
        MessageEditLine->setGeometry(QRect(460, 200, 151, 101));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 20, 111, 21));
        Message = new QPlainTextEdit(centralWidget);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setGeometry(QRect(490, 30, 101, 51));
        BtnC = new QPushButton(centralWidget);
        BtnC->setObjectName(QString::fromUtf8("BtnC"));
        BtnC->setGeometry(QRect(410, 100, 51, 51));
        BtnF = new QPushButton(centralWidget);
        BtnF->setObjectName(QString::fromUtf8("BtnF"));
        BtnF->setGeometry(QRect(530, 100, 51, 51));
        BtnHr = new QPushButton(centralWidget);
        BtnHr->setObjectName(QString::fromUtf8("BtnHr"));
        BtnHr->setGeometry(QRect(660, 100, 51, 51));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(490, 10, 101, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 20, 111, 31));
        InitiationQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InitiationQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 754, 21));
        InitiationQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(InitiationQtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        InitiationQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(InitiationQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        InitiationQtClass->setStatusBar(statusBar);

        retranslateUi(InitiationQtClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), InitiationQtClass, SLOT(onConnectButtonClicked()));
        QObject::connect(BtnC, SIGNAL(clicked()), InitiationQtClass, SLOT(onSendCelClicked()));
        QObject::connect(BtnF, SIGNAL(clicked()), InitiationQtClass, SLOT(onSendFarClicked()));
        QObject::connect(BtnHr, SIGNAL(clicked()), InitiationQtClass, SLOT(onSendHygClicked()));

        QMetaObject::connectSlotsByName(InitiationQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *InitiationQtClass)
    {
        InitiationQtClass->setWindowTitle(QCoreApplication::translate("InitiationQtClass", "InitiationQt", nullptr));
        label_3->setText(QCoreApplication::translate("InitiationQtClass", "IP ", nullptr));
        label_4->setText(QCoreApplication::translate("InitiationQtClass", "Port", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InitiationQtClass", "Connexion", nullptr));
        connectionStatusLabel->setText(QCoreApplication::translate("InitiationQtClass", "status de connexion : deconnecte", nullptr));
        MessageEditLine->setText(QString());
        label_2->setText(QCoreApplication::translate("InitiationQtClass", "PS : 127.0.0.1", nullptr));
        BtnC->setText(QCoreApplication::translate("InitiationQtClass", "\302\260C", nullptr));
        BtnF->setText(QCoreApplication::translate("InitiationQtClass", "\302\260F", nullptr));
        BtnHr->setText(QCoreApplication::translate("InitiationQtClass", "Hr", nullptr));
        label_5->setText(QCoreApplication::translate("InitiationQtClass", "Saisissez le capteur", nullptr));
        label->setText(QCoreApplication::translate("InitiationQtClass", "type de donnee : 01", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitiationQtClass: public Ui_InitiationQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIATIONQT_H
