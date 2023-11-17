#include <iostream>
using namespace std;
int main(){
	
	int miArreglo[5];
	string nombres [3];
	
	//inicializar el primer arreglo
	miArreglo[0] = 10;
	miArreglo[1] = 20;
	miArreglo[2] = 30;
	miArreglo[3] = 40;
	miArreglo[4] = 50;
	
	// nombres
	nombres [0]= "adrian";
	nombres [1]= "alan";
	nombres [2]= "jose luis";
	
	//cout<<nombres [0];
	//cout<<miarreglo[3];
	
	for(int i=0; i<=5, i++;){
		cout<<"elementos:"<<i<<"i"<<miArreglo[i]<<endl;
	}
	for(int e=0; e<=3; e++) {
		cout<<"los nombres del arreglo son:"<<nombres [e]<<endl;
	}
	return 0;
}
