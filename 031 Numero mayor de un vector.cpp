/* Desarrollar un programa que lea un vector de enteros y determine el numero mas grande del mismo*/

#include<iostream>

using namespace std;

int main(){
    int cantidad, numero, mayor=0;

    cout<<"Defina la cantidad de elementos que desea agregar: ";
    cin>>cantidad;

    int arreglo[cantidad];                  //se define el vector del tamaño de la cantidad elegida

    cout<<"A continuacion escriba los numeros: \n";
    
    for(int i=0; i<cantidad; i++){          //se puede usar i otra vez siempre y cuando se vuelva a definir
        cin>>numero;
        arreglo[i] = numero;

        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }
    
    cout<<"EL numero mayor es: "<<mayor;

    return 0;
}