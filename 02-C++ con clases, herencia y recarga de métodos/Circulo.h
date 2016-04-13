/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cabecera de clase Circulo.
*/

#ifndef _CIRCULO_H
#define	_CIRCULO_H

#include "FiguraGeometrica.h"
#include <iostream>

using namespace std; //Gracias a esta linea se puede usar directamente cout y no hay que hacer std::cout

class Circulo: public FiguraGeometrica
{
public:
	Circulo();			//Este es un constructor Vacio
	Circulo(int radio); //Este es un constructor con una entrada
	~Circulo();
	void calcularArea();   // Aquí si se van a implementar
	void imprimirMensaje();

private:
	int radio;
};

#endif