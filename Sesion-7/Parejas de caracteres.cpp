/*
	Programa que devuelve todas las
	combinaciones posibles entre
	unos valores char introducidos
	desde el teclado.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main (){
	char min_izda, max_izda, min_dcha, max_dcha;
	char pareja_izda, pareja_dcha;
	
	do{
	cout << "\nIntroduzca el minimo por la izquierda: ";
	cin >> min_izda;
	cout << "Introduzca el maximo por la izquierda: ";
	cin >> max_izda;
	}while (min_izda > max_izda);
	
	do{
	cout << "\nIntroduzca el minimo por la derecha: ";
	cin >> min_dcha;
	cout << "Introduzca el maximo por la derecha: ";
	cin >> max_dcha;
	}while (min_dcha > max_dcha);
	
	cout << "\n";
	
	min_izda = tolower(min_izda);
	max_izda = tolower(max_izda);
	min_dcha = tolower(min_dcha);
	max_dcha = tolower(max_dcha);
	
	for (pareja_izda = min_izda; pareja_izda <= max_izda; pareja_izda++){
		for (pareja_dcha = min_dcha; pareja_dcha <= max_dcha; pareja_dcha++){
			cout << pareja_izda << pareja_dcha << " ";
		}
		cout << "\n";
	}
}
