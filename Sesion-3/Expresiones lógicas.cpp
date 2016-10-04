/*
	Programa que verifica la falsedad o no de tres expresiones diferentes y suma el resultado
	de la verificación.
*/

#include <iostream>

using namespace std;

int main(){
	bool letra, edad, anio;
	char letra_intr;
	int edad_intr, anio_intr;
	int divisible_4, divisible_100, divisible_400;
	const int valor_a_minus = 97;
	const int mayor_edad = 18;
	const int jubilado = 65;
	const int divisible = 4;
	const int no_divisible = 100;
	const int puede_divisible = 400;
	
	cout << "Introduzca una letra mayuscula o minuscula: ";
	cin >> letra_intr;
	cout << "Introduzca una edad: ";
	cin >> edad_intr;
	cout << "Introduzca un anio: ";
	cin >> anio_intr;
	
	letra = letra_intr >= valor_a_minus;
	edad = edad_intr < mayor_edad || edad_intr > jubilado;
	divisible_4 = anio_intr % divisible;
	divisible_100 = anio_intr % no_divisible;
	divisible_400 = anio_intr % puede_divisible;
	anio = (divisible_4 > 0.0 && !(divisible_100 > 0.0)) || divisible_400 > 0.0;
	
	cout << "\nLetra " << letra;
	cout << "\nEdad " << edad;
	cout << "\nAnio " << anio << "\n\n";
	
}
