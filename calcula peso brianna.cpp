//realice un programa que reciba la estatura de un individuo en centimetros y su peso en kg 
//y calcule el indice de masa corporal (IMC). Con la clasificacion de la OMS 
//(delgadez severa <16 ; delgadez moderada (16 - 16.99) ; peso aceptable (17 - 18.49) ; peso normal (18.5 - 24.99)
//; sobrepeso (25 - 29.99) ; obesidad tipo1 (30 - 34.99) ; obesidad tipo2 (35 - 40) ; obesidad tipo 3 >40
// valide la entrada


#include <iostream>
using namespace std;
int main(){
	
	float estatura = 0;
	float peso = 0;
	
	cout<<"Ingrese su estatura en centimetros"<<endl;
	cin>>estatura;
	
	cout<<"Ingrese su peso en kg"<<endl;
	cin>>peso;
	
	while (peso<=0 || estatura<=0){
	cout<<"Error, ingrese los datos correctamente"<<endl;
	cout<<"Ingrese su estatura en centimetros"<<endl;
	cin>>estatura;
	cout<<"Ingrese su peso en kg"<<endl;
	cin>>peso;
}
	
	float estaturaMetro = estatura / 100;
	float estatura2 = estaturaMetro * estaturaMetro;
	float IMC = peso/estatura2;
	
	if (IMC <16){
		cout<<"delgadez severa"<<endl;}
		
		else if( IMC >= 16 && IMC <=16.99){
			cout<<"delgadez moderada"<<endl;
		}
		
		else if( IMC >= 17 &&  IMC <=18.49){
			cout<<"peso aceptable"<<endl;
		}	
		
		else if( IMC >= 18.5 && IMC <=24.99){
			cout<<"peso normal"<<endl;
		}
		
		else if( IMC >= 25 && IMC <=29.99){
			cout<<"sobrepeso"<<endl;
		}
		else if( IMC >= 30 && IMC <=34.99){
			cout<<"obesidad tipo 1"<<endl;
		}
		else if( IMC >= 35 && IMC <=40){
			cout<<"obesidad tipo 2"<<endl;
		}
		else if( IMC >40){
			cout<<"obesidad tipo 3"<<endl;
		}
		
	return 0;
	}