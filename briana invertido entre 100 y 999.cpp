//REALICE UN PROGRAMA QUE PERMITA RECIBIR UN NRO POR TECLADO ENTRE 100 Y 999 Y LO DEVUELVA INVERTIDO ADEMAS DIGA 
//SI EL NRO ES CAPICUA

#include <iostream>
using namespace std;
int main(){
	
	int numero = 0;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	
	if(numero>=100 && numero<=999){
		int centena = numero / 100;
		int decena = (numero/10)%10;
		int unidad = numero % 10;
		
		int invertido = (unidad * 100) + (decena * 10) + centena;
		cout<<"Numero invertido:"<<invertido<<endl;
		
		
		if (numero == invertido){
		cout<<"El numero ES capicua"<<endl;
		}else{
		cout<<"El numero NO es capicua"<<endl;
	}
	}else
	cout<<"El numero debe estar entre 100 y 999"<<endl;
	}
			return 0;
} 