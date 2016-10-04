/*
	Programa que pide el radio de la circuferencia 
	e imprime la longitud y el area de esta.
	Necesita: el valor del radio
		radio
	Calcula: la longitud y el area como:
		longitud = 2*PI*radio
		area = PI*radio*radio
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double radio;
	double longitud;
	double area;
	const double PI = 3.1415927;
	
	cout << "Introduzca el valor del radio: ";
	cin >> radio;
	
	longitud = 2*PI*radio;
	area = PI*radio*radio;
	
	cout << "\n\nEl valor de la longitud es: " << longitud << "\n";
	cout << "\nEl valor del area es: " << area << "\n\n";
	system("pause");
}
