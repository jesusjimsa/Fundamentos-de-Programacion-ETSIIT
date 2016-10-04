/*
Programa que lee un entero y los muestra individualmente,
separ�ndolos por varios espacios.
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	int numero, numero_copia, num_digitos, potencia, digito;
	int i;
	bool es_negativo;
	string cadena_digitos;
   
	cout << "Introduce un entero cualquiera: ";
	cin >> numero;

   
    /*
   Algoritmo (Pintar d�gitos de un entero):
      
      Contar el n�mero de d�gitos del n�mero -> num_dig      
      Inicializar potencia a 10^(num_dig - 1) 
      
      Repetir lo siguiente tantas veces como cifras haya:         
         Imprimir la primera difra de n -> n / potencia 
         Remplazar n por n % potencia
         potencia = 10 ^ (i-1)      
   */
   
	es_negativo = numero < 0;   
	numero_copia = abs(numero);      
	num_digitos = 1;
	potencia = 1;      

	while (numero_copia > 9){
		numero_copia = numero_copia / 10;
		num_digitos++;
		potencia = potencia * 10;
	}

	numero_copia = abs(numero);  
   
	if (es_negativo)           
		cout << "- ";
      
	for (i = 1; i <= num_digitos; i++){
		digito = numero_copia / potencia;
		cadena_digitos = cadena_digitos + to_string(digito) + " ";
		numero_copia = numero_copia % potencia;
		potencia = potencia / 10;
	}
	
	cout << cadena_digitos;

	cout << "\n\n";
	system ("pause");
}
