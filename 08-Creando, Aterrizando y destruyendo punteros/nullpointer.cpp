#include <iostream>

using namespace std;

void funcion(int* entrada)
{
	if(entrada==0)
		cout<<"null"<<endl;
	else
		cout<<"no null"<<endl;
}

int main()
{
	int * puntero=0;
	
	funcion(puntero);

	puntero= new int[10];

	funcion(puntero);
	
}
