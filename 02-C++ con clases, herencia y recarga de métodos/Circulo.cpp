/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cuerpo de clase Circulo.
*/

#include "Circulo.h"

Circulo::Circulo()
{
}

Circulo::Circulo(int radio)
{
	this->radio = radio;
}

Circulo::~Circulo()
{
}

//Los dos metodos que siguen fueron definidos en la clase FiguraGeometrica, pero se realizaron aquí.
void Circulo::calcularArea()
{
	area = 2*radio*3.1416;
}

void Circulo::imprimirMensaje()
{
	cout<<"Esto es un circulo con herencia."<<endl<<"el area del circulo es: "<<area<<endl<<endl;
}