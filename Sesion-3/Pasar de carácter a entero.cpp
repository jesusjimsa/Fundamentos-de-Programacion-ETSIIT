/*
	Programa que asigna un el valor de un caracter a un entero.
*/

#include <iostream>

using namespace std;

int main (){
	int entero;
	char caracter;
	const int cambio_a_entero = 48;
	
	cout << "Introduzca un numero del 0 al 9: ";
	cin >> caracter;
	
	entero = caracter - cambio_a_entero;
	
	cout << "\nEl valor asignado al entero es " << entero;
	
}
