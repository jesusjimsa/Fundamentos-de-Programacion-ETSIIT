/*
	Programa que calcula la población total de China dentro de dos años sabiendo que nace una persona cada 1.87 segndos,
	mueren cada 3.27 y emigran cada 71.9
*/

#include <iostream>

using namespace std;

int main(){
	const double population = 1375570814;	//Población actual de China
	const double two_years = 730;				//Días que hay en dos años
	const double seconds_day = 86400;		//Segundos que hay en un día
	double future_population;					//Población que habrá en dos años
	
	future_population = population + two_years*(seconds_day/1.87 - seconds_day/3.27 - seconds_day/71.9);
	
	cout << "La poblacion de China en dos anos sera de " << future_population << "personas\n\n";
	system("pause");
}
