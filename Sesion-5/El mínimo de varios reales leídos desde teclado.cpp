/*
	Programa que lee enteros, los cuenta y da el mínimo
	de ellos.
*/

#include <iostream>

using namespace std;

int main (){
	int dato, acumulacion, minimo;
	const int terminador = 0;
	
	acumulacion = 0;
	
	cout << "Introduzca enteros (el cero servira para terminar): ";
	cin >> dato;
	
	minimo = dato;
	
	while (dato != terminador){
		if (dato <= minimo){
			minimo = dato;
		}
		cin >> dato;
		acumulacion++;
	}
	
	cout << "\nSe han introducido " << acumulacion << " satos enteros.";
	cout << "\nEl minimo de todos esos datos es: " << minimo << "\n";
}
