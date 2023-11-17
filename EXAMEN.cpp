#include <iostream>
#include <string>
using namespace std;
const int MAX_USERS = 10; // Número máximo de usuarios
const string USERS[] = {"Luis", "Irving", "Andrea"}; // arreglo para usuarios
const string PASSWORDS[] = {"2007", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}

int main() {
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;

    cout << "Ingrese su contraseña: ";
    cin >> password;

    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
    }
	
	do{
	char opc;
    cout<<"Compañeros bienvenidos a nuestros codigos";
    cout<<"A Vocal"<<endl;
    cout<<"B 1a100"<<endl;
    cout<<"C Cronometro"<<endl;
    cout<<"D Fecha de nacimiento"<<endl;
    cout<<"E 1000 A 0"<<endl;
    cout<<"F Tablas de multiplicar"<<endl;
    cout<<"G Promedio"<<endl;
    cout<<"H Usser and password"<<endl;
    cout<<"I Asistencias"<<endl;
    cout<<"J TamArreglo"<<endl;
    cout<<"k Arreglo y Nombre"<<endl;
    cout<<"l Numero mayor o menor"<<endl;
    cout<<"M Edad"endl;
    cout<<"N Login con Tablas"endl;
    cout<<"O Mensajes"endl;
    cin>>f;
    switch(opc){
    {
    	case 1:{
    		cout<<"vocal"<<endl;
    		{
char letra;
cout<<"Digite la letra:\n";cin>>letra;

if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
    cout<<"Es una vocal";
else
    cout<<"No es vocal";


    return 0;
}
			break;
		}
		case 2:{
			cout<<"1a100"<<endl;
			int a;
 	for (a=1;a<=100;a++)
	 cout<<a<<endl;
	
}
       case 3:{
       	cout<<"cronometro"<<endl;
       int h = 0, m =  0, s = 0;
	while(1){
		
		if(s>=60){
			s = 0;
			m++;
			
			if(m>=60){
				m = 0;
				h++;
			}
		}
		system("cls");
		cout<<h<<":"<<m<<":"<<s;
		Sleep(1000);
		s++;
		break;
	   }
	   case 4:
	   	cout<<"fecha de nacimento"<<endl;
	   	int an,mes,dia,hora,minuto,a,seg;
int multiplica(int a,int b){
	return a*b;
}
int resta(int a,int b){
	return a-b;
}
int main(){
	cout<<"digita tu año de nacimiento";
	cin>>an;
	a = resta (tope,an);
	mes= multiplica (a,meses);
	dia = multiplica (mes,dias);
	hora = multiplica (dia,horas);
	minuto = multiplica(hora,minutos);
	seg = multiplica (minuto,segundos);
	cout<<"haz crecido demasiado"<<endl;
	cout<<a<<"años"<<endl;
	cout<<mes<<"meses"<<endl;
	cout<<dia<<"dias"<<endl;
	cout<<hora<<"horas"<<endl;
	cout<<minuto<<"minutos"<<endl;
		break;
	   }
	   
	   case 5:{
            cout<<"1000 A 0"<<endl;
	   	for (int c= 0;c <=1000; c+=2){
		std::cout<<c<<" ";
		break;
	   }
	   case 6:{
            cout<<"Tablas de multiplicar"<<endl;
	   	int numero;
	
cout<< "De que quieres la tabla?? :"<<endl;
cin>>numero;
	
for(int i=1;i<=10;i++){
int multiplicacion = i * numero;
cout<<numero <<" x "<< i <<"="<<multiplicacion <<endl;
		break;
	   }
	   case 7:{
            cout<<"Promedio"<<endl;
	   		int a,b,c,d,e,suma,promedio;
	cout<<"Bienvenido a esta rutina en la cual calculara tu promedio"<<endl;
	cout<<"Por favor digita la primera evaluacion"<<endl;
	cin>>a;
	cout<<"Por favor digita la segunda evaluacion"<<endl;
	cin>>b;
	cout<<"Por favor digita la Tercera evaluacion"<<endl;
	cin>>c;
	cout<<"Por favor digita la cuarta evaluacion"<<endl;
	cin>>d;
	cout<<"Por favor digita la quinta evaluacion"<<endl;
	cin>>e;
	promedio = (a+b+c+d+e)/5;
	cout<<"Tu promedio general es aprobatoria"<<endl;
	if(promedio >=7){
		cout<<"tu promedio general es de:"<<promedio<<endl;
		
	}
	else{
		cout<<"lo lamento tu calificacion no es aprobatoria"<<endl;
	}
	cout<<"gracias por usar esta aplicacion";
		break;
	   }
	   case 8:{
            cout<<"Usser and password"<<endl;
	   	string user ="305";
string pass = "Queshow";
string usuario, password;
cout<<"Digita tu usuario"<<endl;
getline(cin, usuario);
cout<<"Digita tu pasword o contraseña"<<endl;
getline(cin, password);
if(usuario == user and password == pass){

cout<<"Bienvenido";
}else{

cout<<"Que haces aqui";
		break;
	   }
	   case 9:{
            cout<<"Asistencias"<<endl;
            	const  int numAlumnos = 4;
	int asistencia[numAlumnos];
	
	for(int e=0; e<numAlumnos; e++){
	     asistencia[e]=0;
	}
	cout<<"Bienvenido al sistema de asistencia: "<<endl;
	cout<<"Registra la asistencia de los alumnos: "<<endl;
	cout<<"Registra el nombre de los alumnos e indica si asistio: "<<endl;
	for(int e=0; e<numAlumnos; e++){
		string nombre;
		char asistio;
		cout<<"Alumno: "<<e+1<<" : ";
		cin>>nombre;
		cout<<"¿SI ASISTIO?  (S/N)";
		cin>>asistio;
		
		if(asistio == 'S'|| asistio == 's'){
			asistencia[e] = 1;
		}
	}
	int faltas = 0;
	for(int e=0; e<numAlumnos; e++){
		if (asistencia [e] == 0){
			faltas++;
		}
	}
	int asis = 0;
	for(int e=0; e<numAlumnos; e++){
		if (asistencia [e] == 0){
			asis++;
		}
	}
	cout<<"Numero de faltas"<<faltas<<endl;
	cout<<"numero de asistencias"<<asis<<endl;
	break;
    }
	  case 10:{
           cout<<"TamArreglo"<<endl;
           	const int tamArreglo = 5;
	int numeros[tamArreglo];¨
	 
	 for(int a=0; a< tamArreglo; a++){
	 	cout<<"ingrese el numero"<<a+1<<":";
	 	cin>>numeros[a];
	 }
	 
	 cout<<"los numeros ingresados son:";
	 for(int a=0; a<tamArreglo; a++){
	 	cout<<numeros[a]<<"";
	 }
	 cout<<endl;
     break;
     }
      case 11:{
           cout<<"Arreglo y Nombre"<<endl;
           	int miArreglo[5];
	string nombres[3];
	
	miArreglo[0] = 10;
	miArreglo[1] = 20;
	miArreglo[2] =30;
	miArreglo[3] = 40;
	miArreglo[4] = 50;
	
	
	nombres[0] = "Andrea";
	nombres[1] = "Edgar";
	nombres[2] = "Irving";
	
	for(int a=0; a<=4; a++){
		cout<<"elementos:"<<a<<":"<<miArreglo[a]<<endl;
	}
	for(int f=0; f<=2; f++){
		cout<<"los alumnos son:"<<nombres[f]<<endl;
		break;
	}
    	case 12:{
             cout<<"Numero mayor o menor"<<endl;
             int num1,num2,num3; 
   cout<<"digita el primer numero"; 
   cin>>num1; 
   cout<<"digita el segundo numero"; 
   cin>>num2; 
   cout<<"digita el tercer numero"; 
   cin>>num3; 
   if(num1>num2=and num2>num1 and num1>num3){ 
   cout<<"num1 es menor" 
   } 
   else if (num1<num==num2 and num2>num3 and num1=num3){ 
   cout<<"num2 es el mayor"; 
   else{ 
   cout<<"num2 es menor"; 
   break;
   }
         case 13:{
              cout<<"Edad"<<endl;
               int resultado 
   int fecha  
   cout<<"digita tu año de nacimiento" 
   cin>>fecha; 
   resultado=tope=fecha; 
   if(resultado>=18)} 
   cout<<"eres mayor de edad" 
   } 
   else 
   { 
   cout<<"eres menor";
   break; 
   }
   case 14:{
        cout<<"Login con Tablas"endl;
   string user,pass, usuario = "Sistemas", password = "Admin01";
	char seguir, opc;
	int multiplicacion, numero, i;
	cout<<"bienvenido(a) por favor ingresa al sistema:\n";
	cout<<"ingresa tu usuario: ";
	cin>>user;
	cout<<"ingresa tu password: ";
	cin>>pass;
	if(user == usuario && pass == password){
		do{
			cout<<"Por favor ingresa el numero de la tabla a imprimir: ";
			cin>>numero;
			for(int i= 1;i<=10;i++){
				multiplicacion = i*numero;
				cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;
			}
			cout<<"¿Quieres generar otra tabla de multiplicar(s/n)? ";
			fflush(stdin);
			cin>>seguir;
		}
		while(seguir!='n');
			int h = 0, m =  0, s = 0;
	while(1){
		
		if(s>=60){
			s = 0;
			m++;
			
			if(m>=60){
				m = 0;
				h++;
			}
		}
		system("cls");
		cout<<h<<":"<<m<<":"<<s;
		Sleep(1000);
		s++;	
	}
	else{
		cout<<"Usuario no valido por favor contrata a soporte";
	}
	cin.get();
	break;
    }
    case 15:{
         cout<<"Mensajes"<<endl;
         int main=10% 
 string mensaje"esto lo que puedes sacar"; 
 cout<<Mensaje<<numero; 
 cin.get();
 break;
}
while();

else {
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    }

    return 0;
}

         	  
//gracias por usar mis codigos 
