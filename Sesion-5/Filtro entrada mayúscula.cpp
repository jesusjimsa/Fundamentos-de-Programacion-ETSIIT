/*
	Programa que lee solamente una may�scula introducida
	desde el teclado y la convierte en min�scula.
*/

#include <iostream>

using namespace std;

int main (){
	char mayus, minus;
	const char diferencia = 'a' - 'A';
	
	do{
		cout << "Introduzca una letra mayuscula: ";
		cin >> mayus;
	}while (mayus < 'A' || mayus > 'Z');
	
	minus = mayus + diferencia;
	
	cout << "\n" << mayus << " en minuscula es " << minus;
}
