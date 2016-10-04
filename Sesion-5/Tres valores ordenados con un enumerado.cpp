/*
    Programa que lee tres valores introducidos desde el teclado
    y analiza si están ordenados. Además te dice si están ordenados
	de forma ascendente o descendente, o si no están ordenados.
*/
 
#include <iostream>
 
using namespace std;

enum class tipoorden
			{ascendente, descendente, nada};
			
	/*
		Se declaran las variables de tipo enumerado
		necesarias para que el programa funcione según
		lo pedido
	*/
 
int main (){
    int primer_valor, segundo_valor, tercer_valor;
    tipoorden ordenacion;
     
    cout << "Introduzca los tres valores separados por espacios: ";
    cin >> primer_valor;
    cin >> segundo_valor;
    cin >> tercer_valor;
     
    if (primer_valor <= segundo_valor && segundo_valor <= tercer_valor){
        ordenacion = tipoorden::ascendente;
    }
    else{
        if (primer_valor >= segundo_valor && segundo_valor >= tercer_valor){
            ordenacion = tipoorden::descendente;
        }
        else{
            ordenacion = tipoorden::nada;
        }  
    }
    
    switch (ordenacion){
    	case tipoorden::ascendente:
    		cout << "\nEstan ordenados de forma ascendente.\n";
    		break;
    	case tipoorden::descendente:
    		cout << "\nEstan ordenados de forma descendente.\n";
    		break;
    	case tipoorden::nada:
    		cout << "\nNo estan ordenados.\n";
    }
     
}
