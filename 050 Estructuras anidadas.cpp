/* Al igual que los bucles y los condicionales, una estructura anidada es una estructura dentro de otra
Se puede entender mas facil con el siguiente diagrama:

            {nombre
            {       
empleado----{salario
            {               {direccion
            {dir_empleados--{ciudad
                            {provincia

*/

#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleados;        //dir_empleados es una variable de tipo estructura de la
                                                //estructura info_direccion
    double salario;
}empleados[2];                                  //arreglo de variables de la estructura empleado

int main(){

    // Se piden los datos al usuario para llenar las variables de la estructura empleado
    for(int i=0;i<2;i++){
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');     //variable empleados, 20 espacios(del nombre no de la variable)
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleados.direccion,30,'\n');
        cout<<"Digite su ciudad: ";
        cin.getline(empleados[i].dir_empleados.ciudad,20,'\n');
        cout<<"Digite su provincia: ";
        cin.getline(empleados[i].dir_empleados.provincia,20,'\n');
        cout<<"Digite su salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";

        /*En esta parte se piden muchos datos dentro del ciclo for por lo que el buffer se llenará y no permitirá introducir
        mas elementos, como se usan cadenas de caracteres el buffer se llena mas rapido. Se usa la funcion fflush(stdin)
        para vaciar el buffer*/
        fflush(stdin);
    }

    //Se imprimen los datos
    for(int i=0;i<2;i++){
        cout<<i<<". Nombre: "<<empleados[i].nombre<<endl;
        cout<<i<<". Direccion: "<<empleados[i].dir_empleados.direccion<<endl;
        cout<<i<<". Ciudad: "<<empleados[i].dir_empleados.ciudad<<endl;
        cout<<i<<". Provincia: "<<empleados[i].dir_empleados.provincia<<endl;
        cout<<i<<". Salario: "<<empleados[i].salario<<endl<<endl;
    }

    getch();
    return 0;
}