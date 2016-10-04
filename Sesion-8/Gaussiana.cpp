/*	
   Programa que calcula e imprime el valor de una gaussiana, dados 
   sus parámetros (desviación típica y esperanza)   
*/

#include <iostream>
#include <cmath>

using namespace std;

double Gaussiana (double x, double esperanza, double desviacion){
	const double PI = 3.1415927;
	double valor_tipificado, exponente;
	double y;
	
	valor_tipificado = (x - esperanza) / desviacion;
	exponente = -0.5 * valor_tipificado * valor_tipificado;

	y = exp(exponente) / ( desviacion * sqrt(2*PI) );
	
	return y;
}

double CFD (double x, double y){
	const double b0 = 0.2316419;
	const double b1 = 0.319381530;
	const double b2 = -0.356563782;
	const double b3 = 1.781477937;
	const double b4 = -1.821255978;
	const double b5 = 1.330274429;
	double t;
	double area_hasta = 1;
	double resultado;
	
	t = 1.0 / (1 - b0 * x);
	resultado = area_hasta - y * (b1 * t + b2 * pow(t, 2) + b3 * pow(b3, 3) + b4 * pow(t, 4) + b5 * pow(t, 5));
	
	return resultado;
}

int main (){
	double esperanza, desviacion, x, numero_abscisas;   // Entrada
	double y;	                       // Salida
	double area;
	
	cout << "\nIntroduzca el valor del parámetro 'esperanza' : ";
	cin >> esperanza;
	cout << "\nIntroduzca el valor del parámetro 'desviacion' : ";
	cin >> desviacion;
	cout << "\nIntroduzca el numero de abscisas que desea calcular: ";
	cin >> numero_abscisas;
	
	for (int i = 1; i <= numero_abscisas; i++){
	cout << "\n\nIntroduzca el valor de la abscisa: ";
	cin >> x;
	
	y = Gaussiana (x, esperanza, desviacion);
	
	cout << "\n\nEl valor de la función gaussiana en " << x << " es " << y;
	
	area = CFD(x, y);
	
	cout << "\nEl area entre infinito y " << x << " es vale " << area;
	
	}
	
	cout << "\n\n";
	
	system("pause");
}
