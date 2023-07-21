/* Desarrollar un programa que determine si una matriz es simetrica o no. Es simetrica si la matriz es cuadrada y si 
es igual a su matriz transpuesta*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    /* Se define una matriz, en este caso una simetrica, se puede reemplazar por una entrada de datos pero en 
    ese caso no se utilizaría la funcion sizeof*/
    int matriz[3][3] = {{1,1,1},
                        {1,1,1},
                        {1,1,1}};
                        
    int filas = sizeof matriz / sizeof matriz[0];
    int columnas = sizeof matriz[0] / sizeof matriz[0][0];
    
    //Se define una bandera para validar una condicion y se inicia en falso 'F' porque se esta usando logica directa
    char bandera = 'F';

    if(filas==columnas){
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                if(matriz[i][j] == matriz[j][i]){
                    bandera = 'T';
                } else{break;}                          //Se detiene el ciclo cuando un elemento es diferente
            }
        }
    }
    
    if(bandera == 'T'){
        cout<<"La matriz es simetrica";
    } else{
        cout<<"La matriz no es simetrica";
    }
    getch();
    return 0;
}