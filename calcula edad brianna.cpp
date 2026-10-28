//realice un programa que a partir de una fecha ingresada calcule la edad, valide la fecha ingresada 

#include <iostream>
using namespace std;
int main (){
	
	int dia = 0;
	int mes = 0;
	int year = 0;
	int hoy_dia = 28;
	int hoy_mes = 10;
	int hoy_year = 2026;
	
	cout<<"Ingrese su DIA de nacimiento"<<endl;
	cin>>dia;
	
	cout<<"Ingrese su MES de nacimiento"<<endl;
	cin>>mes;
	
	cout<<"Ingrese su AÑO de nacimiento"<<endl;
	cin>>year;
	
	
	// validar que el year sea logico
	
	if(year <= 1900 || year >= 2027){
		cout<<"El año ingresado no es valido"<<endl;
	}
	return 0;
	
	
