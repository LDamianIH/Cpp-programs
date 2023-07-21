/* Escribir un progrma que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale
a la suma del resto de numeros del vector*/

#include<iostream>

using namespace std;

int main(){
    int cantidad, numMayor=0, suma=0;
    int vector[cantidad];

    cout<<"Defina el tamaño del arreglo de numeros: ";
    cin>>cantidad;
    cout<<"Escriba los numeros: \n";

    for(int i=0; i<cantidad; i++){
        cin>>vector[i];
        suma += vector[i];
        
        if(numMayor < vector[i]){
            numMayor = vector[i];
        }
    }

    suma -= numMayor;

    if(suma == numMayor){
        cout<<"\nEl numero mayor es "<<numMayor<<", que es igual a la suma del resto de numeros";
    }
    else{
        cout<<"No existe numero que sea igual a la suma del resto";
    }

    return 0;
}