/* Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas, posteriormente
mostrar la matriz en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int filas, columnas;

    cout<<"Defina el numero de filas que desea tener: ";
    cin>>filas;
    cout<<"Defina el numero de columnas que desea tener: ";
    cin>>columnas;
    int matriz[filas][columnas];
    
    //Creacion de la matriz
    cout<<"\nIntroduzca los numeros de la matriz por filas:\n";
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    //Se muestra la matriz
    cout<<"La matriz formada es la siguiente:\n";
    for(int i=0;i<filas;i++){
        cout<<"[";
        for(int j=0;j<columnas;j++){
            cout<<matriz[i][j]<<", ";
        }
        cout<<"]\n";
    }

    getch();
    return 0;
}