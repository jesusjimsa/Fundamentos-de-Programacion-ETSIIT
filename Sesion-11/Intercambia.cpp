#include <iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAMANIO = 100;
		char vector_privado[TAMANIO];
		int total_utilizados;
		int numero_mayusculas = 0;
	
	public:
		SecuenciaCaracteres()
			:total_utilizados(0) {
		}
		   
		int TotalUtilizados(){
			return total_utilizados;
		}
		   
		int Capacidad(){
			return TAMANIO;
		}
		   
		void EliminaTodos(){
			total_utilizados = 0;
		}
		   
		void Aniade(char nuevo){
			bool mayuscula, minuscula;
			
			if (total_utilizados < TAMANIO){
			
				mayuscula = (vector_privado[total_utilizados] >= 'A' && vector_privado[total_utilizados] <= 'Z');
				minuscula = (vector_privado[total_utilizados] >= 'a' && vector_privado[total_utilizados] <= 'z');
				
				if (mayuscula || minuscula){
					total_utilizados++;	
				}
				
				if(mayuscula){
					numero_mayusculas++;
				}
				
			}
		}
		
		bool Palindromo(){
			bool palindromo;
			
			for (int i = 0; i <= total_utilizados; i++){
				if (vector_privado[i] == vector_privado[total_utilizados - i]){
					palindromo = true;
				}
				else
					palindromo = false;
			}
			
			return palindromo;
		}
		
		int NumeroMayusculas(){
			return numero_mayusculas;
		}
		
		void IntercambiaCaracteres(int primero, int segundo){
			char copia_caracter;
			
			copia_caracter = vector_privado[primero];
			vector_privado[primero] = vector_privado[segundo];
			vector_privado[segundo] = copia_caracter;
		
		}
		  
		void Modifica(int posicion, char nuevo){
			if (posicion >= 0 && posicion < total_utilizados)
				vector_privado[posicion] = nuevo;
		}
		
		char Elemento(int indice){
			return vector_privado[indice];
		}
		   
		string ToString(){
			string cadena;
		     
			for (int i=0; i < total_utilizados; i++)
				cadena = cadena + vector_privado[i];
				
			return cadena;
		}
};

int main(){
	const char TERMINADOR = '#';
	SecuenciaCaracteres caracter;
	char introducir;
	
	cout << "Introduzca un caracter: ";
	introducir = cin.get();
	
	while (introducir != TERMINADOR){
		caracter.Aniade(introducir);
		introducir = cin.get();
	}
	
	
	
	cout << "\n\nSe han introducido " << caracter.TotalUtilizados() << " caracteres.";
	cout << "\nSe han introducido " << caracter.NumeroMayusculas() << " mayusculas.";
	
}
