#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	string userName;
	string userPassword;
	int loginAttempt=0;
	
	while (loginAttempt<3)
	{
		cout<<"porfavor ingrese su usuario:";
		cin>>userName;
		cout<<"porfavor ingrese su contraseña:";
			cin>>userPassword;
			if (userName=="tilin"&&userPassword=="negro")
			{
				cout<<"bienvenido tilin!\n";
				break;
				
			}
			else
			{
				cout<<"contraseña o usuario invalido.\n"<<'\n'; logingAttempt++;
			}
	}
	if (logingAttempt==3)
	
		cout<<"demasiados intentos.";
		return 0;
	
	cout<<"gracias por acceder.\n";
}
