// Promedio de 4 numeros

#include<iostream>

using namespace std;

int main(){
	float n1,n2,n3,n4;
	cout<<"Introduzca las cuatro notas de los alumnos: \n";
	cout<<"Nota 1: "; cin>>n1;
	cout<<"Nota 2: "; cin>>n2;
	cout<<"Nota 3: "; cin>>n3;
	cout<<"Nota 4: "; cin>>n4;
	
	cout<<"El promedio de las 4 notas es: "<<(n1+n2+n3+n4)/4;
	
	return 0;
}
