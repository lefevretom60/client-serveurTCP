#include "InitiationQt.h"
#include "ui_InitiationQt.h"

#include <QTextEdit>
#include <QMessageBox>

InitiationQt::InitiationQt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	socket = new QTcpSocket(this);
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
	QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));
	
	server = new QTcpServer(this);
	QObject::connect(server, SIGNAL(newConnection()), this, SLOT(onServerNewConnection()));
	server->listen(QHostAddress::AnyIPv4, 4321);

}

void InitiationQt::onConnectButtonClicked(){
	QString ip = ui.IPLineEdit->text();
	QString port = ui.portLineEdit->text();


	bool ok;
	int portAsInt = port.toInt(&ok);
	if (ok)
	{
		socket->connectToHost(ip, portAsInt);
	}
}
void InitiationQt::onSocketConnected(){
	ui.connectionStatusLabel->setText("Status connexion : connecte !");
}
void InitiationQt::onSocketDisconnected(){
	ui.connectionStatusLabel->setText("Status connexion : Deconnecte !");
}


void InitiationQt::onSendMessageButtonClicked() {
	if (socket->state() == QTcpSocket::ConnectedState) {
		QString contenu = ui.Message->toPlainText();

		// Vérifier si le champ de texte est vide
		if (contenu.isEmpty()) {
			QMessageBox::critical(this, "Cette exception est gere !!!", "Le champ de texte est vide.Reessaye");
		}
		else {
			QByteArray data = contenu.toUtf8();
			socket->write(data);
			ui.Message->clear();
		}

	}
}
void InitiationQt::onSocketReadyRead(){

	QByteArray data = socket->read(socket->bytesAvailable());
	QString str(data);

	int indexVirgule = str.indexOf(',');  // Trouver l'index de la virgule

	QString avantLaVirgule;
	QString aprèsLaVirgule;

	if (indexVirgule != -1 && indexVirgule < str.length() - 1) {
		avantLaVirgule = str.left(indexVirgule).trimmed();
		aprèsLaVirgule = str.mid(indexVirgule + 1).trimmed();
	}

	ui.MessageEditLine->setText("le capteur est " + avantLaVirgule + " = " + aprèsLaVirgule);

}
void InitiationQt::onServerNewConnection(){
	ui.connectionStatusLabel->setText("Un client s'est connecte");
	QTcpSocket * client = server->nextPendingConnection();
	QObject::connect(client, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
	QObject::connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
}
void InitiationQt::onClientDisconnected(){
	QTcpSocket *obj = qobject_cast<QTcpSocket*>(sender());
	QObject::disconnect(obj, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
	QObject::disconnect(obj, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
	obj->deleteLater();
}
void InitiationQt::onClientReadyRead(){
	QTcpSocket *obj = qobject_cast<QTcpSocket*>(sender());
	QByteArray coucou = obj->read(obj->bytesAvailable());
	QString str(coucou);
	ui.MessageEditLine->setText("Message recu = " + str);
	obj->write(coucou);
}

void InitiationQt::onSendCelClicked()
{
	QString celsuis = "Td";
	QString interrogation = "?";
	QString contenu = ui.Message->toPlainText();
	QByteArray data = celsuis.toUtf8();
	QByteArray data2 = contenu.toUtf8();
	QByteArray data3 = interrogation.toUtf8();
	socket->write(data + data2 + data3);
}
void InitiationQt::onSendFarClicked()
{
	QString celsuis = "Tf";
	QString interrogation = "?";
	QString contenu = ui.Message->toPlainText();
	QByteArray data = celsuis.toUtf8();
	QByteArray data2 = contenu.toUtf8();
	QByteArray data3 = interrogation.toUtf8();
	socket->write(data + data2+ data3);
}
void InitiationQt::onSendHygClicked()
{
	QString celsuis = "Hr";
	QString interrogation = "?";
	QString contenu = ui.Message->toPlainText();
	QByteArray data = celsuis.toUtf8();
	QByteArray data3 = interrogation.toUtf8();
	QByteArray data2 = contenu.toUtf8();
	socket->write(data + data2+ data3);
}