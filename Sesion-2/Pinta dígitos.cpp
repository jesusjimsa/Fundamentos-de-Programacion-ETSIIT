/*
	Programa que recibe el valor de tres dígitos y los imprime en pantalla con tres espacios entre cada uno de ellos.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double number;
	int centenas, decenas, unidades;
	
	cout << "Introduzca un numero de tres cifras: ";
	cin >> number;
	
	centenas = number / 100;
	decenas = number / 10 - centenas * 10;
	unidades = number - decenas * 10 - centenas * 100;

	
	cout << "\n" << centenas << "   " << decenas << "   " << unidades << "\n\n";
}
