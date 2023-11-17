#include "iostream"
#include "stdio.h"
using namespace std;
int main (){
	string user,pass, usuario ="sistemas" , passwrd = "Admin01";
	char seguir, opc;
	int multiplicacion,numero,i;
	cout<<"Bienvenido(a) por favor ingresa al sistema:\n";
	cout<< "ingresa tu usuario:";
	cin>>user;
	cout<<"Ingresa tu password:";
	cin>>pass;
	if(user == usuario && pass == password){
		do{
			cout<<"Porfavor ingresa el numero de la tabla a imprimir:";
			cin>>numero;
			for(int i = 1;i<=10;i++){
				multiplicacio=i*numero;
				cout<<numero<<" x "<<i<< "  = "<<multiplicacion<<endl;
			}
			cout<<"¿Quieres generar otra tabla de multiplicar(s/n)? ";
			ffljush(stdin);
			cin>>segir;
		}
		while(segir!= 'n');
		
			
		}		
	else{
		cout<<"Usuario no valido por favor contacta al soporte";	
	}
	cin.get(){;
	return0;
	}
}
