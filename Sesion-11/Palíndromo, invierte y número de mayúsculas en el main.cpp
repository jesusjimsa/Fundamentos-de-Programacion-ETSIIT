/*
	Programa que lee caracteres hasta
	llegar a un terminador o sean 100
	y devuelve si el vector formado
	es un palíndromo, el vector invertido
	y el número de mayúsculas que contiene.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	const int numero_caracteres = 100;
	char caracter[numero_caracteres];
	char copia_caracter[numero_caracteres];
	const char TERMINADOR = '#';
	int total_utilizados = 0;
	int numero_mayusculas = 0;
	bool mayuscula, minuscula, palindromo;
	
	cout << "Introduzca un caracter: ";
	caracter[total_utilizados] = cin.get();
	
	while (caracter[total_utilizados] != TERMINADOR && total_utilizados < numero_caracteres){
	
		mayuscula = (caracter[total_utilizados] >= 'A' && caracter[total_utilizados] <= 'Z');
		minuscula = (caracter[total_utilizados] >= 'a' && caracter[total_utilizados] <= 'z');
		
		if (mayuscula || minuscula){
			total_utilizados++;	
		}
		
		if(mayuscula){
			numero_mayusculas++;
		}
		
		caracter[total_utilizados] = cin.get();
	}
	
	for (int i = 0; i <= total_utilizados; i++){
		if (caracter[i] == caracter[total_utilizados - i]){
			palindromo = true;
		}
		else
			palindromo = false;
	}
	
	for (int i = 0; i < total_utilizados; i++){
		copia_caracter[99 - i] = caracter[i];
	}

	for (int i = 0; i <= total_utilizados; i++){
		int viceversa = 99 - total_utilizados + i;
		caracter[i] = copia_caracter[viceversa];
	}
	
	for (int i = 0; i <= total_utilizados; i++){
		cout << caracter[i] << " ";
	}
	
	cout << "\n\nSe han introducido " << total_utilizados << " caracteres.";
	cout << "\nSe han introducido " << numero_mayusculas << " mayusculas.";
	
	if (palindromo == true)
		cout << "\nEs un palindromo";
	else
		cout << "\nNo es un palindromo";
	
}
