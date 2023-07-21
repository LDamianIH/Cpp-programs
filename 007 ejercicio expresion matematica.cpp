// Ejercicio: escribe la siguiente expresion matematica como expresion en c++

#include<iostream>

using namespace std;

int main(){
	float a,b;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	cout.precision(2);							//redondea los resultados considerando los 2 numeros despues del punto y no toma el ultimo
	
	cout<<"El resultado es: "<<(a/b)+1;
	
	
	return 0;
}
