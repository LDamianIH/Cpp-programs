/* Ejercicio 1. Escribe un programa que lea de la entrada estandar dos numeros y muestre 
en la salida estandar su suma, resta, multiplicación y division. */

#include<iostream>

using namespace std;

int main(){
	float num1, num2;
	
	
	cout<<"Escribe el primer numero: \n";
	cin>>num1;
	
	cout<<"Escribe el segundo numero: \n";
	cin>>num2;
	
	cout<<"La suma es: "<<num1+num2<<endl;
	cout<<"La resta es: "<<num1-num2<<endl;
	cout<<"La multiplicacion es: "<<num1*num2<<endl;
	cout<<"La division es: "<<num1/num2<<endl;
	
	
	return 0;
}

/*
int main(){
	int n1,n2,suma=0,resta=0,mult=0,div=0;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<mult<<endl;
	cout<<"La division es: "<<div<<endl;
	
	return 0;
}

*/



