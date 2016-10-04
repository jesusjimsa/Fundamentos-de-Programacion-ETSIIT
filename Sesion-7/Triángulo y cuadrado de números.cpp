/*
	Programa que hace que se impriman en pantalla
	una serie de números divididos en filas.
*/

#include <iostream>

using namespace std;

int main (){
	int i, j, filas, valor_inicial;
	const int inicio_bucle = 1;
	int maximo_cuadrado, ultimo_valor_cuadrado = 5;
	int filas_cuadrado;
	
	cout << "Introduzca el valor inicial: ";
	cin >> valor_inicial;
	cout << "Introduzca el numero de filas que tienen que aparecer: ";
	cin >> filas;
	
	filas_cuadrado = valor_inicial + filas - 1;
	
	for (i = valor_inicial; i <= filas; i++){
		cout << "\n";
		for (j = i; j <= filas; j++){
			cout << j << " ";
		}
	}
	
	cout << "\n";
	
	maximo_cuadrado = valor_inicial + ultimo_valor_cuadrado;
	
	/*
		Al sumar 5 al valor inicial garantizamlos
		que siempre se impriman 6 números en cada
		fila.
	*/
	
	for (i = valor_inicial; i <= filas_cuadrado; i++){
		cout << "\n";
		for (j = i; j <= maximo_cuadrado; j++){
			cout << j << " ";
		}
		maximo_cuadrado++;
	}
	
}
