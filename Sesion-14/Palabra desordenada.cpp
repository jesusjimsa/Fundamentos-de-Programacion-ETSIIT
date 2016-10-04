/*
	Programa que determina si dos cadenas de caracteres
	son similares, esto es, si comienzan y terminan por
	la misma letra, y si tienen las mismas letras, no
	necesariamente en el mismo orden.
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
    SecuenciaCaracteres primera_cadena;
    SecuenciaCaracteres segunda_cadena;
    char entrada;
    const char TERMINADOR = '#';
    bool continuar;
    const int NUMERO_BOOLS = 50;
    bool comprobacion[NUMERO_BOOLS];
    bool caracter_procesado[NUMERO_BOOLS];
    
    for (int i = 0; i < NUMERO_BOOLS - 1; i++){
        comprobacion[i] = false;
    }
    
    cout << "\nIntroduzca la primera palabra (al terminar escribir #): ";
    entrada = cin.get();
    
    while (entrada != TERMINADOR){
        primera_cadena.Aniade(entrada);
        
        entrada = cin.get();
    }
    
    cout << "\n\nIntroduzca la segunda palabra (al terminar escribir #): ";
    entrada = cin.get();		//Esta primera operación de entrada de texto se hace para no utilizar Enter como dato
    entrada = cin.get();
    
    while (entrada != TERMINADOR){
        segunda_cadena.Aniade(entrada);
        
        entrada = cin.get();
    }
    
    /*
     Con el siguiente algoritmo se comprueba que las dos cadenas de
     caracteres tienen en mismo n˙mero de caracteres, ya que si no
     es asÌ esimprosible que sean similares.
     */
    
    if (primera_cadena.TotalUtilizados() == segunda_cadena.TotalUtilizados())
        continuar = true;
    else
        continuar = false;
    
    if (primera_cadena.Elemento(0) == segunda_cadena.Elemento(0) &&
        primera_cadena.Elemento(primera_cadena.TotalUtilizados() - 1) == segunda_cadena.Elemento(segunda_cadena.TotalUtilizados() - 1) && continuar){
        continuar = true;
    }
    else{
        continuar = false;
    }
    
    /*
        En el siguiente algoritmo se pasa a comprobar, ya definitivamente si
        las dos cadenas de caracteres introducidas son similares.
        Siempre y cuando se hayan dado las condiciones descritas en los algoritmos
        anteriores.
    */
    
    if (continuar){
        for (int i = 0; i < primera_cadena.TotalUtilizados(); i++){
            caracter_procesado[i] = false;
            for (int j = 0; j < segunda_cadena.TotalUtilizados(); j++){
                if (primera_cadena.Elemento(i) == segunda_cadena.Elemento(j) && !comprobacion[j] && !caracter_procesado[i]){
                    comprobacion[j] = true;
                    caracter_procesado[i] = true;
                }
            }
        }
        
        for (int i = 0; i < primera_cadena.TotalUtilizados(); i++){
            if (comprobacion[i] && continuar)
                continuar = true;
            else
                continuar = false;
        }
    }
    
    if (continuar)
        cout << "\n\nLas dos cadenas de caracteres introducidas son similares.\n\n";
    else
        cout << "\n\nttalomnteeNo son dos cadenas similares.\n\n";
}