/*
	Programa que trabaja con matrices, en
	este caso lee una matriz y le hace las
	traspuesta. También, al leer otra matriz
	multiplica ambas matrices leidas.
*/

#include <iostream>

using namespace std;

int main(){
	int util_filas, util_columnas;
	
	cout << "Introduzca el numero de filas que debe tener la matriz: ";
	cin >> util_filas;
	cout << "Introduzca el numero de columnas: ";
	cin >> util_columnas;
	
	int primera_matriz[util_filas][util_columnas];
	int segunda_matriz[util_filas][util_columnas];
	int matriz_traspuesta[util_columnas][util_filas];
	int matriz_producto[util_filas][util_columnas];
	
	cout << "Introduzca los valores de la matriz (por filas): ";
	
	for (int i = 0; i < util_filas; i++){
		for (int j = 0; j < util_columnas; j++){
			cin >> primera_matriz[i][j];
		}
	}
	
	cout << "\n\nLa matriz introducida ha sido esta:\n";
	
	for (int i = 0; i < util_filas; i++){
		cout << "\n";
		for (int j = 0; j < util_columnas; j++){
			cout << primera_matriz[i][j] << " ";
		}
	}
	
	//A continuación creamos la matriz traspuesta
	
	for (int i = 0; i < util_filas; i++){
		for (int j = 0; j < util_columnas; j++){
			matriz_traspuesta[j][i] = primera_matriz[i][j];
		}
	}
	
	cout << "\n\nLa matriz traspuesta es:\n";
	
	for (int i = 0; i < util_filas; i++){
		cout << "\n";
		for (int j = 0; j < util_columnas; j++){
			cout << matriz_traspuesta[i][j] << " ";
		}
	}
	
	cout << "\n\nIntroduzca una segunda matriz para multiplicarla (tambien por filas):\n";
	
	
	for (int i = 0; i < util_filas; i++){
		for (int j = 0; j < util_columnas; j++){
			cin >> segunda_matriz[i][j];
		}
	}
	
	/*
		Con el siguiente algoritmo se
		inicializa toda la matriz que
		almacenará el producto a 0
	*/
	
	for (int i = 0; i < util_filas; i++){
		for (int j = 0; j < util_columnas; j++){
			matriz_producto[i][j] = 0;
		}
	}
	
	/*
		Ahora se obtiene la matriz resultante de
		multiplicar la primea matriz introducida
		con la segunda.
	*/	
	
	for (int i = 0; i < util_filas; i++){
		for (int j = 0; j < util_columnas; j++){
			for (int k = 0; k < util_filas; k++){
				matriz_producto[i][j] = matriz_producto[i][j] + primera_matriz[i][k] * segunda_matriz[k][j];
			}
		}
	}
	
	cout << "\n\nLa matriz resultante de multiplicar las dos matrices introducidas es:\n";
	
	for (int i = 0; i < util_filas; i++){
		cout << "\n";
		for (int j = 0; j < util_columnas; j++){
			cout << matriz_producto[i][j] << " ";
		}
	}
}
