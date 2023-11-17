#define tope>>2023;
#define meses>>12;
#define dias>>24;
#define horas>>60;
#define minutos>>60;
#include <iostream>
int an,mes,dia,hora,minuto,a;
int multiplicacion(int a,int b){
	return a*b;
}
int resta(int a,int b){
	return a-b;
}
int main(){
	cout<<"diguita tu año de nacimiento";
	cin>>an;
	a=resta(an,tope);
	mes=multiplicacion(a,meses);
	dias=multiplicacion(mes,dias);
	horas=multiplicacion(horas,minutas);
	minutos=multiplicacion(horas,minutos);
	cout<<"has vivido:"a<<mes<<dia<<horas<<minutos;
}