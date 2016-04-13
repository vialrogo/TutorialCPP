/*
	+---------------------------------------+
	|  Ejemplos-Tutorial C++ con Qt			|
	|  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^			|
	|  Creado por: Victor Alberto Romero	|
	|  e-mail: vialrogo@gmail.com			|
	+---------------------------------------+

	Cabecera de clase FiguraGeometrica.
*/

#ifndef _FIGURAGEOMETRICA_H
#define	_FIGURAGEOMETRICA_H

class FiguraGeometrica
{
public:
	FiguraGeometrica();  //Es un método constructor
	~FiguraGeometrica(); //Es un método destructor
	void calcularArea();  // Es un método que no se implementa porque depende de cada figura geometrica
	void imprimirMensaje();

protected:
	double area;

private:

};

#endif