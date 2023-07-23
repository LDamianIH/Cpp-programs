/* Hacer una estructura para alumnos en donde se reciba el nombre, grupo y promedio y mostrar quien es el que tiene el mejor 
promedio de los 3 alumnos*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Alumnos
{
    char nombre[20];
    char grupo;
    double promedio;
};  //como ahora se va a preguntar cuantos alumnos se van a ingresar entonces se definen las variables dentro del main

int main(){
    int cantidad, mayor, pos=0;

    cout<<"Digite cuantos alumnos se van a ingresar: ";
    cin>>cantidad;

    struct Alumnos alumno[cantidad];            //Se define el arreglo de variables alumno con la estructura alumnos

    cout<<"\nDigite los datos de los alumnos";
    for(int i=0;i<cantidad;i++){
        cout<<endl<<"Alumno "<<i<<endl;

        cout<<"Nombre: ";
        fflush(stdin);
        cin.getline(alumno[i].nombre,20,'\n');
        cout<<"Grupo: ";
        cin>>alumno[i].grupo;
        cout<<"Promedio: ";
        cin>>alumno[i].promedio;
    }

    //9, 8, 10, 7

    for(int i=0;i<cantidad;i++){
        if(alumno[i].promedio > mayor){     //se necesita la variable mayor para guardar el valor que se va a comparar
            mayor = alumno[i].promedio;     
            pos = i;
        } 
    }

    cout<<"El promedio mas alto es de "<<alumno[pos].nombre<<" del grupo "<<alumno[pos].grupo<<" con "<<alumno[pos].promedio
    <<" de promedio.";

    getch();
    return 0;
}