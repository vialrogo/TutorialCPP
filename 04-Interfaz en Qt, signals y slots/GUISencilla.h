/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cabecera de clase GUISencilla.

	En esta clase se ve una aplicación Qt que se muestra en pantalla. Como se ve la aplicación hereda de QWidget, tiene un
	boton y un label y un slot llamado pulsacionBoton.
*/

#ifndef _GUISENCILLA_H
#define	_GUISENCILLA_H

//Clases de c++ para el majeo de char*
#include <iostream>
#include <string>
#include <sstream>

//Clases de Qt
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

using namespace std;

class GUISencilla: public QWidget
{
	Q_OBJECT

public:
	GUISencilla();
	~GUISencilla();

private:
	int contador;
	QPushButton* boton;
	QLabel* label;

private slots:
	void pulsacionBoton();
};

#endif