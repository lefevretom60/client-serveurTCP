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
    QTcpSocket * socket = qobject_cast<QTcpSocket*>(sender());
    QByteArray requestData = socket->readAll();

    // Convert requestData en QString
    QString request = QString::fromUtf8(requestData);

    if (request.startsWith("Td") && request.endsWith("?"))
    {
        // Extrait le numéro du capteur depuis la demande
        QString sensorNumberStr = request.mid(2, 2);
        int sensorNumber = sensorNumberStr.toInt();

        // Ici, vous devriez obtenir la température du capteur correspondant.
        // Remplacez cela par votre propre logique pour obtenir la température.

        //faire un rand()%55000 apres - 20000 puis diviser par 100
        srand(time(NULL));

        int random = rand() % 5500;

        int Calcule = random - 2000;

        float temperature = Calcule / 100;

        // Formatez la réponse
        QString response = QString("Capteur : Td%1, detecte %2 Celsius").arg(sensorNumber, 2, 10, QChar('0')).arg(temperature, 0, 'f', 2);

        // Envoyez la réponse au client
        socket->write(response.toUtf8());
    }

    if (request.startsWith("Tf") && request.endsWith("?"))
    {
        QString sensorNumberStr = request.mid(2, 2);
        int sensorNumber = sensorNumberStr.toInt();

        srand(time(NULL));

        int random = rand() % 5500;

        int Calcule = random - 2000;

        float Celsius = Calcule / 100;

        float calcule2 = Celsius * 9 / 5 ;

        float temperature = calcule2 + 32;

        QString response = QString("Capteur :Tf%1, detecte %2 Fahrenheit").arg(sensorNumber, 2, 10, QChar('0')).arg(temperature, 0, 'f', 2);

        // Envoyez la réponse au client
        socket->write(response.toUtf8());
    }

    if (request.startsWith("Hr") && request.endsWith("?"))
    {
        QString sensorNumberStr = request.mid(2, 2);
        int sensorNumber = sensorNumberStr.toInt();

        srand(time(NULL));

        int random = rand() % 10000;

        float temperature = random / 100 ;

        QString response = QString("Capteur : Hr%1, detecte %2 % d'hygrometrie").arg(sensorNumber, 2, 10, QChar('0')).arg(temperature, 0, 'f', 2);

        // Envoyez la réponse au client
        socket->write(response.toUtf8());
    }
}

void QTserver::onServerNewConnection()
{
    qDebug() << "client connecter";
    //ui.connectionStatusLabel->setText("Un client s'est connecté");
    QTcpSocket* client = server->nextPendingConnection();
    QObject::connect(client, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
    QObject::connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
}