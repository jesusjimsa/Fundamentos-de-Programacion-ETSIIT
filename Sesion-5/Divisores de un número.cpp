/*
	Programa que halla los divisores de un valor
	entero positivo "tope" introducido desde el teclado
*/

#include <iostream>

using namespace std;

int main (){
	int tope, divisor;
	
	do{
		cout << "Introduzca un numero positivo: ";
		cin >> tope;
	}while (tope <= 0);
	
	divisor = tope;
	
	do {
		if (tope % divisor == 0){
			cout << "\n" << divisor << " es divisor de " << tope;
			divisor--;
		}
		else{
			cout << "\n" << divisor << " no es divisor de " << tope;
			divisor--;
		}
	}while (tope > 0);
	
}
