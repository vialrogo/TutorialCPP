/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Archivo main de ejemplo de qt básico

	En esta clase se ve como se invoca a una aplicación Qt.

	Podemos compilar este ejemplo con:

		qmake -project
		qmake -makefile
		make

	y podemos correrlo con:

		./<nombre de la carpeta donde se encuentra>
 */

#include <QtGui/QApplication>
#include "GUISencilla.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

	GUISencilla* miGUISencilla = new GUISencilla();
    miGUISencilla->show();
    return app.exec();
}