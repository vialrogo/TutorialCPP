/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Susana Medina			|
	|  e-mail: sumegor@gmail.com			|
	+---------------------------------------+

	Cabecera de clase Server.
*/

#ifndef _SERVER_H
#define _SERVER_H

#include <iostream>
#include <QString>
#include <QtNetwork>

using namespace std; //Es para poder usar directamente cin, cout y endl.

class Server: public QTcpServer
{
  Q_OBJECT

public:
	Server(int puerto, QObject *padre=0);
	~Server();
	
protected:
  void incomingConnection( int socket );
	
private:
	int  puerto;
	QTcpSocket *cliente;
	QHostAddress IP_cliente;
	QTcpServer* tcpServer;
	
private slots:
	void leerPeticion();
	void enviarRespuesta(QString respuesta);
};

#endif
