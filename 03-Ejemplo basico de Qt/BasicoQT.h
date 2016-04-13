/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cabecera de clase BasicoQT.
*/

#ifndef _BASICOQT_H
#define	_BASICOQT_H

#include <QString>

class BasicoQT
{
public:
	BasicoQT();
	~BasicoQT();
	void calcularCadena(const char* primeraParte, const char* segundaParte);
	QString * devolverCadena();

private:
	QString * cadena;
};

#endif