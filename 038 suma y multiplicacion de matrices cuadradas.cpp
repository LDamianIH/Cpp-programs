/* Crear un programa que sume, reste y multiplique dos matrices cuadradas */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int tamano;
    cout<<"Escriba el tamaño de las matrices: ";
    cin>>tamano;

    float matriz1[tamano][tamano], matriz2[tamano][tamano];       //matrices iniciales

    float matrizSuma[tamano][tamano];
    float matrizResta[tamano][tamano];
    float matrizMult[tamano][tamano];
    
    
    //Se obtiene la matriz 1  
    cout<<"Escriba los valores de la primer matriz:\n";
    for(int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }

    //Se obtiene la matriz 2  
    cout<<"\nEscriba los valores de la segunda matriz:\n";
    for(int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz2[i][j];
        }
    }

    //Se hacen las operaciones con las matrices
    for(int i=0;i<tamano;i++){
        for(int j=0;j<tamano;j++){
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
            matrizResta[i][j] = matriz1[i][j] - matriz2[i][j];
            matrizMult[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    //Se muestra la matriz de suma
    cout<<"\nLa matriz de sumas es la siguiente:\n";
    for(int i=0;i<tamano;i++){
        cout<<"[";
        for(int j=0;j<tamano;j++){
            cout<<matrizSuma[i][j]<<", ";
        }
        cout<<"]\n";
    }

    //Se muestra la matriz de restas
    cout<<"La matriz de restas es la siguiente:\n";
    for(int i=0;i<tamano;i++){
        cout<<"[";
        for(int j=0;j<tamano;j++){
            cout<<matrizResta[i][j]<<", ";
        }
        cout<<"]\n";
    }

    //Se muestra la matriz de multiplicaciones
    cout<<"La matriz de multiplicaciones es la siguiente:\n";
    for(int i=0;i<tamano;i++){
        cout<<"[";
        for(int j=0;j<tamano;j++){
            cout<<matrizMult[i][j]<<", ";
        }
        cout<<"]\n";
    }

    getch();
    return 0;
}