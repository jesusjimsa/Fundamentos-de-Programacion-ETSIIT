/*
	Programa que, mediante el uso de clasesguarda los datos
	de los alumnos de FP y sus notas.
*/

#include <iostream>

using namespace std;

class AlumnoFP{
	private:
		string nombre;
		string apellido;
		string DNI;
		double teoria, parcial_pract1, parcial_pract2, participacion_clase;
	public:
		AlumnoFP (string el_nombre, string el_apellido, string el_DNI,
				double nota_teoria, double nota_parcial_pract1, double nota_parcial_pract2, double nota_participacion_clase){
			SetNombre (el_nombre);
			SetApellido(el_apellido);
			SetDNI(el_DNI);
			SetTeoria(nota_teoria);
			SetParcial1(nota_parcial_pract1);
			SetParcial2(nota_parcial_pract2);
			SetParticipacion(nota_participacion_clase);
		}
		
		void SetNombre (string el_nombre){
			nombre = el_nombre;
		}
		
		void SetApellido(string el_apellido){
			apellido = el_apellido;
		}
		
		void SetDNI(string el_DNI){
			DNI = el_DNI;
		}
		
		void SetTeoria(double nota_teoria){
			teoria = nota_teoria;
		}
		
		void SetParcial1(double nota_parcial_pract1){
			parcial_pract1 = nota_parcial_pract1;
		}
		
		void SetParcial2(double nota_parcial_pract2){
			parcial_pract2 = nota_parcial_pract2;
		}
		
		void SetParticipacion(double nota_participacion_clase){
			participacion_clase = nota_participacion_clase;
		}
		
		double NotaFinal(){
			double nota_final;
			const double porcentaje_teoria = 0.7;
			const double porcentaje_parcial1 = 0.05;
			const double porcentaje_parcial2 = 0.15;
			const double porcentaje_participacion = 0.1;
			
			nota_final = teoria * porcentaje_teoria + parcial_pract1 * porcentaje_parcial1 + parcial_pract2 * porcentaje_parcial2 +
						participacion_clase * porcentaje_participacion;
			
			return nota_final;
		}
};

int main(){
	string el_nombre;
	string el_apellido;
	string el_DNI;
	double nota_teoria, nota_parcial_pract1, nota_parcial_pract2, nota_participacion_clase, nota_final;
	
	cout << "Introduzca nombre, primer apellido y DNI (con letra) del alumno: ";
	cin >> el_nombre;
	cin >> el_apellido;
	cin >> el_DNI;
	cout << "\n\nIntroduzca la nota de teoria, del primer parcial, del segundo y de la participacion en clase: ";
	cin >> nota_teoria;
	cin >> nota_parcial_pract1;
	cin >> nota_parcial_pract2;
	cin >> nota_participacion_clase;
	
	AlumnoFP alumno(el_nombre, el_apellido, el_DNI, nota_teoria, nota_parcial_pract1, nota_parcial_pract2, nota_participacion_clase);
	
	cout << "\n\nLa nota final del alumno es: " << alumno.NotaFinal();
}
