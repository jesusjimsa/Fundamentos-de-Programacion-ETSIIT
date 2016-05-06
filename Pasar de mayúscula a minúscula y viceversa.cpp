/*
	Programa que determina si una letra introducida desde el teclado
	es mayúscula o minúscula.
*/

#include <iostream>

using namespace std;

int main (){
	char letra_original, letra_convertida;
	const char paso_minus = 'a' - 'A';
	
	cout << "Introduzca una letra mayuscula o minuscula: ";
	cin >> letra_original;
	
	if (letra_original >= 'A' && letra_original <= 'Z')
		letra_convertida = letra_original + paso_minus;
	else 
		if (letra_original >= 'a' && letra_original <= 'z')
			letra_convertida = letra_original - paso_minus;
		else
			letra_convertida = letra_original;
	
	cout << "\nEl caracter transformado es: " << letra_convertida << "\n";

}
