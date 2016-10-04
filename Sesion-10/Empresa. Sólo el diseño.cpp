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
