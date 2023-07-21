/* Obtener la matriz transpuesta de una matriz cualquiera dada*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int matriz[2][4] = {{1,2,3,4},{5,6,7,8}};

    //Para obtener el tamaño de una matriz se usa sizeof que es una funcion que obtiene el tamaño del arreglo en bytes
    int filas = sizeof matriz / sizeof matriz[0];           //todas las filas entre la primer fila
    int columnas = sizeof matriz[0] / sizeof matriz[0][0];  //la primer fila entre el primer elemento
    cout<<"Filas: "<<filas<<endl;
    cout<<"Columnas: "<<columnas<<endl;
    
    int transpuesta[columnas][filas];

    //Se obtiene la matriz transpuesta
    for(int i=0;i<columnas;i++){
        for(int j=0;j<filas;j++){
            transpuesta[i][j] = matriz[j][i];
        }
    }

    //Se imprime la matriz original
    cout<<"La matriz original es:\n";
    for(int i=0;i<filas;i++){
        cout<<"[";
        for(int j=0;j<columnas;j++){
            cout<<matriz[i][j]<<", ";
        }
        cout<<"]\n";
    }

    //Se imprime la matriz transpuesta
    cout<<"\nLa matriz transpuesta es:\n";
    for(int i=0;i<columnas;i++){
        cout<<"[";
        for(int j=0;j<filas;j++){
            cout<<transpuesta[i][j]<<", ";
        }
        cout<<"]\n";
    }
    
    getch();
    return 0;
}
