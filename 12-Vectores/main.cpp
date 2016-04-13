/*
 * Creado por: Victor Alberto Romero
 *
 * En este archivo vamos a ver la manipulación de arreglos estáticos, dinámicos
 * y std::vector
 */

#include <iostream>
#include <vector>

// Para no tener que usar "std::" todo el tiempo 
using namespace std;

int main()
{
    /////////////////////////////////////////////////////////////////////////////
    // Arreglo estático
    /////////////////////////////////////////////////////////////////////////////
    
    // Creación del arreglo
    int arregloEstatico[10]; //Creado estáticamente de 10 posiciones

    // Inserción en el arreglo
    for (int i = 0; i < 10; i++)
        arregloEstatico[i] = i*i; //En cada posición coloco el cuadrado del indice

    // Procura en el arreglo
    for (int i = 0; i < 10; i++)
        cout<< "Arreglo estático: La posición "<<i<< " contiene "<< arregloEstatico[i]<<endl;
    
    /////////////////////////////////////////////////////////////////////////////
    // Arreglo dinámico
    /////////////////////////////////////////////////////////////////////////////
    
    // Creación del arreglo
    int* arregloDinamico = new int[10]; //Creado dinámicamente de 10 posiciones

    // Inserción en el arreglo
    for (int i = 0; i < 10; i++)
        arregloDinamico[i] = i*i; //En cada posición coloco el cuadrado del indice

    // Procura en el arreglo
    for (int i = 0; i < 10; i++)
        cout<< "Arreglo dinámico: La posición "<<i<< " contiene "<< arregloDinamico[i]<<endl;
    
    /////////////////////////////////////////////////////////////////////////////
    // Vector estático
    /////////////////////////////////////////////////////////////////////////////
    
    // Creación del arreglo
    vector<int> vectorEstatico; //Creado estáticamente de 10 posiciones

    // Inserción en el arreglo
    for (int i = 0; i < 10; i++)
        vectorEstatico.push_back(i*i); //En cada posición coloco el cuadrado del indice

    // Procura en el arreglo
    for (int i = 0; i < vectorEstatico.size(); i++)
        cout<< "Vector estático: La posición "<<i<< " contiene "<< vectorEstatico[i]<<endl;

    /////////////////////////////////////////////////////////////////////////////
    // Vector dinámico
    /////////////////////////////////////////////////////////////////////////////
    
    // Creación del arreglo
    vector<int>* vectorDinamico = new vector<int>(); //Creado estáticamente de 10 posiciones

    // Inserción en el arreglo
    for (int i = 0; i < 10; i++)
        vectorDinamico->push_back(i*i); //En cada posición coloco el cuadrado del indice

    // Procura en el arreglo
    for (int i = 0; i < vectorDinamico->size(); i++)
        cout<< "Vector dinámico: La posición "<<i<< " contiene "<< vectorDinamico->at(i)<<endl;


    // Deletes
    delete arregloDinamico;
    delete vectorDinamico;

    return 0;
}
