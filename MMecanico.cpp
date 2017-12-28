#include "MMecanico.h"

Mmecanico::Mmecanico(){
	acum=0.0;
	contador=0;
	monto=0;
	acum2=0;//acumular el total de reparaciones
}//constructor

void Mmecanico::setNombre(string n){
	nombre = n;
}

string Mmecanico::getNombre(){
	return nombre;
}

void Mmecanico::setCedula(string c){
	cedula = c;
}

string Mmecanico::getCedula(){
	return cedula;
}

void Mmecanico::setMonto(float m){
	monto = m;
}

float Mmecanico::getMonto(){
	return monto;
}

void Mmecanico::setCantidad(int cant){
	cantidad = cant;
}

int Mmecanico::getCantidad(){
	return cantidad;
}

void Mmecanico::setTipo(int t){
	tipo = t;
}

int Mmecanico::getTipo(){
	return tipo;
}

void Mmecanico::setAcum(float ac){
	acum = ac;
}

float Mmecanico::getAcum(){
	return acum;
}

void Mmecanico::setAcum2(float ac2){//numero de reparaciones
	acum2 = ac2;
}

float Mmecanico::getAcum2(){//numero de reparaciones
	return acum2;
}

void Mmecanico::setContador(int cont){
	contador = cont;
}

int Mmecanico::getContador(){
	return contador;
}

float Mmecanico::calcComision(){
	if(tipo == 1)
		return (monto*10)/100;
	else if(tipo == 2){
		contador++;
		return (monto*20)/100;
	}
	else
		return (monto*15)/100;
}

void Mmecanico::procesar(){
	acum += calcComision();
	acum2 += getCantidad();
}


float Mmecanico::montoneto(){
	return monto+=getAcum();
}

