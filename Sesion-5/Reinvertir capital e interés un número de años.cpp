/*
    Programa que pide el valor del capital y el interés e imprime un valor total
*/
 
#include <iostream>
 
using namespace std;
 
int main(){             
	double capital, interes, total;
	int anios, bucle_anios;
	const int primer_anio = 1;

	cout << "Introduzca el valor del capital: ";
	cin >> capital;
	cout << "Introduzca el interes: ";
	cin >> interes;
	cout << "Introduzca el numero de anios que va a invertir: ";
	cin >> anios;
     
    bucle_anios = primer_anio;
	
	do {
		total = capital + capital * interes / 100;
		cout << "\nTotal en el anio numero " << bucle_anios << ": " << total;
		bucle_anios = bucle_anios + 1;
		interes = interes * bucle_anios;
	}while (bucle_anios <= anios); 

}
