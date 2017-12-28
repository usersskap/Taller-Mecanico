#include "VMecanico.h"
Vmecanico::Vmecanico(){}//constructor

string Vmecanico::leerNombre(){
	string n;
	cout<<endl;
	cout<<"Introduzca su nombre?: ";
	cin.sync();
	getline(cin,n);
	return n;
}

string Vmecanico::leerCedula(){
	string c;
	cout<<endl;
	cout<<"Introduzca su cedula?: ";
	cin.sync();
	getline(cin,c);
	return c;
}

int Vmecanico::leerCantr(){
	int ctr;//cantidad de reparaciones
	cout<<endl;
	cout<<"Introduzca la cantidad de reparaciones: ";
	cin>>ctr;
	return ctr;
}

float Vmecanico::leerMonto(){
	float m;
	cout<<endl;
	cout<<"Introduzca el monto: ";
	cin>>m;
	return m;
}

int Vmecanico::leerTipo(int i){
	int t;
	cout<<endl;
	cout<<"Su reparacion numero "<<i<<" fue de que tipo? "<<endl;
	cout<<"1-Electricas"<<endl;
	cout<<"2-Tren delantero"<<endl;
	cout<<"3-Frenos"<<endl;
	cout<<"Introduzca su opcion: ";
	cin>>t;
	return t;
}

void Vmecanico::imprimir(string ced,float mt,float com){
	cout<<endl;
	cout<<"----Mecanico----"<<endl;
	cout<<"Cedula: "<<ced<<endl;
	cout<<"Monto total: "<<mt<<endl;
	cout<<"Total comisiones: "<<com<<endl;
}


	
