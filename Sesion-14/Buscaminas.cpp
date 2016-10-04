/*
	Programa que intenta emular el funcionamiento
	del conocido juego Buscaminas mediente el uso
	de clases y matrices.
 */

#include <iostream>
#include <cstdlib>		//Biblioteca necesaria para generar n˙meros aleatorios

using namespace std;

class TableroBuscaMinas{
private:
    static const int FILAS = 50;
    static const int COLUMNAS = 30;
    bool tablero[FILAS][COLUMNAS];
public:
    TableroBuscaMinas(int numero_minas){
        SetTablero(numero_minas);
    }
    
    /*
     El siguiente mÈtodo coloca las minas en
     lugares aleatorios del tablero.
     */
    
    void SetTablero(int numero_minas){
        for (int i = 0; i < numero_minas; i++){
            tablero[(rand() % FILAS)][(rand() % COLUMNAS)] = true;
        }
    }
    
    /*
     Con el siguiente mÈtodo se determina, intoduciendo
     las coordenadas desde el teclado, si en la casilla
     que se quiere comprobar hay una mina o no.
     En caso de que no haya una mina, se devolver· el
     n˙mero de minas que rodean dicha casilla con un
     n˙mero del 0 al 8.
     */
    
    int BuscaLaMina(int fila, int columna){
        int rodeado = 0;
        const int mina = 1;		//Esta variable se usar· en el caso de que la casilla tenga una mina en una casilla colindante
        
        if (tablero[fila][columna]){
            rodeado = -1;
        }
        else{
            if (fila == 0 && columna == 0){
                for (int i = fila; i <= fila + 1; i++){
                    for (int j = columna; j <= columna + 1; j++){
                        if (tablero[i][j])
                            rodeado = rodeado + mina;
                    }
                }
            }
            else{
                if (fila == 0 && columna == 29){
                    for (int i = fila; i <= fila + 1; i++){
                        for (int j = columna - 1; j <= columna; j++){
                            if (tablero[i][j])
                                rodeado = rodeado + mina;
                        }
                    }
                }
                else{
                    if (fila == 49 && columna == 0){
                        for (int i = fila - 1; i <= fila; i++){
                            for (int j = columna; j <= columna + 1; j++){
                                if (tablero[i][j])
                                    rodeado = rodeado + mina;
                            }
                        }
                    }
                    else{
                        if (fila == 49 && columna == 29){
                            for (int i = fila - 1; i <= fila; i++){
                                for (int j = columna - 1; j <= columna; j++){
                                    if (tablero[i][j])
                                        rodeado = rodeado + mina;
                                }
                            }
                        }
                        else{
                            for (int i = fila - 1; i <= fila + 1; i++){
                                for (int j = columna - 1; j <= columna + 1; j++){
                                    if (tablero[i][j])
                                        rodeado = rodeado + mina;
                                }
                            }
                        }
                    }
                }
            }
        }
        
        return rodeado;
    }
};

int main(){
    int numero_minas;
    int fila = 0;
    int columna = 0;
    const int TERMINADOR = -1;
    bool continuar = true;
    
    cout << "Indique el numero de minas que desea que sean usadas en la partida: ";
    cin >> numero_minas;
    
    TableroBuscaMinas TableroNuevo(numero_minas);
    
    while (fila != TERMINADOR && columna != TERMINADOR && continuar){
        cout << "\n\nIntroduzca la fila que desea comprobar (-1 para salir): ";
        cin >> fila;
        
        if (fila != TERMINADOR){
            cout << "Introduzca la columna que desea comprobar (-1 para salir): ";
            cin >> columna;
        }
        
        if (fila == TERMINADOR || columna == TERMINADOR){
            cout << "\n_____________________________________________________";
        }
        else{
            if (TableroNuevo.BuscaLaMina(fila, columna) == TERMINADOR){
                cout << TableroNuevo.BuscaLaMina(fila, columna) << "\n\n>>BOOM<<\n\nHas encontrado una mina :(";
                continuar = false;
            }
            else{
                cout << "\n\nNo hay ninguna mina en la casilla (" << fila << ", " << columna << ").";
                cout << "\n\nHay " << TableroNuevo.BuscaLaMina(fila, columna)	<< " minas alrededor de la casilla (" << fila << ", " << columna << ").";
                cout << "\n_____________________________________________________";
            }
        }
    }
    
    cout << "\n\nGracias por jugar :D\n\n";
    
    system("pause");
}
