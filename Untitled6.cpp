#include<iostream>
using namespace std;
int main(){
	float nota1,nota2,nota3,nota4,nota5,promedio;
	cout<<"digita la primer nota";
	cin>>nota1;
	cout<<"digita la segunda nota";
	cin>>nota2;
	cout<<"digita la tercera nota";
	cin>>nota3;
	cout<<"digita la cuarta nota";
	cin>>nota4;
	cout<<"digita la quinta nota";
	cin>>nota5;
	promedio=(nota1+nota2+nota3+nota4+nota5)/5;
	if(promedio>=7){
	cout<<"estas aprobado";
}
	else
		if(promedio<=7)
	cout<<"no estas aprobado";
}
