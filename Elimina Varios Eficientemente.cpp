/*
    Programa que lee una serie de enteros desde teclado,
    y a continuación lee una cadena de caracteres.
    Una vez hecho esto elimina los caracteres que ocupen
    la posición correspondiente con respecto a los enteros
    introducidos.
*/


#include <iostream>
#include <string>

using namespace std;


class SecuenciaEnteros{
private:
    static  const  int  TAMANIO  =  50;
    int  vector_privado[TAMANIO];
    int  total_utilizados;
public:
    SecuenciaEnteros()
    :total_utilizados(0)
    {
    }
    
    int  TotalUtilizados(){
        return  total_utilizados;
    }
    
    void  Aniade(int  nuevo){
        if (total_utilizados  <  TAMANIO){
            vector_privado[total_utilizados]  =  nuevo;
            total_utilizados++;
        }
    }
    
    int Elemento(int  indice){
        return  vector_privado[indice];
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
    
    void EliminaVarios(SecuenciaEnteros a_eliminar){
        for (int i = 0; i < total_utilizados; i++){
            Elimina(a_eliminar.Elemento(i));
        }
    }
};

int main(){
    int posicion;
    SecuenciaEnteros a_eliminar;
    SecuenciaCaracteres palabra;
    char entrada;
    const char TERMINADOR_CHAR = '#';
    const int TERMINADOR_INT = -1;
    
    cout << "\nIntroduzca la cadena de caracteres: ";
    entrada = cin.get();
    
    while (entrada != TERMINADOR_CHAR){
        palabra.Aniade(entrada);
        
        entrada = cin.get();
    }
    
    
    cout << "\nIntroduzca las posiciones a eliminar: ";
    cin >> posicion;
    
    while (posicion != TERMINADOR_INT){
        a_eliminar.Aniade(posicion);
        
        cin >> posicion;
    }
    
    palabra.EliminaVarios(a_eliminar);
    
    cout << "\n\nLa cadena resultante es:\n";
    
    for (int i=0; i < palabra.TotalUtilizados(); i++)
        cout << palabra.Elemento(i);
    
    cout << "\n\n";
}
