/* Sentencia while
	
	while (expresion logica){
		instrucciones;
	}

escribir numeros entre rangos y con saltos
*/

#include<iostream>

#include<conio.h> 					//libreria nueva

using namespace std;

int main(){
	int inicial, final, paso;
	cout<<"Inicio del conteo: "; cin>>inicial;
	cout<<"Final del conteo: "; cin>>final;
	cout<<"Paso del conteo: "; cin>>paso;
	
	while(inicial<=final){
		cout<<inicial<<endl;
		inicial = inicial + paso;
	}
	
	getch();						//espera a recibir una tecla
	return 0;
}
