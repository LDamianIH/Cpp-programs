#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Damian";
    char palabra2[] = {'D','a','m','i','a','n'};
    char nombre[6];

    cout<<"Digite su nombre";

    //cin>>nombre                                   //solo sirve cuando se trata de una sola palabra, al detectar un espacio 
                                                    //deja de guardar la informacion

    //gets(nombre);                                 //si se digitan mas caracteres de los que el vector puede guardar tomará
                                                    //espacios de memoria de otro lado

    cin.getline(nombre,6,'\n');                     //cin.getline(variable, tamaño, cuando terminará)

    cout<<nombre<<endl;
    
    getch();
    return 0;
}