/* Escribir un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en un nuevo
vector, situado en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el 
contenido del nuevo vector en la salida estandar.*/

#include<iostream>

using namespace std;
int main(){
    char vect1[] = {'a','b','c'};
    char vect2[] = {'d','e','f','g','h'};
    char vect3[8];
    
    for(int i=0;i<3;i++){
        vect3[i] = vect1[i];
    }

    for(int i=3;i<8;i++){
        vect3[i] = vect2[i-3];
    }

    for(int i=0;i<8;i++){
        cout<<vect3[i]<<" \n";
    }
    
    return 0;
}