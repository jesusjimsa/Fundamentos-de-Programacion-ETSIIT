/*
	Definición de la clase SecuenciaEnteros
	con el añadido de un método que cuenta
	el número de veces que hay secuencias
	ascendente.
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
		
		int SecuenciasAscendentes(){
			int numero_ascendentes = 0;
			int i = 0;
			
			while (i < total_utilizados){
				if (vector_privado[i] <= vector_privado[i + 1])
					i++;
				else
					numero_ascendentes++;
			}
			return numero_ascendentes;
		}
};

int main(){
	SecuenciaEnteros entero;
	int enterillo;
	const int TERMINADOR = 0;
	
	cout << "Introduzca un entero: ";
	cin >> enterillo;
	
	while (enterillo != TERMINADOR){
		entero.Aniade(enterillo);
		
		cout << "\nIntroduzca otro: ";
		cin >> enterillo;
	}
	
	cout << "\n\nSe han introducido " << entero.SecuenciasAscendentes() << " secuencias en forma ascendente.";
}
