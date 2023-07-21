#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[100];
    char palabra2[100];


/*para comparar dos palabras se utiliza strcmp(palabra 1, palabra 2) se utiliza en condiciones y entrega un 0
    si ambas cadenas son iguales. Esta funcion tambien identifica si una palabra es mayor alfabeticamente*/

    cout<<"Digite la primer cadena: ";
    cin.getline(palabra1,100,'\n');
    
    cout<<endl<<"Digite otra cadena: ";
    cin.getline(palabra2,100,'\n');

    if(strcmp(palabra2,palabra1)>0){
        cout<<"La palabra '"<<palabra2<<"' es menor alfabeticamente";
    } else if(strcmp(palabra2,palabra1)==0){
        cout<<"Ambas palabras son iguales";
    } else{
        cout<<"La palabra '"<<palabra2<<"' es mayor alfabeticamente";
    }
 
    getch();
    return 0;
}