/* Hacer un programa que lea numeros en un arreglo, los copie a otro a otro arreglo multiplicados por 2 
y muestre el segundo arreglo*/

#include<iostream>

using namespace std;

int main(){
    int cantidad;
    cout<<"Escriba la cantidad de numeros que va a digitar: ";
    cin>>cantidad;
    float arreglo[cantidad], arregloMult[cantidad], arregloDiv[cantidad];

    cout<<"A continuacion escriba los numeros:\n";

    for(int i=0;i<cantidad;i++){
        cin>>arreglo[i];
        arregloMult[i] = arreglo[i]*2;
        arregloDiv[i] = arreglo[i]/2;
    }

    cout<<"Los valores del arreglo multiplicados por 2 son los siguientes:\n";
    for(int i=0;i<cantidad;i++){
        cout<<arregloMult[i]<<", ";
    }

    cout<<"\nLos valores del arreglo divididos entre 2 son los siguientes:\n";
    for(int i=0;i<cantidad;i++){
        cout<<arregloDiv[i]<<", ";
    }

    return 0;
}