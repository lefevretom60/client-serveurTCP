#pragma once
#include <qtcpsocket.h>
#include <qtcpserver.h>
#include <qobject.h>

class QTserver : public QObject
{
	Q_OBJECT

public:
	QTserver(QObject* parent = Q_NULLPTR);
	virtual ~QTserver();

private:

	QTcpServer * server;

public slots:

	void onServerNewConnection();
	void onClientDisconnected();
	void onClientReadyRead();
};