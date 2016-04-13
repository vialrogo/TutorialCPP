/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Archivo main de ejemplo de herencia

	En este ejemplo se ven la clase FiguraGeometrica de la cual heredan tanto Circulo como Cuadrado. Se harán dos tipos de
	declaraciones de objetos, estaticos y dinámicos.

	Podemos compilar este ejemplo con:

		g++ -o exe *.cpp

	y podemos correrlo con:

		./exe
 */

#include <iostream>
#include "Cuadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
	cout<<"Ejemplo de herencia:"<<endl;
	cout<<"^^^^^^^^^^^^^^^^^^^^"<<endl<<endl;

	Cuadrado * miCuadrado = new Cuadrado(5); //Cree un objeto dinámico el cual es un puntero a cuadrado. El lado lo coloqué en 5.
	Circulo miCirculo(4); //Este objeto se declaró de manera estatica con radio 4.

	miCuadrado->calcularArea(); //Va con -> porque es un puntero (dinámico).
	miCirculo.calcularArea();   //Va con . porque es un objeto estático.

	miCuadrado->imprimirMensaje();
	miCirculo.imprimirMensaje();

	return 0;
}