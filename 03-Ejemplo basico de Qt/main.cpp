/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Archivo main de ejemplo de qt básico

	En esta clase podemos ver como usamos la clase BasicoQT para hacer la suma de unas cadenas. Estas clases usan la clase
	QString de QT, por lo cual se compilan diferentes.
	Primero de seclara el objeto miBasicoQT, luego los datos con los que se va a trabajar. Es importante ver que se usa
	el método cin para el ingreso de caracteres por consola.
	El método data() de string permite convertir un "string" en un "const char * ".
	El metodo qPrintable permite convertir un QString en un char*

	Podemos compilar este ejemplo con:

		qmake -project
		qmake -makefile
		make

	y podemos correrlo con:

		./<nombre de la carpeta donde se encuentra>
 */

#include <iostream>
#include <QString>
#include "BasicoQT.h"

using namespace std; //Es para poder usar directamente cin, cout y endl.

int main()
{
	BasicoQT* miBasicoQT = new BasicoQT();

	char* Cabecera = "La cadena sumada fue: ";
	string parteA;
	string parteB;

	cout<<"Introduzca la parte A: "<<endl;
	cin>>parteA;

	cout<<"Introduzca la parte B: "<<endl;
	cin>>parteB;

	miBasicoQT->calcularCadena(parteA.data(), parteB.data());

	QString* cadenaSumada = miBasicoQT->devolverCadena();

	cout<<Cabecera<<qPrintable(*cadenaSumada)<<endl;

	return 0;
}