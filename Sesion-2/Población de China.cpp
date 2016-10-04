/*
	Programa que calcula la poblaci�n total de China dentro de dos a�os sabiendo que nace una persona cada 1.87 segndos,
	mueren cada 3.27 y emigran cada 71.9
*/

#include <iostream>

using namespace std;

int main(){
	const double population = 1375570814;	//Poblaci�n actual de China
	const double two_years = 730;				//D�as que hay en dos a�os
	const double seconds_day = 86400;		//Segundos que hay en un d�a
	double future_population;					//Poblaci�n que habr� en dos a�os
	
	future_population = population + two_years*(seconds_day/1.87 - seconds_day/3.27 - seconds_day/71.9);
	
	cout << "La poblacion de China en dos anos sera de " << future_population << "personas\n\n";
	system("pause");
}
