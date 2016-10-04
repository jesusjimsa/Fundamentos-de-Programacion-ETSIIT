/*
	Programa que intercambia los datos asignados a las variables
	x, y, z.
*/

#include <iostream>

using namespace std;

int main (){
	int x, y, z;
	int y_aux;
	
	x = 10;
	y = 20;
	z = 30;
	
	cout << "x = " << x << "\ny = " << y << "\nz = " << z;
	cout << "\n_______________________________________________________"; //Línea de separación entre las dos partes del programa
	
	y_aux = y;
	y = x;
	x = z;
	z = y_aux;
	
	cout << "\n\nx = " << x << "\ny = " << y << "\nz = " << z << "\n\n";
	
}
