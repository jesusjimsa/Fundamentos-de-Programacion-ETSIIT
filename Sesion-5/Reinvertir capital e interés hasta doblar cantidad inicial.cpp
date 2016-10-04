/*
	Programa que pide el valor del capital y el interés e imprime un valor total
*/
  
#include <iostream>
  
using namespace std;
  
int main(){             
	double capital, interes, total, doble_capital;
	int anios;
	const int doble = 2;
 
	cout << "Introduzca el valor del capital: ";
	cin >> capital;
	cout << "Introduzca el interes: ";
	cin >> interes;
	
	doble_capital = doble * capital;
	anios = 0;
	
	while (total < doble_capital){
		total = capital + capital * interes / 100;
		capital = total;
		anios++;
	}
	
	cout << "\nTardara " << anios << " anios en doblar su capital.\n";
}
