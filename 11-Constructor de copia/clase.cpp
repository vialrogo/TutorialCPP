#include "clase.h"

Clase::Clase()
{
	valor=5;
}

Clase::Clase(const Clase& otro)
{
	valor = otro.valor;
}

Clase::~Clase(){}
