/*
	Programa que lee horas, minutos y segundos y los coloca dentro de su rango.
*/

#include <iostream>

using namespace std;

int main (){
	int horas_inic, minutos_inic, segundos_inic;									//Datos introducidos
	int horas_segundos, minutos_segundos, total_segundos, resto, horas_aux;			//Datos auxiliares
	int dias, horas_fin, minutos_fin, segundos_fin;									//Datos calculados
	const int segundos_por_minuto = 60;
	const int minutos_por_hora = 60;
	const int segundos_por_hora = 3600;
	const int horas_por_dia = 24;
	
	cout <<  "Introduzca el valor de las horas: ";
	cin >> horas_inic;
	cout << "Introduzca el valor de los minutos: ";
	cin >> minutos_inic;
	cout << "Introduzca el valor de los segundos: ";
	cin >> segundos_inic;
	
	horas_segundos = horas_inic * segundos_por_hora;
	minutos_segundos = minutos_inic * segundos_por_minuto;
	total_segundos = horas_segundos + minutos_segundos + segundos_inic;
	horas_aux = total_segundos / segundos_por_hora;
	resto = total_segundos % segundos_por_hora;
	minutos_fin = resto / minutos_por_hora;
	segundos_fin = resto % segundos_por_minuto;
	dias = horas_aux / horas_por_dia;
	horas_fin = horas_aux - dias * horas_por_dia;
	
	cout << "\n" << dias << " dias\n" << horas_fin << " horas\n" << minutos_fin << " minutos\n" << segundos_fin << " segundos\n\n";
	
	
}
