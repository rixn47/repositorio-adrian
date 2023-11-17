#include <iostream>
using namespace std;
int main(){
	const int tamArreglo = 5;
	int numeros[tamArreglo];
	
	for(int i=0; i< tamArreglo; i++){
		cout<<"ingrese el numero"<<i+1<<":";
		cin>>numeros[i];
	} 
	
	cout<<"los numeros ingresados son:";
	for(int i=0; i<tamArreglo; i++){
		cout<<numeros[i]<<"";
	}
	cout<<endl;
	return 0;
}
