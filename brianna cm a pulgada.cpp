//realice un programa que permita convertir unidades de longitud de cm a pulgadas, metros, millas y km



#include <iostream>
using namespace std;
int main(){
	float centimetro = 0;
	int unidadConversora = 0;
	float cmaPulgada = 0;
	float cmaMetro = 0;
	float cmaMilla= 0;
	float cmaKm = 0;
	
	
	cout<<"A que unidad quisiera convertir?"<<endl;
	cout<<"Presione 1 para pulgadas"<<endl;
	cout<<"Presione 2 para metros"<<endl;
	cout<<"Presione 3 para millas"<<endl;
	cout<<"Presione 4  para kilometros"<<endl;
	cin>>unidadConversora;
	
	cout<<"Ingrese su unidad en centimetros"<<endl;
	cin>>centimetro;
	
	if (unidadConversora == 1 ){
		cmaPulgada = centimetro * 0.3937;
		cout<<"su unidad en pulgadas es:"<<cmaPulgada<<endl;
	}
	else if (unidadConversora == 2){
		cmaMetro = centimetro / 100;
		cout<<"su unidad en metro es:"<<cmaMetro<<endl;
	}
	else if (unidadConversora == 3){
		cmaMilla = centimetro / 160934.4;
		cout<<"su unidad en milla es:"<<cmaMilla<<endl;
	}
	else if (unidadConversora == 4){
		cmaKm = centimetro / 100000;
		cout<<"su unidad en Km es:"<<cmaKm<<endl;
	
		
	}
	
	return 0;
	}
