#include <iostream>

using namespace std;

void funcion(char** entrada)
{
	entrada[0][0]='1';
	entrada[0][1]='2';
	entrada[1][0]='3';
	entrada[1][1]='4';
}

int main()
{
	char** matriz = new char*[2];
	matriz[0]=new char;
	matriz[1]=new char;
	
	matriz[0][0]='a';
	matriz[0][1]='b';
	matriz[1][0]='c';
	matriz[1][1]='d';
	
	cout<<matriz[0][0]<<" "<<matriz[0][1]<<endl;
	cout<<matriz[1][0]<<" "<<matriz[1][1]<<endl<<endl;
	
	funcion(matriz);
	
	cout<<matriz[0][0]<<" "<<matriz[0][1]<<endl;
	cout<<matriz[1][0]<<" "<<matriz[1][1]<<endl<<endl;
}