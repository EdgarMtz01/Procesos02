#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
	char nombre[20];
	int edad;
}persona1;


int main(){
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');  //guarda cadena de caracteres
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	getch();
	return 0;
}
