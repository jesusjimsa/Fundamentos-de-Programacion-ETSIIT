/*
    Programa que determina si una letra introducida desde el teclado
    es mayúscula o minúscula.
*/
 
#include <iostream>
 
using namespace std;

enum class tipocaracter
				{mayus, minus, noalfa};
 
int main (){
    char letra_original, letra_convertida;
    const char paso_minus = 'a' - 'A';
    tipocaracter caracter;
     
    cout << "Introduzca una letra mayuscula o minuscula: ";
    cin >> letra_original;
     
    if (letra_original >= 'A' && letra_original <= 'Z'){
        letra_convertida = letra_original + paso_minus;
        caracter = tipocaracter::mayus;
	}
   else
      	if (letra_original >= 'a' && letra_original <= 'z'){
            letra_convertida = letra_original - paso_minus;
            caracter = tipocaracter::minus;
      	}
      	else{
            letra_convertida = letra_original;
            caracter = tipocaracter::noalfa;
   		}
     
    cout << "\n";
    
    switch (caracter){
    	case tipocaracter::mayus:
    			cout << "La letra pasada a minuscula es: " << letra_convertida;
    			break;
    	case tipocaracter::minus:
    			cout << "La letra pasada a mayuscula es: " << letra_convertida;
    			break;
    	case tipocaracter::noalfa:
    			cout << "El caracter introducido no pertenece al alfabeto.";
    			break;
	}
}
