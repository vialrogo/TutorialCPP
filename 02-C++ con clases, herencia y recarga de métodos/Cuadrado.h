/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cabecera de clase Cuadrado.
*/

#ifndef _CUADRADO_H
#define	_CUADRADO_H

#include "FiguraGeometrica.h"
#include <iostream>

using namespace std; //Gracias a esta linea se puede usar directamente cout y no hay que hacer std::cout

class Cuadrado: public FiguraGeometrica
{
public:
	Cuadrado();			//Este es un constructor Vacio
	Cuadrado(int lado); //Este es un constructor con una entrada
	~Cuadrado();
	void calcularArea();   // Aquí si se van a implementar
	void imprimirMensaje();

private:
	int lado;
};

#endif