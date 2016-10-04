/*
	Programa que calcula la media aritm�tica y la desviaci�n t�pica de la altura de tres personas en cent�metros.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	double mean;						//Media
	double standard_deviation;			//Desviaci�n t�pica
	double first_person, second_person, third_person;
	const double numero_personas = 3;
	double suma_alturas;
	double suma_cuadrados;				//Parte de la ecuaci�n de la desviaci�n t�pica
	
	cout << "Introduzca la altura de la primera persona en cm: ";
	cin >> first_person;
	cout << "Introduzca la altura de la segunda persona en cm: ";
	cin >> second_person;
	cout << "Introduzca la altura de la tercera persona en cm: ";
	cin >> third_person;
	
	suma_alturas = first_person + second_person + third_person;
	mean = suma_alturas / numero_personas;
	suma_cuadrados = pow(first_person - mean, 2) + pow(second_person - mean, 2) + pow(third_person - mean, 2);
	standard_deviation = sqrt(suma_cuadrados / numero_personas);
	
	cout << "\nLa media vale " << mean << " cm";
	cout << "\nLa desviacion tipica vale " << standard_deviation << " cm\n\n";
	
}
