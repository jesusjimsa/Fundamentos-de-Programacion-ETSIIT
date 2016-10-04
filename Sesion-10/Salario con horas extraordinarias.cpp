/*
	Clase que calcula el salario que recibe
	un empleado según el precio al que se paguen
	las horas de trabajo y según las horas que
	haya trabajado. Si trabaja más de 40 horas,
	se le paga un 50% más.
*/

#include <iostream>

using namespace std;

class Nomina{
	private:
		double salario;
		int horas_extra = 40;
		double incremento_precio_hora = 1.0 + 0.5;		//50% más
		
	public:
		Nomina (double valor_salario){
			SetSalario(valor_salario);
		}
		
		void SetSalario(double valor_salario){
			salario = valor_salario;
		}
		
		void SetHorasExtra(int valor_horas_extra){
			horas_extra = valor_horas_extra;
		}
		
		void SetIncremento(double valor_incremento){
			incremento_precio_hora = valor_incremento;
		}
		
		double SalarioFinal (double horas_trabajadas, double precio_hora){
			
			if (horas_trabajadas <= horas_extra){
				salario = precio_hora * horas_trabajadas;
			}
			else {
				salario = precio_hora * horas_extra;
				horas_trabajadas = horas_trabajadas - horas_extra;
				salario = (precio_hora * incremento_precio_hora) * horas_trabajadas;
			}
			
			return salario;
		}
};
