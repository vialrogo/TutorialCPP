/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cuerpo de clase BasicoQT.

	Aqui contruimos nuestra GUI. Para eso en el método constructor declaramos todos los objetos y un layout con el cual
	organizarlos en la interfaz. Luego haacemos la conexión de una señal y un slot.
*/

#include "GUISencilla.h"

GUISencilla::GUISencilla()
{
	contador = 0;
	boton = new QPushButton("Pulsar!",this);
	label = new QLabel("Se ha pulsado 0 veces",this);

	QGridLayout *layout = new QGridLayout;
	layout->addWidget(label, 0, 0); //Coloca la etiqueta en la posición fila 0, columna 0
	layout->addWidget(boton, 1, 0); //Coloca el boton en la posición fila 1, columna 0
	layout->setSizeConstraint(QLayout::SetFixedSize);
	setLayout(layout); //este método se heredó de QWidget y coloca el layout con todas las cosas en el Widget.

	connect(boton, SIGNAL(clicked()), this, SLOT(pulsacionBoton())); //Esto es muuuuuy importante!! esto conecta una SEÑAL
	//que produce el boton llamada clicked con una accion (SLOT) llamada pulsacionBoton(). En la sintaxis va: objeto que
	// produce señal, señal, objeto que contiene escucha, escucha. Se puede conectar mas de un escucha a una señal, y
	//varias señales se pueden conectar al mismo escucha.
}

GUISencilla::~GUISencilla()
{
}

void GUISencilla::pulsacionBoton() //Este slot se ejecuta cada vez que la señal clicked lo dispara.
{
	contador++;
	QString cadena;

	stringstream ss; //Esto es un truquito para convertir un int en un const char* y poder pasarlo al QString.
    ss << contador;

	cadena.append("Se ha pulsado ");
	cadena.append(ss.str().data()); //Aquí convierto el stringstream a string y luego a const char*
	cadena.append(" veces");

	label->setText(cadena);
}
