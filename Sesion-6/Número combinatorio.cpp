/*
	Programa que hace el combinatorio
	con n y m valores enteros.
*/

#include <iostream>

using namespace std;

int main (){
	long long arriba, abajo, resta, combinatorio, final_factorial, factorial_arriba,
		factorial_abajo, factorial_resta;
	
	final_factorial = 1.0;
	factorial_arriba = 1.0;
	factorial_abajo = 1.0;
	factorial_resta = 1.0;
	
	cout << "Introduzca n: ";
	cin >> arriba;
	cout << "Introduzca m: ";
	cin >> abajo;
	
	resta = arriba - abajo;
	
	 while (final_factorial < arriba){
			factorial_arriba = factorial_arriba * (final_factorial + 1);
			final_factorial++;
		}
		
	final_factorial = 1.0;
		
	while (final_factorial < abajo){
			factorial_abajo = factorial_abajo * (final_factorial + 1);
			final_factorial++;
		}
	
	final_factorial = 1.0;
	
	while (final_factorial < resta){
			factorial_resta = factorial_resta * (final_factorial + 1);
			final_factorial++;
		}
		
	combinatorio = factorial_arriba / (factorial_abajo * factorial_resta);
	
	cout << "\nEl numero combinatorio de " << arriba << " y " << abajo << " es " << combinatorio << "\n";
}
