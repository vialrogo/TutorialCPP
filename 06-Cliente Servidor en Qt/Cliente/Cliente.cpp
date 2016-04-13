/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Susana Medina			|
	|  e-mail: sumegor@gmail.com			|
	+---------------------------------------+

	Cuerpo de clase Cliente.
*/

#include "Cliente.h"

Cliente::Cliente(int puerto,QHostAddress IP_servidor, QObject *padre) //Método constructor
	:QTcpSocket(padre) //hereda de QTcpSocket
{	
	this->puerto_servidor=puerto;
	this->IP_servidor= IP_servidor;
	tcpSocket = new QTcpSocket(this);

	cout<<"iniciando cliente!"<<endl;

	//Este conect detecta cuando hay una respuesta y la muestra
	connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(mostrarRespuesta()));
	tcpSocket->connectToHost(IP_servidor,puerto);
}

Cliente::~Cliente()
{
}

//Mediante este método se envia el string de mensaje al servidor
void Cliente::enviarPeticion(QString mensaje)
{
     IP_cliente=this->peerAddress();
     tcpSocket->write(QString(mensaje+ "\n").toUtf8());
     cout<<"enviando peticion..."<<endl;
}

//Este método muestra el mensaje de respuesta recibido del servidor
void Cliente::mostrarRespuesta()
{
    cout<<endl<<"Respuesta recibida del Servidor "<<qPrintable(IP_servidor.toString())<<endl;
    cout<<qPrintable(QString(tcpSocket->readAll()))<<endl;
}
