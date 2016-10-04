/*
	Programa que lee tres valores introducidos desde el teclado
	y analiza si están ordenados.
*/

#include <iostream>

using namespace std;

int main (){
	int primer_valor, segundo_valor, tercer_valor;
	
	cout << "Introduzca los tres valores separados por espacios: ";
	cin >> primer_valor;
	cin >> segundo_valor;
	cin >> tercer_valor;
	
	if (primer_valor <= segundo_valor && segundo_valor <= tercer_valor){
		cout << "\nLos tres valores introducidos estan ordenados de forma ascendente.\n";
	}
	else{
		if (primer_valor >= segundo_valor && segundo_valor >= tercer_valor){
			cout << "\nLos tres valores introducidos estan ordenados de forma descendente.\n";
		}
		else{
			cout << "\nLos tres valores introducidos no estan ordenados.\n";
		}	
	}
	
}
