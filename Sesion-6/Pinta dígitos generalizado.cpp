/*
	Programa que recibe el valor de un número arbitrario de dígitos
	y los imprime en pantalla con tres espacios entre cada uno de ellos.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int number, cifras, digito, entero, potencia;
	const int TERMINADOR = 0;
	
	cout << "Introduzca un numero entero: ";
	cin >> number;
	
	entero = number;
	cifras = 0;
	
	do{
		number = number / 10;
		cifras++;
	}while (number != TERMINADOR);
	
	do{
		cifras--;
		potencia = pow(10, cifras);
		digito = entero / potencia;
		entero = entero % potencia;
		cout << digito << "   ";
	}while (cifras > TERMINADOR);

}
