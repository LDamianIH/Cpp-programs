/* escribir un numero y determinar cual es el mayor*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	/* forma espaciosa
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	*/
	
	cout<<"Digite los 2 numeros: ";
	cin>>n1>>n2;
	
	if(n1>n2){
		cout<<"El mayor es: "<<n1;
	}
	else if(n1<n2){
		cout<<"El mayor es: "<<n2;
	}
	else{
		cout<<"Los numeros son iguales";
	}
	
	
	return 0;
}
