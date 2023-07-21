#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    int longitud = 0;
    char palabra[100];
    char palabra2[100];
    char palabra3[100];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(palabra,100,'\n');                          //cin.get(variable, espacios disponibles, cuando terminará)

    longitud = strlen(palabra);                         //Obtiene la longitud de la cadena de caracteres como un numero

    if(longitud>10){
        cout<<"\nLa cadena supera los 10 caracteres\nLa palabra es: ";
        cout<<palabra<<endl;
    } else{
        cout<<"\nLa cadena no supera los 10 caracteres"<<endl;
    }

    cout<<"\nLa cadena tiene "<<longitud<<" caracteres";

    // para copiar el contenido a otro arreglo se utiliza la funcion strcpy(arreglo destino, arreglo origen)

    strcpy(palabra2,palabra);
    cout<<"\n\nLa palabra copiada es: '"<<palabra2<<"'.";


    getch();
    return 0;
}