/*
	Programa que lee unos caracteres desde el teclado y usa
	la clase SecuenciaCaracteres para almacenarlos.
	Lee unos enteros desde teclado y los almacena en la clase
	SecuenciaEnteros.
	Y finalmente elimina los caracteres que se encuentren en
	la posición del vector que indiquen los enteros almacenados
	en SecuenciaEnteros.
*/

#include <iostream>

using namespace std;

class SecuenciaEnteros{
	private:
		static const int TAMANIO = 50;
		int vector_privado[TAMANIO];
		int total_utilizados;
	public:
		SecuenciaEnteros()
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
		   
		void Aniade(int nuevo){
			if (total_utilizados < TAMANIO){
				vector_privado[total_utilizados] = nuevo;
				total_utilizados++;
			}
		}
		  
		void Modifica(int posicion, int nuevo){
			if (posicion >= 0 && posicion < total_utilizados)
				vector_privado[posicion] = nuevo;
		}
		
		int Elemento(int indice){
			return vector_privado[indice];
		}
		
		int RestaATodos(int cantidad){
			for (int i = 0; i < total_utilizados; i++){
				vector_privado[i] = vector_privado[i] - cantidad;
			}
		}
};

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
		
		void Elimina (int posicion){
			if (posicion >= 0 && posicion < total_utilizados){
				
				int tope = total_utilizados-1;
				
				for (int i = posicion ; i < tope ; i++)
					vector_privado[i] = vector_privado[i+1];
					
				total_utilizados--;
			}
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
};

int main(){
	SecuenciaCaracteres pos_lectura, pos_escritura;;
	SecuenciaEnteros enteros;
	int entrada_enteros;
	char entrada_caracteres;
	const int TERM_ENTERO = -1;
	const char TERM_CARACTER = '#';
	int contador_if = 0;
	
	cout << "Introduzca una lista de caracteres (# para terminar): ";
	entrada_caracteres = cin.get();
	
	while (entrada_caracteres != TERM_CARACTER){
		pos_lectura.Aniade(entrada_caracteres);
		
		entrada_caracteres = cin.get();
	}
	
	cout << "\n\nIntroduzca numeros enteros (Enter cada vez y -1 para terminar): ";
	cin >> entrada_enteros;
	
	while (entrada_enteros != TERM_ENTERO){
		enteros.Aniade(entrada_enteros);
		
		cin >> entrada_enteros;
	}
	
	for (int i = 0; i < enteros.TotalUtilizados(); i++){
		pos_escritura.Aniade( pos_lectura.Elemento( enteros.Elemento(i) ) );
	}
	
	for (int i = 0; i < pos_lectura.TotalUtilizados(); i++){
		for (int j = 0; j < pos_escritura.TotalUtilizados(); j++){
			if (pos_lectura.Elemento(i) == pos_escritura.Elemento(j) && contador_if < enteros.TotalUtilizados()){
				pos_lectura.Elimina(i);
				contador_if++;
			}
		}
	}
	
	cout << "\n\nLa cadena de caracteres, tras borrar los elementos correspondientes, queda asi:\n\n";
	
	for (int i = 0; i < pos_lectura.TotalUtilizados(); i++){
		cout << pos_lectura.Elemento(i) << " ";
	}
}
