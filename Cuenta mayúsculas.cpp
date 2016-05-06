/*
	Programa que lee caracteres en mayúscula y
	minúscula y devuelve el número de veces
	que aparece cada mayúscula.
*/

#include <iostream>

using namespace std;

int main(){
	const char TAMANIO = 'Z'-'A'+1;
	const char TERMINADOR = '.';
	int contador_mayusculas[TAMANIO] = {0};
	char letra;
	int indice;
	char letrilla = 'A';
	
	cout << "Introduzca una lista de caracteres: ";
	letra = cin.get();
	
	while (letra != TERMINADOR){
		indice = letra - 'A';
		
		/*
			Esta operación se hace para conseguir un
			indice de cada letra introducida y que
			el número de mayusculas se almacenen en
			el lugar del vector correcto.
		*/
		
		if (letra >= 'A' && letra <= 'Z')
			contador_mayusculas[indice] = contador_mayusculas[indice] + 1;
		
		letra = cin.get();
	}
	
	for (int i = 0; i < TAMANIO; i++){
		if (contador_mayusculas[i] > 0)
			cout << "\n\nHay " << contador_mayusculas[i] << " mayusculas introducidas de la letra " << letrilla;
		
		letrilla ++;
	}
}
