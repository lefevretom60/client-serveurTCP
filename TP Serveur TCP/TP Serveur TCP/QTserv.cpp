#include "QTserv.h"


QTserver::QTserver(QObject* parent)
   : QObject(parent)
{
    server = new QTcpServer(this);
        
    QObject::connect(server, SIGNAL(newConnection()), this, SLOT(onServerNewConnection()));

    server->listen(QHostAddress::AnyIPv4, 4321);
}

QTserver::~QTserver()
{
}

void QTserver::onClientDisconnected()
{
    QTcpSocket * obj = qobject_cast<QTcpSocket*>(sender());
    QObject::connect(obj, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));    
    QObject::connect(obj, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
    obj->deleteLater();
}

void QTserver::onClientReadyRead()
{
    QTcpSocket * obj = qobject_cast<QTcpSocket*>(sender());
}

void QTserver::onServerNewConnection()
{
    //ui.connectionStatusLabel->setText("Un client s'est connecté");
    QTcpSocket* client = server->nextPendingConnection();
    QObject::connect(client, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
    QObject::connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
}