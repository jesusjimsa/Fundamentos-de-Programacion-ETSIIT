/*
	Función que calcula el máximo de
	tres datos de tipo double.
*/

#include <iostream>

using namespace std;

double Max(double un_valor, double otro_valor, double el_tercero){
	double maximo;
	
	if (un_valor >= otro_valor && un_valor >= el_tercero)
		maximo = un_valor;
	else
		if (otro_valor >= un_valor && otro_valor >= el_tercero)
			maximo = otro_valor;
		else
			maximo = el_tercero;
			
	return maximo;
}
