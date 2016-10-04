/*
	Programa que calcula una serie
	numérica
*/

#include <iostream>
#include <cmath>

using namespace std;

long long SumaHasta (int a, long long r, int k){
	long long suma = 0.0;
	long long copia_a, copia_r;
	
	copia_a = a;
	copia_r = r;
	
	for (int i = 1; i <= k; i++){
		cout << "\n" << copia_a;
		suma = suma + copia_a;
		copia_a = a * r;
		r = r * copia_r;
	}
	
	return suma;
}

long long ProductoHasta (int a, long long r, int k){
	long long producto;
	long long copia_a, copia_r;
	
	copia_a = a;
	copia_r = r;
	
	for (int i = 1; i <= k; i++){
		copia_a = a * r;
		r = r * copia_r;
	}
	
	for (int i = 1; i <= k; i++){
		producto = copia_a * a;
	}
	
	producto = sqrt (producto);
	
	return producto;
}

float SumaHastaInfinito (int a, int r){
	int suma_infinita;
	const int unidad = 0;
	
	suma_infinita = a / (unidad - r);
	
	return suma_infinita;
}

int main (){
	int a, k;
	long long r;
	long long suma;
	long long producto;
	float suma_infinita;
	
	cout << "Introduzca el valor de a1: ";
	cin >> a;
	cout << "Introduzca el valor de r: ";
	cin >> r;
	cout << "Introduzca el numero de valores que desea calcular: ";
	cin >> k;
	
	suma = SumaHasta(a, r, k);
	producto = ProductoHasta (a, r, k);
	suma_infinita = SumaHastaInfinito(a, r);
	
	cout << "\n\nLa suma de los " << k << " valores obtenidos es " << suma;
	cout << "\nEl producto de los " << k << " valores obtenidos es " << producto;
	cout << "\nLa suma hasta el infinito vale " << suma_infinita;
}
