/* Una estructura es una coleccion de datos que puede ser de distintos tipos. Se pueden tener n campos.
Cada estructura tiene variables y estas contienen todos los campos y se pueden definir al definir la estructura o
en la funcion principal (int main()) 


struct coleccion_CD {
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_lanzamiento[20];
}CD1,CD2,CD3;                       //Variables
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona
{
    char nombre[20];
    int edad;
}
persona1 = {"Damian" , 22},
persona2 = {"Valeria", 21},
persona3
;

//para imprimir los datos es necesario ir a la funcion main

int main(){
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"\nNombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;

    cout<<"\nDigite un nombre para agregar: ";
    cin.getline(persona3.nombre,20,'\n');
    cout<<"Ahora digite su edad: ";
    cin>>persona3.edad;

    getch();
    return 0;
}