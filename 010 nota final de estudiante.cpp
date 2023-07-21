/* La calif final de un estudiante es la media ponderada de tres notas.
La nota de practicas que cuenta un 30% del total, la nota teorica que 
cuenta un 60% y la nota de participacion que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estandar las tres notas de un
alumno y escriba en la salida estandar su nota final*/

#include<iostream>

using namespace std;

int main(){
	float practicas, teoria, participacion;
	
	cout<<"Digite la nota de practicas: "; 			cin>>practicas;
	cout<<"Digite la nota de teoria: ";				cin>>teoria;
	cout<<"Digite la nota de participacion: ";		cin>>participacion;
	
	practicas *= 0.3;
	teoria *= 0.6;
	participacion *= 0.1;
	
	//nota_final = practicas + teoria + participacion;
	
	cout<<"La nota final es: "<< practicas+teoria+participacion;
	
	//cout<<"La nota final es: "<< nota_final;
	
	return 0;
}


