/* Para que esta busqueda funcione se necesita que el arreglo esté ordenado de forma ascendente
Busca el dato por mitades, primero busca con la primer mitad, si el dato no coincide con el elemento en la 
posicion mitad entonces comprueba si es mayor o menor, si es mayor establece el limite inferior como la mitad,
si el dato que se busca es menor entonces establece el limite superior como la mitad.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int arr[10] = {1,2,5,6,7,9,10,10,11,22}; 
    int inf, sup, mitad, dato, tamano,i;

    tamano = sizeof arr / sizeof arr[0];

    char bandera = 'F';

    dato = 100;

    //se deben inicializar los limites inferior y superior del arreglo
    inf = 0;
    sup = tamano;

    while (inf <= sup){

        mitad = (inf+sup)/2;            //establece la mitad, la cual será el indice del arreglo

    //se usa la posicion mitad y se comprueba si coincide con dato (solo hay 3 posibles casos, si es mayor, menor o igual)
        if(arr[mitad] == dato){         //si es igual se interrumpe el ciclo while con break
            bandera = 'V';
            break;
        }

        if(arr[mitad] > dato){          //si el elemento en la mitad es mayor entonces el limite superior se vuelve la
            sup = mitad;                //mitad para que busque solo en la mitad izquierda
            mitad = (inf+sup)/2;
        }

        if(arr[mitad] < dato){          //si el elemento en la mitad es menor entonces el limite inferior se vuelve la
            inf = mitad;                //mitad para que busque solo en la mitad derecha
            mitad = (inf+sup)/2;
        }

        i++;
        if(i==tamano/2){
            cout<<"Se busco "<<i<<" veces y ";
            break;
        }
    }
    
    if(bandera == 'V'){
        cout<<"El dato ha sido encontrado en la posicion: "<<mitad;
    } else{
        cout<<"el dato no se ha encontrado";
    }

    getch();
    return 0;
}