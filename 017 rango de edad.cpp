/* Escribir un programa que solicite la edad (un entero) e indique en la salida estandar
si la edad introducida esta en el rango de 18 a 25 años de edad */

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Digite su edad: "; cin>>edad;
	
	if((edad>=18) && (edad<=25)){
		cout<<"Su edad esta en el rango";
	}
	else{
		cout<<"Su edad no esta en el rango";
	}
	
	
	return 0;
}
