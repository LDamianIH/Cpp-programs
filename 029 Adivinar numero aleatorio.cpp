/* Realizar un programa que solicite al usuario digitar un numero entero entre 1 y 100. El programa debe generar un numero
aleatorio en ese mismo rango e indicarle al usuario si el numero que digito es menor o mayor al nmero aleatorio asi hasta 
que lo adivine y po rultimo mostrarle el numero de intentos que le llevo*/

#include<iostream>
#include<stdlib.h>          
#include<time.h>            

using namespace std;

int main(){
    int numero, datoaleatorio, conteo = 0;
    srand(time(NULL));                      //genera numero aleatorio
    datoaleatorio = 1 + rand() % (100);
    
    do{
        cout<<"Digite un numero: "; cin>>numero;
        if(numero>datoaleatorio){
            cout<<"\nDigite un numero menor\n";
        }
        if(numero<datoaleatorio){
            cout<<"\nDigite un numero mayor\n";
        }
        conteo++;
    }while(numero != datoaleatorio);
    
    cout<<"\nFELICIDADES ADIVINASTE EL INTENTO\n";
    cout<<"Numero de intentos: "<<conteo<<endl;

    system("pause");
    return 0;
}