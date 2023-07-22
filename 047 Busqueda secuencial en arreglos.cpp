/* La busqueda secuencial consiste en recorrer en orden cada elemento de un arreglo y comprobar si el dato que se busca
se encuentra dentro del arreglo*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int arr[10] = {5,7,1,2,6,9,10,22,11,10}; 
    int posiciones[10];

    int dato = 10;                              //dato que se busca

    int cantidad = 0;                           //para saber cuantas veces está el dato en el arreglo
    char bandera = 'F';                         //para saber si el dato existe o no dentro del arreglo

    int tamano = sizeof arr / sizeof arr[0];    //tamaño del arreglo

    int i = 0;

    while(i<tamano){
        if(arr[i] == dato){
            bandera = 'V';
            cantidad++;
            posiciones[cantidad-1] = i;
        }
        i++;
    }

    if(bandera == 'V'){
        cout<<"El dato se encuentra "<<cantidad<<" veces en el arreglo"<<endl;
        cout<<"En las posiciones: ";
        
        for(int j=0;j<cantidad;j++){
            cout<<posiciones[j]<<",";
        }

    } else{
        cout<<"El dato no se encuentra en el arreglo";
    }

    getch();
    return 0;
}