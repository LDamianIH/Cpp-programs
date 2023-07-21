/* Hacer un programa que simule un cajero automatico con un saldo inicial
de 1000 dolares*/

#include<iostream>

using namespace std;

int main(){
	float saldo_inicial = 1000, ingreso, retiro, saldo_final;
	int opc;
	
	cout<<"\tBienvenido a su Cajero Virtual"<<endl; 					//\t significa un caracter de tabulador
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl<<endl;
	cout<<"Opcion: "<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: ";
			cin>>ingreso;
			saldo_final = saldo_inicial + ingreso;
			cout<<"Ha ingresado: "<<ingreso<<endl<<"Ahora su saldo es de: "<<saldo_final;
			break;
		case 2:
			cout<<"Digite la cantidad de dinero a retirar: ";
			cin>>retiro;
			if(retiro>saldo_inicial){
				cout<<"No tienes saldo suficiente:(";
				break;
			}
			else{
				saldo_final = saldo_inicial - retiro;
				cout<<"Ha retirado: "<<retiro<<endl<<"Ahora su saldo es de: "<<saldo_final;
				break;
			}
			
		case 3:
			cout<<"Hasta pronto :D"; break;
	}
	
	return 0;
}
