#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
	char nombre[20];
	int edad;
}persona2;


int main(){
	cout<<"Nombre: ";
	cin.getline(persona2.nombre,20,'\n');  //guarda cadena de caracteres
	cout<<"Edad: ";
	cin>>persona2.edad;
	
	cout<<"Nombre: "<<persona2.nombre<<endl;
	cout<<"Edad: "<<persona2.edad<<endl;
	
	getch();
	return 0;
}
