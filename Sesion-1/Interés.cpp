/*
	Programa que pide el valor del capital y el interés e imprime un valor total
	Necesita: el valor del capital y del interés
		capital, interes
	Calcula el total como:
		total = capital+capital*interes/100
*/

#include <iostream>

using namespace std;

int main(){				//Programa principal
	double capital;		//Capital en euros
	double interes;		//Porcentaje del interés 
	double total;		//Dinero total en el año en euros
	
	cout << "Introduzca el valor del capital: ";
	cin >> capital;
	cout << "Introduzca el interes: ";
	cin >> interes;
	
	total = capital+capital*interes/100;
	
	cout << "\nEl total vale " << total << "\n\n" ;
}
