/*
	Programa que realiza una serie de instrucciones
	de un menú respecto a lo que introduzca el
	usuario.
*/

#include <iostream>
#include <cctype>

using namespace std;

void Maximo (int primer_entero, int segundo_entero){
	int resultado;
	
	if (primer_entero >= segundo_entero){
		resultado = primer_entero;
		cout << "\nEl maximo de ambos numeros es " << resultado;
	}
	else{
		resultado = segundo_entero;
		cout << "\nEl maximo de ambos numeros es " << resultado;
	}
}

void Menu (char entrada, int primer_entero, int segundo_entero){
	char suma, producto, maximo, salir;
	int resultado;
	
	suma = 's';
	producto = 'p';
	maximo = 'm';
	salir = 'r';
	
	if (entrada == salir)
		cout << "\nGracias, vuelva pronto";
	else{
		if (entrada == suma){
			resultado = primer_entero + segundo_entero;
			cout << "\nLa suma de ambos numeros es " << resultado;
		}
		else{
			if (entrada == producto){
				resultado = primer_entero * segundo_entero;
				cout << "\nEl producto de ambos numeros es " << resultado;
			}
			else
				Maximo (primer_entero, segundo_entero);
		}	
	}
}

int main (){
	char introducir, suma, producto, maximo, salir, entrada;
	int primer_entero, segundo_entero;
	
	introducir = 'i';
	
	do{
	cout << "\nIntroduzca el primer entero: ";
	cin >> primer_entero;
	cout << "Introduzca el segundo entero: ";
	cin >> segundo_entero;
	
	cout << "\n---------------------";
	cout << "\nI. Introducir numeros";
	cout << "\nS. Suma";
	cout << "\nP. producto";
	cout << "\nM. Maximo";
	cout << "\nR. Salir";
	cout << "\n---------------------";
	cout << "\nSeleccione lo que desea realizar con los numeros introducidos: ";
	cin >> entrada;
	
	entrada = tolower(entrada);
	}while (entrada == introducir);
	
	Menu (entrada, primer_entero, segundo_entero);
}
