/*
	Programa que dice si dos números son números amigos.
	a y b, tales que la suma de los divisores propios de
	a más uno es igual a b, y viceversa.
*/

#include <iostream>

using namespace std;

int SumaDivisores (int entero){
	int ultimo_divisor_posible, divisor, suma;

	suma = 0;
	divisor = 2;
	ultimo_divisor_posible = entero/2;
   
	while (divisor <= ultimo_divisor_posible){    
		if (entero % divisor == 0){
			suma = suma + divisor;
		}
		divisor++;
	}
	return suma;
}

void IntervaloRadio3 (int n){
	int suma_n, i, suma_i;
	
	suma_n = SumaDivisores(n);
	suma_n++;
	
	for (i = n - 3; i != n + 3; i++){
		if (i != n){
			suma_i = SumaDivisores(i);
			suma_i++;
			
			if (suma_i == n && suma_n == i){
				cout << i << " esta en el intervalo con " << n 
					<< " en el centro y es un numero amigo suyo";
			}	
		}
	}
}

int main(){
	int a, b, suma_a, suma_b;
	int n, suma_n, i, suma_i;
	
	cout << "Introduzca el primer numero: ";
	cin >> a;
	cout << "Introduzca el segundo numero: ";
	cin >> b;
	
	suma_a = SumaDivisores(a);
	suma_b = SumaDivisores(b);
	
	suma_a++;
	suma_b++;
	
	if (suma_a == b && suma_b == a)
		cout << "\n" << a << " y " << b << " son dos numeros amigos.";
	else
		cout << "\n" << a << " y " << b << " no son dos numeros amigos.";
		
	cout << "\n\nIntroduzca otro valor: ";
	cin >> n;
	
	IntervaloRadio3(n);
}
