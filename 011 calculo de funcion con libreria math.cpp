/* Realice un programa que calcule el valor que toma la siguiente funcion 
de dos variables para unos valores dados de x e y */

#include<iostream>
#include<math.h> 							//para funciones matematicas como sqrt o pow

using namespace std;

int main(){
	float x, y, resultado=0; 				//se le pone un valor 0 inicial para que no tenga un valor basura que afecte la operacion
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1); 	//pow(variable, potencia)
	
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}
