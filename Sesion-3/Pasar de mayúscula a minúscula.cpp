/*
	Programa que lee un carácter en mayúscula introducido desde el teclado
	y lo pasa a minúscula.
*/

#include <iostream>

using namespace std;

int main (){
	char mayus, minus;
	const int diferencia = 32; //Diferencia entre mayúsculas y minúsculas
	
	cout << "Teclee una letra mayuscula: ";
	cin >> mayus;
	
	minus = mayus + diferencia;
	
	cout << "\n" << minus << "\n";
	
}
