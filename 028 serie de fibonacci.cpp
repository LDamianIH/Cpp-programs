/* Crear la serie de fibonacci
1 1 2 3 5 8 13 21 34 55 89 ... n*/

#include<iostream>

using namespace std;

int main(){
    int cantidad, serie = 1, n1 = 0, n2 = 1;
    cout<<"Digite cuantas veces desea que se ejecute el programa: ";
    cin>>cantidad;

    for(int i=0; i<=cantidad; i++){
        serie = n1 + n2;
        n1 = n2;
        n2 = serie;
        cout<<i<<".- "<<serie<<endl;
    }
    return 0;
    }