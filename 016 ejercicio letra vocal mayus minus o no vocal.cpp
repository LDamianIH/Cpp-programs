/* Escribir un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula, vocal mayuscula o
si no es una vocal*/

/*intenté hacerlo con if pero no se puede comparar la variable a menos que sea 
una por una y no tiene sentido es mas facil hacerlo con switch case */

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite una letra: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"La letra es vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"La letra es vocal mayuscula"; break;
		default : cout<<"La letra no es vocal"; break;
	}
	return 0;
}
