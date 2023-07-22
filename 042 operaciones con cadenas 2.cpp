#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[100];
    char palabra2[100];


    cout<<"Digite la primer cadena: ";
    cin.getline(palabra1,100,'\n');
    
    cout<<endl<<"Digite otra cadena: ";
    cin.getline(palabra2,100,'\n');


    /*para comparar dos palabras se utiliza strcmp(palabra 1, palabra 2) se utiliza en condiciones y entrega un 0
    si ambas cadenas son iguales. Esta funcion tambien identifica si una palabra es mayor alfabeticamente*/

    if(strcmp(palabra2,palabra1)>0){
        cout<<"La palabra '"<<palabra2<<"' es menor alfabeticamente";
    } else if(strcmp(palabra2,palabra1)==0){
        cout<<"Ambas palabras son iguales";
    } else{
        cout<<"La palabra '"<<palabra2<<"' es mayor alfabeticamente";
    }


    /* Para concatenar una cadena de caracteres con otra se usa strcat(). se debe crear otra cadena que vaya a contener
    ambas cadenas strcat(primer cadena, segunda cadena) une ambas cadenas y se guarda en la primer cadena*/
    char palabra3[100];
    
    strcpy(palabra3,palabra1);              //strcpy(destino, origen)

    strcat(palabra3, palabra2);             

    cout<<"\nLa union de ambas palabras es: "<<palabra3<<endl;


    /* Para invertir una cadena se utiliza la funcion strrev(), este puede servir para identificar palabras palindromas*/
    
    char palabraInv[100];
    
    strcat(palabraInv, palabra1);
    strrev(palabraInv);
    cout<<"La palabra invertida es: "<<palabraInv<<endl;

    if(strcmp(palabraInv,palabra1)==0){
        cout<<"La primer palabra es un palindromo - "<<strcmp(palabra1,palabraInv)<<endl;
    } else{
        cout<<"La primer palabra no es un palindromo - "<<strcmp(palabra1,palabraInv)<<endl;
    }

    /* para convertir una cadena a solo mayusculas se usa strupr()*/

    cout<<"\nLa palabra invertida en mayusculas es: "<<strupr(palabraInv)<<endl;

    /* Para convertir una cadena a solo minusculas se usa strlwr()*/

    cout<<"\nLa palabra anterior en minusculas es la siguiente: "<<strlwr(palabraInv)<<endl;

    getch();
    return 0;
}