/* Escriba un fragmento de programa que intercambie los valores de dos variables
de la siguiente manera:

x = 10  --->  x = 7
y = 7	--->  y = 10 
*/

#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"los valores son los siguientes: \nx: "<<x<<"\ny: "<<y;
	
	return 0;
}

