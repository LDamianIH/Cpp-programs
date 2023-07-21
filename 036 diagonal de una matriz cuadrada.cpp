/* Escribir un programa que cree un vector con los valores de la diagonal principal de una matriz cuadrada y 
que imprima el vector*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int tamano;
    
    cout<<"Digite el tamano de la matriz cuadrada: ";
    cin>>tamano;

    int matriz[tamano][tamano], vectorDiag[tamano];

    //Se crea la matriz cuadrada por medio de entrada estandar
    cout<<"\nEscriba los elementos de la matriz:\n";
    for(int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    //Se imprime la matriz cuadrada
    cout<<"\nLa matriz cuadrada es la siguiente:\n";
    for(int i=0;i<tamano;i++){
        cout<<"[";
        for(int j=0;j<tamano;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<"]\n";
    }

    //Se obtiene el vector diagonal usando solo 1 ciclo for y usando la misma variable i para la matriz 
    cout<<"Y el vector diagonal es el siguiente:\n[";
    for(int i=0;i<tamano;i++){
        vectorDiag[i] = matriz[i][i];
        cout<<vectorDiag[i]<<"\t";
    }
    cout<<"]";

    getch();
    return 0;
}