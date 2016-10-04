/*
	Programa que analiza si el número introducido
	es un número narcisista, es decir, si se puede 
	obtener como la suma de las potencias n-ésimas
	de cada uno de sus dígitos.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int entero, entero_copia, cifras, prueba_narcisista, resto;
	bool narcisista;
	
	prueba_narcisista = 0;
	cifras = 0;
	
	cout << "Introduzca un numero entero positivo: ";
	cin >> entero;
	
	entero_copia = entero;
	
	while (entero_copia > 0.0){
		entero_copia = entero_copia / 10.0;
		cifras++;
	}
	
	/*
		Se halla el número de cifras
		que tiene el entero introducido.
	*/
	
	entero_copia = entero;
	
	while (prueba_narcisista < entero){
		resto = entero_copia  % 10;
		entero_copia = entero_copia / 10;
		prueba_narcisista = prueba_narcisista + pow (resto, cifras);
	}
	
	/*
		Se suman las distintas cifras
		del entero introducido elevadas
		a la cantidad de cifras que tiene
		para saber si es un narcisista.
	*/
	
	if (prueba_narcisista == entero)
		cout << "\n" << entero << " es un numero narcisista.\n";
	else
		cout << "\n" << entero << " no es un numero narcisista.\n";
}
