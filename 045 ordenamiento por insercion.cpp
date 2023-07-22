/* empieza desde el segundo elemento y comprueba con el elemento anterior del arreglo, si el anterior es mayor entonces 
el elemento actual cambia de posicion con él, el primer elemento no se puede alterar, si alguno de los elementos llega a 
la primera posicion entonces se deja de recorrer

ejemplo:
56781 -> 56718 -> 56178 -> 51678 -> 15678 */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int arr[10] = {5,7,1,2,6,9,10,22,11,10};
    int tamano = sizeof arr / sizeof arr[0];
    int aux=0;

    for(int i=1;i<tamano;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                aux = arr[j];           
                arr[j] = arr[j-1];      
                arr[j-1] = aux;         
            }
        }
    }

    cout<<"Orden ascendente: ";
    for(int i=0;i<tamano;i++){
        cout<<arr[i]<<",";
    }

    cout<<"\nOrden descendente: ";
    for(int i=tamano-1;i>=0;i--){
        cout<<arr[i]<<",";
    }

    getch();
    return 0;
}