/*
	Programa que calcula la exponencial
	y el factorial.
*/

#include <iostream>

using namespace std;



int main (){
	int exponente_factorial, final_factorial, copia_exponente_factorial;
	double base, repeticiones_base, potencia, factorial;
	
	final_factorial = 1.0;
	repeticiones_base = 1.0;
	factorial = 1.0;
	
	cout << "Introduzca la base de la potencia: ";
	cin >> base;
	cout << "Introduzca el exponente (tambien sera usado para el factorial): ";
	cin >> exponente_factorial;
	
	potencia = base;
	
	if (base == 0.0)
		potencia = 0.0;
	else{
		while (repeticiones_base < exponente_factorial){
		potencia = potencia * base;
		repeticiones_base++;
		}
	}

	if (exponente_factorial == 0.0){
		factorial = 1.0;
		potencia = 1.0;
	}
	else{
		while (final_factorial < exponente_factorial){
			factorial = factorial * (final_factorial + 1);
			final_factorial++;
		}
	}
	
	cout << "\nLa potencia de " << base << " vale: " << potencia;
	cout << "\nEl factorial " << exponente_factorial << " vale: " << factorial << "\n";
}
