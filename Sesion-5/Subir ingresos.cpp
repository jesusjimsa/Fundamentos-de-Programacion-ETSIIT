/*
    Programa que lee la edad y el salario de una persona
    y añade un 5% al salario en caso de que la persona sea
    mayor de 65 y cobre menos de 300 euros.
*/
 
#include <iostream>
 
using namespace std;
 
int main (){
    int edad;
    double salario, salario_final;
    const int minimo_salario = 300;
    const int minimo_edad = 65;
    const double subida = 1.00 + 0.05;      //Porcentaje de subida
     
    cout << "Introduzca su edad: ";
    cin >> edad;
    cout << "Introduzca su salario: ";
    cin >> salario;
    
    salario_final = salario * subida;
     
    if (salario < minimo_salario && edad > minimo_edad){
        cout << "\nEl salario final es de " << salario_final << " euros.";
    }
    else {
        cout << "\nNo es aplicable la subida. El salario final es de " << salario << " euros.";
    }
     
}
