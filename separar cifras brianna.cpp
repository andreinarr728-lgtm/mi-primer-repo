/*Realice un programa que permita separar en cifras, numeros en un rango entre 10 y 999.999. 
ademas de separar en cifras y mostrarlas en pantalla, su programa debe ser capaz de identificar si el numero
ingresado es par, impar, primo o perfecto*/


#include <iostream>
using namespace std;
int main (){
	
	int numero = 0;
	
	cout<<"Ingrese un numero entre 10 y 999.999"<<endl;
	cin>>numero;
	
	//validacion
	while (numero <10 || numero >999999){
		cout<<"El numero esta fuera del rango permitido"<<endl;
		cout<<"Ingrese un numero entre 10 y 999.999"<<endl;
		cin>>numero;
	
	}
	
	//separar en cifras 
	cout << "CIFRAS DEL NUMERO"<<endl;
    int temp = numero;
    int divisor = 1;

    
    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    temp = numero;
    while (divisor > 0) {
        int cifra = temp / divisor;
        cout << cifra << " ";
        temp = temp % divisor;
        divisor = divisor / 10;
    }
    cout << "\n";
    
    
	
	//identificar si es par
	if (numero%2 ==0){
		cout<<"El numero es par"<<endl;
	}else{
		cout<<"El numero es impar"<<endl;
	}
	
	//identificar si es primo
	int contadorDivisores = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contadorDivisores++;
        }
    }

    if (contadorDivisores == 2) {
        cout << "- Es PRIMO\n";
    } else {
        cout << "- NO es primo\n";
    }
	
	
	//identificar si es perfecto
	int sumaDivisores = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }

    if (sumaDivisores == numero) {
        cout << "- Es PERFECTO\n";
    } else {
        cout << "- NO es perfecto\n";
    }
    
	
	
	
	
	
	
	
	
}

