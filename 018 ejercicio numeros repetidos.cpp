/* Escribir un programa que lea por la entrada estandar 3 numeros y que 
en el cuarto numero indique si este ultimo coincide con alguno de los 
anteriormente introducidos*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Escriba los cuatro numeros: ";
	cin>>n1>>n2>>n3>>n4;
	
	if((n4==n1)||(n4==n2)||(n4==n3)){
		cout<<"El numero coincide con uno de los escritos anteriormente";
	}
	else{
		cout<<"El numero no coincide con uno de los escritos anteriormente";
	}
	
	
	return 0;
}
