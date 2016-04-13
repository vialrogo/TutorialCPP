/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cuerpo de clase Cuadrado.
*/

#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
}

Cuadrado::Cuadrado(int lado)
{
	this->lado = lado; //con esto le digo que a el atributo lado del objeto (this->lado) le coloque el valor de entrada lado.
}

Cuadrado::~Cuadrado()
{
}

//Los dos metodos que siguen fueron definidos en la clase FiguraGeometrica, pero se realizaron aquí.
void Cuadrado::calcularArea()
{
	area = lado*lado;
}

void Cuadrado::imprimirMensaje()
{
	cout<<"Esto es un cuadrado con herencia."<<endl<<"el area del cuadrado es: "<<area<<endl<<endl;
}