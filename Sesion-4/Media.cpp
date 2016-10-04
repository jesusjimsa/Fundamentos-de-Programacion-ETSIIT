/*
	Programa que calcula la media aritmética y la desviación típica de la altura de tres personas en centímetros.
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	double mean;						//Media
	double standard_deviation;			//Desviación típica
	double first_person, second_person, third_person;
	const double numero_personas = 3;
	double suma_alturas;
	double suma_cuadrados;				//Parte de la ecuación de la desviación típica
	string menor_mean = " es menor que la media";
	string mayor_mean = " es mayor o igual que la media";
	
	cout << "Introduzca la altura de las tres personas separadas por espacios en cm: ";
	cin >> first_person;
	cin >> second_person;
	cin >> third_person;
	
	suma_alturas = first_person + second_person + third_person;
	mean = suma_alturas / numero_personas;
	suma_cuadrados = pow(first_person - mean, 2) + pow(second_person - mean, 2) + pow(third_person - mean, 2);
	standard_deviation = sqrt(suma_cuadrados / numero_personas);
	
	cout << "\nLa media vale " << mean << " cm";
	cout << "\nLa desviacion tipica vale " << standard_deviation << " cm\n\n";
	
	if (first_person  < mean){
		cout << "\n" << first_person << menor_mean;
	}
	else {
		cout << "\n" << first_person << mayor_mean;
	}
	
	if (second_person < mean){
		cout << "\n" << second_person << menor_mean;
	}
	else{
		cout << "\n" << second_person << mayor_mean;
	}
	
	if (third_person < mean){
		cout << "\n" << third_person << menor_mean;
	}
	else{
		cout << "\n" << third_person << mayor_mean;
	}
	
}
