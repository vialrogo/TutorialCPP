/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Susana Medina			|
	|  e-mail: sumegor@gmail.com			|
	+---------------------------------------+

	Cabecera de clase Cliente.
*/

#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <iostream>
#include <QString>
#include <QtNetwork>
#include <QtGui>

using namespace std; //Es para poder usar directamente cin, cout y endl.

class Cliente: public QTcpSocket
{
  Q_OBJECT
public:
	Cliente(int puerto,QHostAddress IP_servidor, QObject *padre=0);
	~Cliente();

private:
	int  puerto_servidor;
	QHostAddress IP_cliente; //IP propia de la máquina
	QHostAddress IP_servidor; //IP de la máquina servidor
	QTcpSocket *tcpSocket;
	
public slots:
	void enviarPeticion(QString mensaje);
	void mostrarRespuesta();
};

#endif
