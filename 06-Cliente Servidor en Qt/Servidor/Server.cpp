/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Susana Medina			|
	|  e-mail: sumegor@gmail.com			|
	+---------------------------------------+

	Cuerpo de clase Server.
*/
 
#include "Server.h"

Server::Server(int puerto, QObject *padre) //Constructor
:QTcpServer(padre) //Hereda de QTcpServer
{	
	this->puerto=puerto;
	tcpServer = new QTcpServer(this);
	
	cout<<"escuchando por el puerto "<<qPrintable(QString::number(this->puerto))<<endl;
	cout<<"iniciando servidor ..."<<endl;
}

Server::~Server()
{
}

void Server::incomingConnection(int socket) //Método sobre-escrito!! Siempre tiene que ir.
{
    cliente = new QTcpSocket(this);
    cliente->setSocketDescriptor(socket);

	qDebug() << "Nuevo cliente!"; //Mensaje de salida por consola.

	//Este conect es importante que vaya aquí, ya que sólo después de que se entra a el metodo incomingConnection()
	//se puede crear el cliente con el número del puerto.
    connect(cliente, SIGNAL(readyRead()), this, SLOT(leerPeticion()));
}

//Este método se ejecuta automáticamente cada vez que haya contenido para leer.
void Server::leerPeticion()
{
	//La siguiente linea es bastante curiosa. Es la forma correcta de realizar la lectura según la propia documentación
	//de Qt, sin embargo en la misma documentación dicen que la linea no tiene explicación porque rompe el paradigma
	//orientado a objetos. Se puede decir que sender() es un método heredado de TcpServer y poco mas.
	QTcpSocket* socket = (QTcpSocket*)sender();

    IP_cliente=socket->peerAddress();
    QString peticion = QString(socket->readAll());

    cout<<endl<<"Peticion Recibida del Cliente "<<qPrintable(IP_cliente.toString())<<endl;
    cout<<"Datos leidos: "<<qPrintable(peticion)<<endl;

    enviarRespuesta(QString("Peticion procesada -> ").append(peticion));

	//Para una implementación con múltiples clientes es importante cerrar el socket (y de ser necesario destruir el
	//objeto) cada vez que se termina de leer un mensaje:
//	socket->close();
}

void Server::enviarRespuesta(QString respuesta)
{
    cliente->write(respuesta.toUtf8());
}
