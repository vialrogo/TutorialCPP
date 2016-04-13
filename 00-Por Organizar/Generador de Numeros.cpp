/*
 * Creado por: 	Victor Alberto Romero
 * 				vialrogo@gmail.com
 * 				Marzo 21 de 2013
 *
 * Genera un archivo con números consecutivos entre inicio y fin,
 * siendo estos números completos: 001,002,..099, etc.
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int inicio = 0;
	int fin = 1000000000;
	int largo =  log10(fin);
	
	ofstream outFile;
	outFile.open("Data.txt"); 

	if (outFile.fail())
	{
		cout << "Pailas, no se pudo abrir el archivo :-/ \"Data.txt\""<<endl;
		return 1;
	}

	for (int i = inicio; i < fin; i++)
		outFile << setw(largo) << setfill('0') << i << 0 << endl;

	outFile.close();
	return 0;
}
