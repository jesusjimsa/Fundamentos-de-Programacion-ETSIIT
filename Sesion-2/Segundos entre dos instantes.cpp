/*
	Programa que calcula el tiempo transcurrido en horas, minutos y segundos
	entre dos momentos concretos del día:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double first_hour, first_minute, first_second;		//Primer instante del día
	double second_hour, second_minute, second_second;	//Segundo instante del día
	double spent_hour, spent_minute, spent_second;		//Tiempo transcurrido
	double total;										//Total en segundos
	
	cout << "Introduzca la hora inicial: ";
	cin >> first_hour;
	cout << "Introduzca el minuto inicial: ";
	cin >> first_minute;
	cout << "Introduzca el segundo inicial: ";
	cin >> first_second;
	cout << "\nIntroduzca la hora final: ";
	cin >> second_hour;
	cout << "Introduzca el minuto final: ";
	cin >> second_minute;
	cout << "Introduzca el segundo final: ";
	cin >> second_second;
	
	spent_hour = second_hour - first_hour;
	spent_minute = second_minute - first_minute;
	spent_second = second_second - first_second;
	total = spent_hour*3600 + spent_minute*60 + spent_second;
	
	cout << "\nHan pasado " << total << " segundos.\n\n";
	system("pause");
	
}
