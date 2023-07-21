/* Realice un programa que calcule y muestre en la salida estandar la suma
de los cuadrados de numeros que se soliciten (mayores que cero)*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float inicio, limite, valor, paso;
    cout<<"Digite desde que numero quiere que inicie la suma: ";
    cin>>inicio;
    cout<<"Digite el numero de veces que quiere que se ejecute la operacion: ";
    cin>>limite;
    cout<<"Digite el paso de la suma: ";
    cin>>paso;

    valor = inicio;

    for(int i = inicio+1; i<=limite; i=i+paso){
        valor += i*i;                               //valor = valor + i*i;
        cout<<i<<". - "<<valor<<endl;
    }

    cout<<"El resultado es: "<<valor;
    
    return 0;
}