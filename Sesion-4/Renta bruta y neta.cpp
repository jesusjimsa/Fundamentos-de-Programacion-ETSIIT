/*
	Programa que calcula la renta neta de un trabajador atendiendo a sus
	diferentes circunstancias laborales, civiles...
*/

#include <iostream>
#include <cctype>

using namespace std;

bool LeeOpcion2Alternativas (string mensaje){
	char pensionista_o_autonomo;
	
	cout << mensaje;
	
	do{
		cin >> pensionista_o_autonomo;
		pensionista_o_autonomo = toupper(pensionista_o_autonomo);
	}while(pensionista_o_autonomo != 'S' || pensionista_o_autonomo != 'N');
	
	return pensionista_o_autonomo;
}

int main (){
	double renta_neta, renta_bruta;
	int retencion_inicial, retencion_final;
	char pensionista, casado_soltero;
	bool autonomo;
	const int ret_autonomo = 3;				//
	const int ret_pensionista = 1;			//
	const int ret_resto = 2;				//Diferentes aumentos y disminuciones
	const int ret_no_ricos = 2;				//en la retencion final segun el estado
	const double ret_casado_rico = 2.5;		//de la persona.
	const int ret_soltero_rico = 3;			//
	const int renta_rico = 20000;

	cout << "Introduzca la renta bruta: ";
	cin >> renta_bruta;
	cout << "Introduzca la retencion inicial: ";
	cin >> retencion_inicial;
	autonomo = LeeOpcion2Alternativas("\nDetermine si es Autonomo o No (S/N): ");
	cout << "Determine si es Pensionista o No (S/N): ";
	cin >> pensionista;
	cout << "Determine si esta (C)asado o (N)o: ";
	cin >> casado_soltero;
	
	
	casado_soltero = tolower('C');
	
	if (autonomo = 'a')
		retencion_final = retencion_inicial - ret_autonomo;
	else
		if (pensionista = 'p')
			retencion_final = retencion_inicial + ret_pensionista;
		else {
			retencion_final = retencion_inicial + ret_resto;
			if (renta_bruta < renta_rico)
				retencion_final = retencion_inicial + ret_no_ricos;
			else
				if (casado_soltero = 'c')
					retencion_final = retencion_inicial + ret_casado_rico;
				else
					retencion_final = retencion_inicial + ret_soltero_rico;
		}
			
	renta_neta = renta_bruta - renta_bruta * retencion_final / 100;
	
	cout << "\n\nSu renta neta es de " << renta_neta << " euros\n";
		
}
