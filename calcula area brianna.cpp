/* realice un programa que permita calcular el area de un circulo, un cuadrado, un rectangulo 
y un triangulo equilatero, procure usar al menos 3 secuencias de escape para dar formato a sus mensajes
considere que su menu de opciones, sea facil de entender y agradable a la vista*/


#include <iostream>
#include <cmath>
using namespace std;

float areaRectangulo (float base, float altura){
	return base * altura;}

float areaCuadrado (float lado){
	return lado * lado;}
	
float areaCirculo (float radio){
	return 3.1416 * (radio * radio);}	
	
float areaTriangulo (float base, float altura){
	return base * altura / 2;}	
	
	
int main (){
	int opcion;
	double area, radio, lado, base, altura;
	
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1. Calcular el area de un circulo"<<endl;
	cout<<"2. Calcular el area de un cuadrado"<<endl;
	cout<<"3. Calcular el area de un rectangulo"<<endl;
	cout<<"4. Calcular el area de un triangulo equilatero"<<endl;
	cout<<"5. SALIR"<<endl;
	cout<<"Seleccione (1-5)"<<endl;
	cin>>opcion;
	
	
	switch (opcion){
		
		case 1:
			cout<<"ingrese el radio del circulo"<<endl;
			cin>>radio;
			
			if (radio < 0){
				cout<<"ERROR el radio no puede ser negativo"<<endl;
			}else{
				area = areaCirculo(radio);
				cout<<"El area del circulo es: "<<area<<endl;
			}
			break;
			
			
		case 2:
			cout<<"ingrese lado del cuadrado"<<endl;
			cin>>lado;
			
			if (lado < 0){
				cout<<"ERROR el lado no puede ser negativo"<<endl;
			}else{
				area = areaCuadrado (lado);
				cout<<"El area del cuadrado es: "<<area<<endl;
			}
			break;	
			
			
		case 3:
			cout<<"ingrese base del rectangulo"<<endl;
			cin>>base;
			
			cout<<"ingrese altura del rectangulo"<<endl;
			cin>>altura;
			
			if (base < 0 || altura < 0){
				cout<<"ERROR las dimensiones no pueden ser negativas"<<endl;
			}else{
				area = areaRectangulo(base, altura);
				cout<<"El area del rectangulo es: "<<area<<endl;
			}
			break;	
			
			
		case 4:
			cout<<"ingrese base del triangulo"<<endl;
			cin>>base;
			
			cout<<"ingrese altura del triangulo"<<endl;
			cin>>altura;
			
			if (lado < 0){
				cout<<"ERROR las dimensiones no pueden ser negativas"<<endl;
			}else{
				area = areaTriangulo (base, altura);
				cout<<"El area del triangulo equilatero es: "<<area<<endl;
			}
			break;	
			
		case 5:
			cout<<"Gracias por usar el programa"<<endl;
			
			break;
			
			
		default:
		cout<<"opcion no valida, por favor elija entre 1 y 5"<<endl;	
			
}
	
	
}

