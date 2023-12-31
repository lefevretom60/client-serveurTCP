#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_InitiationQt.h"
#include <qtcpsocket.h>
#include <qtcpserver.h>

class InitiationQt : public QMainWindow
{
	Q_OBJECT

public:
	InitiationQt(QWidget *parent = Q_NULLPTR);


private:
	Ui::InitiationQtClass ui;
	QTcpSocket * socket;
	QTcpServer * server;

public slots:

	void onConnectButtonClicked();
	void onSocketConnected();
	void onSocketDisconnected();
	void onSendMessageButtonClicked();
	void onSocketReadyRead();
	void onServerNewConnection();
	void onClientDisconnected();
	void onClientReadyRead();
	void onSendCelClicked();
	void onSendFarClicked();
	void onSendHygClicked();
	

};