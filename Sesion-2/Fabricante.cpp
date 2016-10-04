/*
	Programa que calcula la cantidad de ganancias que recibe cada uno de los cuatro trabajadores de una empresa
	sabiendo que el diseñador se lleva el doble que los fabricantes.
*/

#include <iostream>

using namespace std;

int main(){
	double ganancias;
	double designer;
	double maker;
	
	cout << "Introduzca el valor de las ganancias obtenidas: ";
	cin >> ganancias;
	
	maker = ganancias / 4;
	designer = maker * 2;
	
	cout << "\nEl disenador ha ganado " << designer << " euros.\n";
	cout << "Los fabricantes han ganado " << maker << " euros cada uno.\n\n";
	system("pause");
	
}
