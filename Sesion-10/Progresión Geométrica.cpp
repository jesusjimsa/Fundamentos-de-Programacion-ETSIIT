/*
	Programa que hace la progrsión
	geométrica utilizando clases.
*/

#include <iostream>
#include <cmath>

using namespace std;

class Progresion{
	private:
		int a, k;
		long long r;
	public:
		Progresion (int introduce_a, int introduce_r, int introduce_k){
			Set_a(introduce_a);
			Set_r(introduce_r);
			Set_k(introduce_k);
		}
		
		void Set_a(int introduce_a){
			a = introduce_a;
		}
		
		void Set_r(int introduce_r){
			r = introduce_r;
		}
		
		void Set_k(int introduce_k){
			k = introduce_k;
		}
		
		long long Termino(){
			int copia_a;
			long long copia_r;
			
			copia_a = a;
			copia_r = r;
			
			for (int i = 1; i <= k; i++){
				copia_a = a * r;
				r = r * copia_r;
			}
			
			return copia_a;
		}
		
		long long SumaHasta (){
			long long suma = 0.0;
			long long copia_a, copia_r;
	
			copia_a = a;
			copia_r = r;
	
			for (int i = 1; i <= k; i++){
				suma = suma + copia_a;
				copia_a = a * r;
				r = r * copia_r;
			}
	
			return suma;
		}
		
		long long ProductoHasta (){
			long long producto;
			long long copia_a, copia_r;
			
			copia_a = a;
			copia_r = r;
			
			for (int i = 1; i <= k; i++){
				copia_a = a * r;
				r = r * copia_r;
			}
			
			for (int i = 1; i <= k; i++){
				producto = copia_a * a;
			}
			
			producto = sqrt (producto);
			
			return producto;
		}
		
		float SumaHastaInfinito (){
			int suma_infinita;
			const int unidad = 1;
			
			suma_infinita = a / (unidad - r);
			
			return suma_infinita;
		}
};

int main(){
	int a, k;
	long long r;
	
	cout << "Introduzca el valor de a, r y k: ";
	cin >> a;
	cin >> r;
	cin >> k;
	
	Progresion primera_progresion(a, r, k);
	
	cout << "\n\nEl ultimo termino de la progresion es: " << primera_progresion.Termino();
	cout << "\nLa suma de los terminos de la progresion vale: " << primera_progresion.SumaHasta();
	cout << "\nEl producto de los terminos de la progresion vale: " << primera_progresion.ProductoHasta();
	cout << "\nLa suma en el infinito vale: " << primera_progresion.SumaHastaInfinito();
}
