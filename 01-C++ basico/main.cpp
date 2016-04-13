/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

 Archívo básico de c++

 Este archivo muestra el contenido básico de un archivo en c++. Al igual que en java, se pueden reconocer dos "tipos" de
 archivos: un archivo de clase y un archivo main. Este es un archivo main. El método principal devuelve un entero, el cual
 debe ser 0 para indicar una finalización correcta (cuando sale con errores puede ser 1 u otro número). Para compilar este
 archivo copiamos en consola:

	g++ -o <archivosalida> main.cpp

 <archivosalida> va a pasar a ser entonces el archivo ejecutable resultado de la compilación. Para ejecutarlo hacemos:

	./<archivosalida>

En el código de este archivo vemos una linea include que contiene las librerias que fueron agregadas al proyecto. En este
caso aregamos la librería iostream. De ese librería usamos la clase std, la cual estamos llamando de manera estática (osea
sin crear un objeto de ella) mediante los :: y estamos llamando a los métodos cout y endl, que son flujo de salida y salto
de linea respectivamente.

 */

#include <iostream>

int main()
{
	std::cout<<"Hola mundo"<<std::endl;

	return 0;
}