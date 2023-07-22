#include<iostream>
#include<conio.h>
#include<string>

#include<stdlib.h>          //esta libreria es para la funcion atoi() y atof()

using namespace std;

int main(){
    int caracteres = 50;
    char palabra1[caracteres];
    char palabra2[caracteres];
    char numeroDigitado[caracteres];
    float numero;

    cout<<"Escriba una palabra: ";
    cin.getline(palabra1,caracteres,'\n');
    cout<<"\nEscriba otra palabra: ";
    cin.getline(palabra2,caracteres,'\n');
    cout<<"Escriba un numero: ";
    cin.getline(numeroDigitado,caracteres,'\n');

    /* Para convertir un arreglo en un entero se usa atoi() {array to integer} y para un flotante atof()*/
    
    // numero = atoi(numeroDigitado);       //para enteros
    numero = atof(numeroDigitado);          //para flotantes
    cout<<"El numero digitado ahora es una variable tipo flotante. "<<numero<<endl;


    /* Identificar vocales en una cadena de caracteres*/
    int a=0, e=0, i=0, o=0, u=0;

    for(int j=0;j<caracteres;j++){
        switch (palabra1[j])               //letra que va a estar probando con los diferentes casos
        {
        case 'a': a++; break;
        case 'e': e++; break;
        case 'i': i++; break;
        case 'o': o++; break;
        case 'u': u++; break;
        default :      break;
        }
    }

    cout<<"La vocal 'a' se repite "<<a<<" veces\n";
    cout<<"La vocal 'e' se repite "<<e<<" veces\n";
    cout<<"La vocal 'i' se repite "<<i<<" veces\n";
    cout<<"La vocal 'o' se repite "<<o<<" veces\n";
    cout<<"La vocal 'u' se repite "<<u<<" veces\n";

    getch();
    return 0;
}