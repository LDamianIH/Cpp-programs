/* Crear un programa que calcule el factorial de cualquier numero que se solicite*/

#include<iostream>

using namespace std;

int main(){
    int valor, i;
    cout<<"Escriba el numero del que desee obtener su factorial: ";
    cin>>valor;

    i = valor;

    while(i != 1){
        valor = valor * (i - 1);
        cout<<"== "<<valor<<endl;
        i--;
    }
    
    cout<<"El valor final es: "<<valor;

    return 0;
}
