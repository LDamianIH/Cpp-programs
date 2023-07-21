/* Escribir un programa que defina un vector de numeros  calcule la suma de sus elementos*/

#include<iostream>

using namespace std;

int main(){
    int cantidad, numero, suma=0, multiplicacion=0;
    cout<<"Defina la cantidad de elementos que desea agregar: ";
    cin>>cantidad;
    int arreglo[cantidad];                  //se define el vector del tamaño de la cantidad elegida
    
    cout<<"A continuacion escriba los numeros: \n";
    
    for(int i=0; i<cantidad; i++){          //se puede usar i otra vez siempre y cuando se vuelva a definir
        cin>>numero;
        arreglo[i] = numero; 
    }

    cout<<"El arreglo de numeros es: ";

    for(int i=0; i<cantidad; i++){
        cout<<arreglo[i]<<", ";
    }

    cout<<"\nY la suma de estos numeros seria: ";

    for(int i=0; i<cantidad; i++){
        suma += arreglo[i];
    }

    cout<<suma;
    
    cout<<"\nY la multiplicacion de estos numeros seria: ";

    for(int i=0; i<cantidad; i++){
        multiplicacion += arreglo[i];
    }

    cout<<multiplicacion;
    return 0;
}