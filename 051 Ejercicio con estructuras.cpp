/* Hacer una estructura para un corredor en la cual se guarden los datos del mismo y despues se les coloque una 
clasificacion*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor
{
    char nombre[20];
    int edad;
    char sexo[10];  
    char club[10];
}corredores[3];

int main(){
    char fem[] = "femenino";

    cout<<"Introduzca los datos de los corredores:\n\n";

    //Datos de los corredores
    for(int i=0;i<3;i++){
        cout<<"Corredor "<<i<<".\n";
        cout<<"Nombre: ";
        cin.getline(corredores[i].nombre,20,'\n');
        cout<<"Edad: ";
        cin>>corredores[i].edad;
        fflush(stdin);
        cout<<"Sexo: ";
        cin.getline(corredores[i].sexo,10,'\n');
        cout<<"Club: ";
        cin.getline(corredores[i].club,10,'\n');
        fflush(stdin);
    }

    for(int i=0;i<3;i++){
        if(strcmp(corredores[i].sexo, fem) == 0){
            if(corredores[i].edad <= 18){
                cout<<"La categoria de la corredora "<<corredores[i].nombre<<" es jovenes femenil, con el numero "<<i<<
                " del club "<<corredores[i].club<<".";
            } else if((corredores[i].edad > 18) && corredores[i].edad < 40){
                cout<<"La categoria de la corredora "<<corredores[i].nombre<<" es adultos femenil, con el numero "<<i<<
                " del club "<<corredores[i].club<<".";
            } else if(corredores[i].edad > 40){
                cout<<"La categoria de la corredora "<<corredores[i].nombre<<" es veteranos femenil, con el numero "<<i<<
                " del club "<<corredores[i].club<<".";
            }
        } else{
            if(corredores[i].edad <= 18){
                cout<<"La categoria del corredor "<<corredores[i].nombre<<" es jovenes masculino, con el numero "<<i<<
                " del club "<<corredores[i].club<<".";
            } else if((corredores[i].edad > 18) && corredores[i].edad < 40){
                cout<<"La categoria del corredor "<<corredores[i].nombre<<" es adultos masculino, con el numero "<<i<<
                " del club "<<corredores[i].club<<".";
            } else if(corredores[i].edad > 40){
                cout<<"La categoria del corredor "<<corredores[i].nombre<<" es veteranos masculino, con el numero "<<i<<
                " del club "<<corredores[i].club<<".";
            } 
        }
        cout<<endl;
    }

    getch();
    return 0;
}
