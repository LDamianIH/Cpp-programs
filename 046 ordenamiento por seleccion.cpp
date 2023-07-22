/* requiere n^2 operaciones para una lista n de numeros. 
1. Busca el minimo elemento de la lista
2. Intercambia con el primer elemento
3. Busca el minimo del resto de la lista
4. Intercambia con el segundo 
5. Continua sucesivamente*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int  arr[10] = {5,7,1,2,6,9,10,22,11,10}; 
    int tamano = sizeof arr / sizeof arr[0];
    int menor = 0;
    int aux;

    for(int i=0;i<tamano-1;i++){
        menor = i;
        for(int j=i;j<tamano;j++){
            if(arr[j]<arr[menor]){
                menor = j;
            }
        }
        aux = arr[i];           
        arr[i] = arr[menor];    
        arr[menor] = aux;       
    }

    cout<<"Orden ascendente: ";
    for(int i=0;i<tamano;i++){
        cout<<arr[i]<<",";
    }

    cout<<endl<<"Orden descendente: ";
    for(int i=tamano-1;i>=0;i--){
        cout<<arr[i]<<",";
    }

    getch();
    return 0;
}