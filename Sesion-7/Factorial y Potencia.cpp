/*
	Programa que calcula la exponencial
	y el factorial.
*/

#include <iostream>

using namespace std;

double factorial (double exponente_factorial){
	int final_factorial;
	double resultado_factorial;
	
	final_factorial = 1.0;
	resultado_factorial = 1.0;
	
	if (exponente_factorial == 0.0){
		resultado_factorial = 1.0;
	}
	else{
		while (final_factorial < exponente_factorial){
			resultado_factorial = resultado_factorial * (final_factorial + 1);
			final_factorial++;
		}
	}
	
	return resultado_factorial;
}

int LeeEnteroPositivo (int entero){
	const int positivo = - 1;
	
	if (entero < 0)
		entero = entero * positivo;
	
	return entero;
}


int main (){
	int exponente_factorial, copia_exponente_factorial;
	double base, repeticiones_base, potencia, resultado_factorial;
	
	repeticiones_base = 1.0;
	
	cout << "Introduzca la base de la potencia: ";
	cin >> base;
	base = LeeEnteroPositivo(base);
	cout << "Introduzca el exponente (tambien sera usado para el factorial): ";
	cin >> exponente_factorial;
	exponente_factorial = LeeEnteroPositivo(exponente_factorial)
	
	potencia = base;
	
	if (base == 0.0)
		potencia = 0.0;
	else{
		while (repeticiones_base < exponente_factorial){
		potencia = potencia * base;
		repeticiones_base++;
		}
	}
	
	resultado_factorial = factorial (exponente_factorial);
	
	cout << "\nLa potencia de " << base << " , con exponente " << exponente_factorial << " vale: " << potencia;
	cout << "\nEl factorial " << exponente_factorial << " vale: " << resultado_factorial << "\n";
}
