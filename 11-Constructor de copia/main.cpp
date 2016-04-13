#include "clase.h"
#include <iostream>

int main()
{
	Clase* clasesita = new Clase();
	clasesita->valor=9;
	Clase* otraclasesita = new Clase(*clasesita);

	std::cout<<"valor original: "<<clasesita->valor<<", valor de la copia: "<<otraclasesita->valor<<std::endl;
	return 0;
}
