/* Realizar un programa que solicite de la entrada estandar un entero del 1 al 10 y que
muestre en la salida estandar su tabla de multiplicar.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    float valor, limite;
    cout<<"Digite un numero del cual quiera saber su tabla de multiplicar: ";
    cin>>valor;
    cout<<"Digite el limite de la tabla: ";
    cin>>limite;

    for (int i = 1; i<=limite; i++)
    {
        cout<<valor<<" x "<<i<<" = "<<valor*i<<endl;
    }
    
    system("pause");
    return 0;
}