/*
	Programa que, en el main, lee una matriz de 50 x 30
	y obliga a que sea simetrica.
	A partir de esta matriz se construye una matriz que
	sigue una serie de condiciones definidas en los
	apuntes de Fundamentos de Programación.
 */

#include <iostream>

using namespace std;

int main(){
    const int TERMINADOR = -1;
    const int TAMANIO_FILAS = 50;
    const int TAMANIO_COLUMNAS = 30;
    int original[TAMANIO_FILAS][TAMANIO_COLUMNAS];
    int suavizada[TAMANIO_FILAS][TAMANIO_COLUMNAS];
    int entrada;
    
    cout << "\nIntroduzca los valores de la matriz simetrica(-1 para salir): ";
    cin >> entrada;
    
    for (int i = 0; i < TAMANIO_COLUMNAS && entrada != TERMINADOR; i++){
        for (int j = i; j < TAMANIO_COLUMNAS && entrada != TERMINADOR; j++){
            original[i][j] = entrada;
            cin >> entrada;
        }
    }
    
    for (int i = TAMANIO_FILAS - 1; i >= 0; i--) {
        for (int j = i; j >= 0; j--){
            original[j][i] = original[i][j];
        }
    }
    
    for (int i = 0; i < TAMANIO_COLUMNAS; i++){
        for (int j = 0; i < TAMANIO_COLUMNAS; j++){
            suavizada[i][j] = original[i][j];
        }
    }
}