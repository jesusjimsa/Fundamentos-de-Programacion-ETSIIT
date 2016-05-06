/*
    Programa que crea una matriz suavizada tal y como se
    hacía en la sesión 14, pero esta vez mediante el uso
    métodos en la clase MatrizCuadradaReales
*/

#include <iostream>
using namespace std;


class SecuenciaReales{
private:
    static  const  int  TAMANIO  =  50;
    double  vector_privado[TAMANIO];
    int  total_utilizados;
public:
    SecuenciaReales()
    :total_utilizados(0)
    {
    }
    
    int  TotalUtilizados(){
        return  total_utilizados;
    }
    
    void  Aniade(double  nuevo){
        if (total_utilizados  <  TAMANIO){
            vector_privado[total_utilizados]  =  nuevo;
            total_utilizados++;
        }
    }
    
    double Elemento(int  indice){
        return  vector_privado[indice];
    }
    
    void Modifica(int indice_componente, double nuevo){
        if (indice_componente >= 0  &&  indice_componente < total_utilizados)
            vector_privado[indice_componente] = nuevo;
    }
    
    void EliminaTodos(){
        total_utilizados = 0;
    }
    
    int PrimeraOcurrenciaEntre(int pos_izda, int pos_dcha, double buscado){
        int i = pos_izda;
        bool encontrado = false;
        
        while (i <= pos_dcha  &&  !encontrado)
            if (vector_privado[i] == buscado)
                encontrado = true;
            else
                i++;
        
        if (encontrado)
            return i;
        else
            return -1;
    }
    
    int PrimeraOcurrencia (double buscado){
        return PrimeraOcurrenciaEntre(0, total_utilizados - 1, buscado);
    }
    
    
    void Ordena_por_Insercion(){
        int izda, i;
        int a_desplazar;
        
        for (izda = 1; izda < total_utilizados; izda++){
            a_desplazar = vector_privado[izda];
            
            for (i = izda; i>0 && a_desplazar < vector_privado[i-1]; i--)
                vector_privado[i] = vector_privado[i-1];
            
            vector_privado[i] = a_desplazar;
        }
    }
};

class MatrizCuadradaReales{
private:
    static const int MAX_FILAS_COLUMNAS = 40;
    double matriz_privada[MAX_FILAS_COLUMNAS][MAX_FILAS_COLUMNAS];
    const int util_fil_col = 0;
    int indice_ultima_fila_aniadida = -1;
    int util_filas = 0;
    
    void AsignaFila (SecuenciaReales fila, int indice_fila){
        for (int i=0; i < util_fil_col; i++)
            matriz_privada[indice_fila][i] = fila.Elemento(i);
    }
public:
    MatrizCuadradaReales(SecuenciaReales primera_fila)
    :util_fil_col(primera_fila.TotalUtilizados())
    {
        AniadeFila(primera_fila);
        indice_ultima_fila_aniadida = 0;
    }
    
    MatrizCuadradaReales(int numero_columnas)
    :util_fil_col(numero_columnas)
    {
    }
    
    double Elemento (int fil, int col){
        return matriz_privada[fil][col];
    }
    
    int NumeroFilas_y_Columnas(){
        return util_fil_col;
    }
    
    bool EsCuadrada(){
        return util_fil_col == indice_ultima_fila_aniadida + 1;
    }
    
    void AniadeFila(SecuenciaReales nueva_fila){
        if (indice_ultima_fila_aniadida < MAX_FILAS_COLUMNAS){
            if (nueva_fila.TotalUtilizados() == util_fil_col){
                indice_ultima_fila_aniadida++;
                util_filas++;
                AsignaFila(nueva_fila, indice_ultima_fila_aniadida);
            }
        }
    }
    
    void Aniade(int fila, int columna, double elemento){
        if (fila < MAX_FILAS_COLUMNAS && columna < MAX_FILAS_COLUMNAS)
            matriz_privada[fila][columna] = elemento;
    }
    
    SecuenciaReales Fila(int indice_fila){
        SecuenciaReales fila;
        
        for (int i=0; i < util_fil_col; i++){
            fila.Aniade(matriz_privada[indice_fila][i]);
        }
        return fila;
    }
    
    MatrizCuadradaReales SuavizadaPromedio(){
        int suma;
        MatrizCuadradaReales Suavizada(util_filas);
        
        /*
         Algoritmo Suavizada Promedio
         
         Recorrer todas las filas -i- de la matriz original
         Asignar el mismo elemento de la diagonal principal
         
         Recorrer las columnas -j- desde la ˙ltima hasta i
         Ir acumulando en una variable suma
         el sumatorio de los m[i][j]
         Asignar media correspondiente a la componente ij y a la ji
         */

        for (int i = 0; i < util_filas; i++){
            Suavizada.Aniade(i, i, matriz_privada[i][i]);
            suma = 0;
            
            for (int j = util_filas - 1 ; j > i; j--){
                suma = suma + matriz_privada[i][j];
                
                Suavizada.Aniade(i, j, suma / (util_filas - j));
                Suavizada.Aniade(j, i, Suavizada.Elemento(i, j));
            }
        }
        
        return Suavizada;
    }
};


int main(){
    int util_filas_matriz, util_filas_suavizada;
    double valor;
    SecuenciaReales fila;
    
    cout << "Introduzca el numero de filas de la matriz: ";
    cin >> util_filas_matriz;
    
    MatrizCuadradaReales matriz(util_filas_matriz);
    
    cout << "\n\nIntroduzca los valores de la matriz:\n";
    
    for (int i=0; i<util_filas_matriz; i++){
        for (int j=0; j<util_filas_matriz; j++){
            cin >> valor;
            fila.Aniade(valor);
        }
        
        matriz.AniadeFila(fila);
        fila.EliminaTodos();
    }
    
    if (matriz.EsCuadrada()){
        MatrizCuadradaReales suavizada( matriz.SuavizadaPromedio() );
        
        util_filas_suavizada = suavizada.NumeroFilas_y_Columnas();
        
        cout << "\n\n";
        cout << "Matriz suavizada:\n";
        
        for (int i=0; i<util_filas_suavizada; i++){
            cout << "\n";
            
            for (int j=0; j<util_filas_suavizada; j++)
                cout << suavizada.Elemento(i,j) << '\t';
        }
    }
    
    cout << "\n\n";
}

