// Escriba un programa que como entrada reciba tres lados, valide que es un triangulo y diga si es equilatero, isoceles o escaleno

#include <iostream>
using namespace std;
int main(){
	
	float lado1 = 0;
	float lado2 = 0;
	float lado3 = 0;
	
	cout<<"Ingrese medida del lado 1"<<endl;
	cin>>lado1;
	
	cout<<"Ingrese medida del lado 2"<<endl;
	cin>>lado2;
	
	cout<<"Ingrese medida del lado 3"<<endl;
	cin>>lado3;
	
	if (lado1 == lado2 && lado1 == lado3){
		cout<<"Es un triangulo equilatero"<<endl;
	}
	 else if (lado1 == lado2 && lado2 != lado3 && lado1 != lado3){
		cout<<"Es un triangulo isoceles"<<endl;
	}
	else if (lado1 != lado2 && lado2 != lado3 ){
		cout<<"Es un triangulo isoceles"<<endl;
		
		}
		
	return 0;
}
