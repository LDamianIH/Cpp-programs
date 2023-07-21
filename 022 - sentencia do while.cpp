/* Sentencia do while 
piensa y luego actua

    do{
        conjunto de instrucciones
    }while(expresion lógica);
*/
#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
    int i;

    i = 1;

    do{
        cout<<i<<endl;
        i++;                    //aumenta el iterador de uno en uno
    }while(i<=10);

    system("pause");
    return 0;
}