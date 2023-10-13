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
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *IPLineEdit;
    QLineEdit *portLineEdit;
    QPushButton *pushButton_2;
    QLabel *connectionStatusLabel;
    QPushButton *pushButton_4;
    QLabel *MessageEditLine;
    QLabel *label_2;
    QPlainTextEdit *Message;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InitiationQtClass)
    {
        if (InitiationQtClass->objectName().isEmpty())
            InitiationQtClass->setObjectName(QString::fromUtf8("InitiationQtClass"));
        InitiationQtClass->setEnabled(true);
        InitiationQtClass->resize(1128, 400);
        centralWidget = new QWidget(InitiationQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 230, 131, 81));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(306, 50, 41, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 80, 71, 20));
        IPLineEdit = new QLineEdit(centralWidget);
        IPLineEdit->setObjectName(QString::fromUtf8("IPLineEdit"));
        IPLineEdit->setGeometry(QRect(350, 50, 113, 20));
        portLineEdit = new QLineEdit(centralWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(350, 80, 113, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 110, 75, 23));
        connectionStatusLabel = new QLabel(centralWidget);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));
        connectionStatusLabel->setGeometry(QRect(580, 80, 451, 41));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(370, 170, 75, 23));
        MessageEditLine = new QLabel(centralWidget);
        MessageEditLine->setObjectName(QString::fromUtf8("MessageEditLine"));
        MessageEditLine->setGeometry(QRect(320, 210, 391, 171));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 32, 111, 21));
        Message = new QPlainTextEdit(centralWidget);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setGeometry(QRect(90, 240, 151, 91));
        InitiationQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InitiationQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1128, 21));
        InitiationQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(InitiationQtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        InitiationQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(InitiationQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        InitiationQtClass->setStatusBar(statusBar);

        retranslateUi(InitiationQtClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), InitiationQtClass, SLOT(onConnectButtonClicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), InitiationQtClass, SLOT(onSendMessageButtonClicked()));

        QMetaObject::connectSlotsByName(InitiationQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *InitiationQtClass)
    {
        InitiationQtClass->setWindowTitle(QCoreApplication::translate("InitiationQtClass", "InitiationQt", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("InitiationQtClass", "IP ", nullptr));
        label_4->setText(QCoreApplication::translate("InitiationQtClass", "Port", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InitiationQtClass", "Connexion", nullptr));
        connectionStatusLabel->setText(QCoreApplication::translate("InitiationQtClass", "status de connexion : deconnecte", nullptr));
        pushButton_4->setText(QCoreApplication::translate("InitiationQtClass", "Envoyer", nullptr));
        MessageEditLine->setText(QString());
        label_2->setText(QCoreApplication::translate("InitiationQtClass", "PS : 127.0.0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitiationQtClass: public Ui_InitiationQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIATIONQT_H
