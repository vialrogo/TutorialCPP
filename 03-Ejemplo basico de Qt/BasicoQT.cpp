/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cuerpo de clase BasicoQT.
*/

#include "BasicoQT.h"

BasicoQT::BasicoQT()
{
	cadena = new QString();
}

BasicoQT::~BasicoQT()
{
}

void BasicoQT::calcularCadena(const char* primeraParte, const char* segundaParte)
{
	cadena->append(primeraParte);
	cadena->append(segundaParte);
}

QString * BasicoQT::devolverCadena()
{
	return cadena;
}