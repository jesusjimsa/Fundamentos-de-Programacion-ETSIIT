/*
    Programa que pide el valor del capital y el interés e imprime un valor total
*/
 
#include <iostream>
 
using namespace std;
 
int main(){             
	double capital, interes, total;
	int anios, bucle_anios;
	int bucle_interes;
	const int primer_interes = 1;
	const int primer_anio = 1;

	cout << "Introduzca el valor del capital: ";
	cin >> capital;
	cout << "Introduzca el interes: ";
	cin >> interes;
	cout << "Introduzca el numero de anios que va a invertir: ";
	cin >> anios;
     
    bucle_interes = primer_interes;
    
	for (bucle_interes; bucle_interes <= interes; bucle_interes++){
			cout << "\nCalculos realizados al " << bucle_interes << "%:\n\n";
			for (bucle_anios = primer_anio; bucle_anios <= anios; bucle_anios++){
				total = capital + capital * bucle_interes / 100;
				cout << "\tTotal en el anio numero " << bucle_anios << ": " << total << "\n";
				capital = total;
			}
	}
		
	

}
