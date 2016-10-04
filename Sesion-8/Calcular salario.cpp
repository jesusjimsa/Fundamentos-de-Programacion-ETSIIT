/*
	Función que calcula el salario que recibe
	un empleado según el precio al que se paguen
	las horas de trabajo y según las horas que
	haya trabajado. Si trabaja más de 40 horas,
	se le paga un 50% más.
*/

#include <iostream>

using namespace std;

int salario (int horas_trabajadas, int precio_hora){
	const int horas_extra = 40;
	const int incremento_precio_hora = 1.0 + 0.5;	//50% más
	int salario;
	
	if (horas_trabajadas <= horas_extra){
		salario = precio_hora * horas_trabajadas;
	}
	else {
		salario = precio_hora * horas_extra;
		horas_trabajadas = horas_trabajadas - horas_extra;
		salario = (precio_hora * incremento_precio_hora) * horas_trabajadas;
	}
	
	return salario;
}
