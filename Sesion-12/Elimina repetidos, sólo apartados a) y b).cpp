/*
	Método añadido a la clase SecuenciaCaracteres
	que al ser implementado elimina aquellos
	caracteres que aparecen repetidos.
*/

#include <iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAMANIO = 50;
		char vector_privado[TAMANIO];
		int total_utilizados;
	
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
			if (total_utilizados < TAMANIO){
				vector_privado[total_utilizados] = nuevo;
				total_utilizados++;
			}
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
		
		void Elimina (int posicion){
			if (posicion >= 0 && posicion < total_utilizados){
				
				int tope = total_utilizados-1;
				
				for (int i = posicion ; i < tope ; i++)
					vector_privado[i] = vector_privado[i+1];
					
				total_utilizados--;
			}
		}
		
		void EliminaRepetidos(){
			for (int i = 0; i < total_utilizados; i++){
				int j = i + 1;
				
				while (j < total_utilizados){
					if (vector_privado[i] == vector_privado[j])
						Elimina(j);
					else
						j++;
				}
			}
		}
};

int main(){
	SecuenciaCaracteres letra;
	char letrilla;
	const char TERMINADOR = '.';
	
	cout << "Introduzca una lista de caracteres: ";
	letrilla = cin.get();
	
	while (letrilla != TERMINADOR){
		letra.Aniade(letrilla);
		letrilla = cin.get();
	}
	
	letra.EliminaRepetidos();
	
	cout << "\n\n";
	
	for (int i = 0; i < letra.TotalUtilizados(); i++){
		cout << letra.Elemento(i) << " ";
	}
	
}
