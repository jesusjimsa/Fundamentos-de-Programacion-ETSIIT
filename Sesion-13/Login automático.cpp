/*
	Programa que a partir del nombre completo
	de una persona crea un nombre de usuario
	utilizando un número de caracteres de cada
	palabra del nombre previamente indicado
	mediante teclado.
*/

#include <iostream>
#include <cctype>

using namespace std;

class Login{
	private:
		int num_caracteres_a_coger;
	public:
		Login (int numero_caracteres_a_coger)
			:num_caracteres_a_coger(numero_caracteres_a_coger)
		{ }
	
		string Codifica(string nombre_completo){
			string codigo;
			int N = 0;
			
			for (int i = 0; i <= nombre_completo.size(); i++){
				
				if(nombre_completo[i] != ' ' && N < num_caracteres_a_coger){
					codigo.push_back(tolower(nombre_completo[i]));
					N++;
				}
				else{
					while (nombre_completo[i] != ' '){
						i++;
					}
					N = 0;
				}
				
			}
			
			return codigo;
		}
};

int main(){
	string nombre_completo;
	char caracter;
	const char TERMINADOR = '#';
	int numero_caracteres;
	
	cout << "Elija el numero de caracteres que desea coger de cada palabra: ";
	cin >> numero_caracteres;
	cout << "\n\nIntroduzca su nombre completo: ";
	caracter = cin.get();
	
	Login usuario(numero_caracteres);
	
	while (caracter != TERMINADOR){
		nombre_completo = nombre_completo + caracter;
		caracter = cin.get();
	}
	
	cout << "\n\nSu nombre de usuario sera:\n\n" << usuario.Codifica(nombre_completo) << "\n\n";
}
