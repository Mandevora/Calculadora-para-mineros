#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

using namespace std;
int main(){
	int opcion;
	float watios, kwh1, b, c, d;
	
while(opcion!=0){
	system("cls");
	cout<<"CALCULADORA PARA MINEROS"<<endl;
	cout<<"************************"<<endl;
	cout<<"¿que decea hacer?"<<endl;
	cout<<"Calcular el consumo diario de una grafica [1]"<<endl;
	cout<<" "<<endl; //espacio
	cout<<"Salir                                     [0]"<<endl;
	cout<<" "<<endl; //espacio
	cout<<"Seleccione una opcion: ";
		
	cin>>opcion;
	
	switch(opcion){
		case 1: //Calcular el consumo de una grafica
			cout<<" "<<endl; //espacio
			cout<<"Introdusca el consumo de su grafica en watios: ";
			cin>>watios;
			cout<<"Porfavor introdusca el valor del kWh de su region: ";
			cin>>kwh1;
			
			
			b = watios / 1000 * 24 * kwh1;
			
			
			cout<<" "<<endl; //espacio
			cout<<"Su grafica gastara $"<<b<<" cada 24 horas"<<endl;
		break;
		
		case 0:
			;
		break;
	}
	system("pause");
	
		
		
}


	
	
	return 0;
}
