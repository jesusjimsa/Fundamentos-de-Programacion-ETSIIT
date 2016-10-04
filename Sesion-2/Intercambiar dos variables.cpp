/*
	Este programa lee la edad de Juan y de Pedro e intercambia sus valores.
*/

#include <iostream>

using namespace std;

int main(){
	double edad_Pedro, edad_Juan, cambio;
	
	cout << "Introduzca la edad de Pedro: ";
	cin >> edad_Pedro;
	cout << "Introduzca la edad de Juan: ";
	cin >> edad_Juan;
	
	cambio = edad_Pedro;
	edad_Pedro = edad_Juan;
	
	cout << "\nLa edad intercambiada de Pedro es " << edad_Pedro;
	cout << "\nLa edad intercambiada de Juan es " << cambio << "\n\n";
	
}
