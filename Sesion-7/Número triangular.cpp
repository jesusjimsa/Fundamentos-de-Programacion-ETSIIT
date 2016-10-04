/*
	Programa que analiza si un número es
	triangular, es decir, si se puede
	expresar como la suma de los primeros
	m valores enteros, para algún valor
	de m.
*/

#include <iostream>

using namespace std;

int LeeEnteroPositivo (int entero){
	const int positivo = - 1;
	
	if (entero < 0)
		entero = entero * positivo;
	
	return entero;
}

int main (){
	int posible_triangular, i, suma;
	bool EsTriangular;
	
	suma = 0;
	EsTriangular = false;
	
	cout << "Introduzca un entero: ";
	cin >> posible_triangular;
	
	for (i = 1; i <= posible_triangular; i++){
		suma = suma + i;
		
		if (suma == posible_triangular)
			EsTriangular = true;
	}
	
	if (EsTriangular)
		cout << "\n" << posible_triangular << " es un numero triangular.\n\n";
	else
		cout << "\n" << posible_triangular << " no es un numero triangular.\n\n";
}
