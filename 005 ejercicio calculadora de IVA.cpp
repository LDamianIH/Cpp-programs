/* Ejercicio 2. Escribe un programa que lea de la entrada estandar el precio de 
un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA*/

#include<iostream>

using namespace std;

int main(){
	float precio = 0;
	
	cout<<"Ingrese el precio del producto: ";
	cin>>precio;
	
	cout<<"\nEl preico con IVA es de: "<<precio+precio*0.16;
	
	
	return 0;
}
