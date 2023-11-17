#include <iostream>
#include <string>
using namespace std;
int main (){
	
	const  int numAlumnos = 4;
	int asistencia[numAlumnos];
	
	for(int i=0; i<numAlumnos; i++){
	     asistencia[i]=0;
	}
	cout<<"Bienvenido al sistema de asistencia: "<<endl;
	cout<<"Registra la asistencia de los alumnos: "<<endl;
	cout<<"Registra el nombres de los alumnos e indica si asistio: "<<endl;
	for(int i=0; i<numAlumnos; i++){
		string nombre;
		char asistio;
		cout<<"Alumno: "<<i+1<<" : ";
		cin>>nombre;
		cout<<"¿SI ASISTIO?  (S/N)";
		cin>>asistio;
		
		if(asistio == 'S'|| asistio == 's'){
			asistencia[i] = 1;
		}
	}
	int faltas = 0;
	for(int i=0; i<numAlumnos; i++){
		if (asistencia [i] == 0){
			faltas++;
		}
	}
	int asis = 0;
	for(int i=0; i<numAlumnos; i++){
		if (asistencia [i] == 0){
			asis++;
		}
	}
	cout<<"Numero de faltas"<<faltas<<endl;
	cout<<"numero de asistencias"<<asis<<endl;
	return 0;
}
