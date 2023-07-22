/* El metodo de ordenamiento burbuja compara un elemento y el elemento siguiente, si el segundo elemento es menor (en caso 
de numeros) entonces estos elementos intercambian posicion. */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int arr[10] = {2,7,1,9,20,0,10,1,9,4};              
    int tamano = sizeof arr / sizeof arr[0];            //tamaño del array
    int var = 0;

    // El algoritmo se repite tantas veces como elementos haya
    for(int j=0;j<tamano;j++){
        for (int i=0;i<tamano;i++){
            if(arr[i]>arr[i+1]){
                var = arr[i+1];     
                arr[i+1]=arr[i];    
                arr[i] = var;       
            }
        }
    }

    cout<<"Orden ascendente:\n";
    for(int i=0;i<tamano;i++){
        cout<<arr[i]<<";";
    }

    cout<<endl<<"Orden descendiente:\n";
    for(int i=tamano-1;i>=0;i--){
        cout<<arr[i]<<";";
    }

    getch();
    return 0;
}