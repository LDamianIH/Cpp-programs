/* Ejercicio 3. Realice un programa que lea la entrada estandar de los siguientes datos
de una persona

	Edad: dato de tipo entero
	Sexo: dato de tipo caracter
	Altura en metros: dato de tipo real 
	
Tras leer los datos, el programa debe mostrarlos en la salida estandar. */

#include<iostream>

using namespace std;

int main() {
	int edad = 0; string sexo; float altura = 0;
	
	cout<<"Ingrese su edad: ";cin>>edad;
	cout<<"Ingrese su sexo: ";cin>>sexo;
	cout<<"Ingrese su altura en metros: "; cin>>altura;
	
	cout<<"Sus datos son los siguientes: \nEdad: "<<edad<<"\nSexo: "<<sexo<<"\nAltura: "<<altura;
	
	
	return 0;
}
