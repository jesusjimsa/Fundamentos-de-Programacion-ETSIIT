/*
	Programa que lee un car�cter en may�scula introducido desde el teclado
	y lo pasa a min�scula.
*/

#include <iostream>

using namespace std;

int main (){
	char mayus, minus;
	const int diferencia = 32; //Diferencia entre may�sculas y min�sculas
	
	cout << "Teclee una letra mayuscula: ";
	cin >> mayus;
	
	minus = mayus + diferencia;
	
	cout << "\n" << minus << "\n";
	
}
