/*
	Programa que según tres variables
	devuelve la sucursal de una empresa
	que más unidades ha vendido.
*/

#include <iostream>

using namespace std;

int main (){
	int sucursal, unidades, mas_productiva, unidades_primera_sucursal, 
		unidades_segunda_sucursal, unidades_tercera_sucursal, unidades_total;
	char producto;
	const int primera_sucursal = 1;
	const int segunda_sucursal = 2;
	const int tercera_sucursal = 3;
	const int TERMINADOR = -1;
	
	cout << "Al introducir el valor -1 en la sucursal se terminara el programa.\n";
	
	unidades_primera_sucursal = 0.0;
	unidades_segunda_sucursal = 0.0;
	unidades_tercera_sucursal = 0.0;
	
	do{
		cout << "\n\nIntroduzca el numero de la sucursal (1, 2 o 3): ";
		cin >> sucursal;
		
		if (sucursal != TERMINADOR){
			cout << "Introduzca el codigo del producto (a, b o c): ";
			cin >> producto;
			cout << "Introduzca el numero de unidades vendidas: ";
			cin >> unidades;
			
			if (sucursal == primera_sucursal){
				unidades_primera_sucursal = unidades_primera_sucursal + unidades;
			}
			else{
				if (sucursal == segunda_sucursal){
					unidades_segunda_sucursal = unidades_segunda_sucursal + unidades;
				}
				else{
					if (sucursal == tercera_sucursal){
						unidades_tercera_sucursal = unidades_tercera_sucursal + unidades;
					}
				}
			}
				
						
			if (unidades_primera_sucursal > unidades_segunda_sucursal &&
				unidades_primera_sucursal > unidades_tercera_sucursal){
				mas_productiva = primera_sucursal;
				unidades_total = unidades_primera_sucursal;
			}
			
			if (unidades_segunda_sucursal > unidades_primera_sucursal &&
					unidades_segunda_sucursal > unidades_tercera_sucursal){
					mas_productiva = segunda_sucursal;
					unidades_total = unidades_segunda_sucursal;
			}
			if (unidades_tercera_sucursal > unidades_segunda_sucursal &&
					unidades_tercera_sucursal > unidades_primera_sucursal){
					mas_productiva = tercera_sucursal;
					unidades_total = unidades_tercera_sucursal;
			}	
		}
					
	}while (sucursal != TERMINADOR);
	
	cout << "\n\nLa sucursal que mas ha vendido ha sido la " << mas_productiva << " con " << unidades_total << " unidades.\n";
}
