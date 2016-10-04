/*
	Programa que lee el valor de la esperanza, la desviaci�n t�pica 
	y la abscisa, x, e imprime el valor que toma la funci�n gaussiana en x.
	Necesita: la esperanza, la desviaci�n t�pica y la abscisa
		mean, standard_derivation, abscisa
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double mean;	//Esperanza
	double standard_derivation;	//Desviaci�n t�pica
	double abscisa;	//x
	double funcion;	//Funci�n Gaussiana
	const double PI = 3.1415927;
	
	cout << "Introduzca el valor de la esperanza: ";
	cin >> mean;
	cout << "Introduzca el valor de la desviacion tipica: ";
	cin >> standard_derivation;
	cout << "Introduzca el valor de la abscisa: ";
	cin >> abscisa;
	
	funcion = 1/(standard_derivation*sqrt(2*PI))*pow(exp(1.), -1/2*pow(abscisa-mean/standard_derivation, 2));
	
	cout << "\nLa funcion vale " << funcion << " en x = " << abscisa << "\n\n";
}
