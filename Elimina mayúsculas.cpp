/*
	Se añade el método EliminaMayusculas
	a la clase SecuenciaCaracteres.
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
		
		void EliminaMayusculas(){
			int i = 0;
			
			while (i < total_utilizados){
				if (isupper(vector_privado[i]))
					Elimina(i);
				else
					i++;
			}
		}
};

int main(){
	SecuenciaCaracteres letra;
	const char TERMINADOR = '.';
	char letrilla;		//Variable auxiliar
	
	cout << "Introduce una lista de letras: ";
	letrilla = cin.get();
	
	while(letrilla != TERMINADOR){
		letra.Aniade(letrilla);
		
		letrilla = cin.get();
	}
	
	letra.EliminaMayusculas();
	
	for (int i = 0; i < letra.TotalUtilizados(); i++){
		cout << letra.Elemento(i) << " ";
	}
}
