/*
	Programa que, mediante clases recibe
	los datos de ventas de varias sucursales
	y devuelve la que mayor número de ventas
	ha realizado.
*/

#include <iostream> 
#include <string>  
using namespace std;

class Ventas{
	private:
		int identif_sucursal;
		char cod_producto;
		int num_ventas = 0;
	public:
		Ventas(int valor_identif_sucursal){
			SetIdentif(valor_identif_sucursal);
		}
		
		void SetIdentif(int valor_identif_sucursal){
			identif_sucursal = valor_identif_sucursal;
		}
		
		void SetCod(char valor_cod_producto){
			cod_producto = valor_cod_producto;
		}

		int VerIdentif(){
			return identif_sucursal;
		}
		
		int VerVentas(){
			return num_ventas;
		}
		
		void Sucursal(int unidades_vendidas){
			num_ventas = num_ventas + unidades_vendidas;
		}
};

int main(){  	
	const int TERMINADOR = -1;
	int identif_sucursal;
	int unidades_vendidas;
	char cod_producto;
	int num_ventas;
	int sucursal_ganadora;

   cout << "Introduzca el identificador de la primera sucursal: ";
   cin >> identif_sucursal;
   Ventas sucursal1(identif_sucursal);
   cout << "Introduzca el identificador de la segunda sucursal: ";
   cin >> identif_sucursal;
   Ventas sucursal2(identif_sucursal);
   cout << "Introduzca el identificador de la tercera sucursal: ";
   cin >> identif_sucursal;
   Ventas sucursal3(identif_sucursal);

    cout << "\n\nIntroduzca el identificador de la sucursal a la que quiere anadir ventas: ";
    cin >> identif_sucursal;
     
	while (identif_sucursal != TERMINADOR){              
		cout << "Introduzca el codigo del producto: ";
		cin >> cod_producto;
		cout << "Introduzca el numero de ventas realizadas: ";
    	cin >> unidades_vendidas;
      
    	if (identif_sucursal == sucursal1.VerIdentif()){
    		sucursal1.SetCod(cod_producto);
      		sucursal1.Sucursal(unidades_vendidas);
		}
    	else if (identif_sucursal == sucursal2.VerIdentif()){
    		sucursal2.SetCod(cod_producto);
    		sucursal2.Sucursal(unidades_vendidas);
		}
    	else if (identif_sucursal == sucursal3.VerIdentif()){
    		sucursal3.SetCod(cod_producto);
    		sucursal3.Sucursal(unidades_vendidas);
		}

        cout << "\n\nIntroduzca el identificador de la sucursal a la que quiere anadir ventas: ";
    	cin >> identif_sucursal;   
   }
   
   sucursal_ganadora = sucursal1.VerIdentif();
   
   if (sucursal2.VerVentas() > sucursal1.VerVentas() && sucursal2.VerVentas() > sucursal2.VerVentas()){
		sucursal_ganadora = sucursal2.VerIdentif();
   }       

   if (sucursal3.VerVentas() > sucursal1.VerVentas() && sucursal3.VerVentas() > sucursal2.VerVentas()){
      sucursal_ganadora = sucursal3.VerIdentif();
   }    
  
	cout << "\nSucursal ganadora: " << sucursal_ganadora;
   
	cout << "\n\n";
	system("pause");
}
