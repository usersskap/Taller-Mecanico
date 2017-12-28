#include "MTaller.h"

Mtaller::Mtaller(){
	acumulador=0;
	mayor=0;
}//constructor


void Mtaller::setMayor(float m){
	mayor = m;
}

float Mtaller::getMayor(){
	return mayor;
}

void Mtaller::setAcumulador(float acu){
	acumulador = acu;
}

float Mtaller::getAcumulador(){
	return acumulador;
}

void Mtaller::setPorcentaje(float p){
	porcentaje=p;
}

float Mtaller::getPorcentaje(){
	return porcentaje;
}

void Mtaller::porcentajee(Mmecanico port){
	porcentaje=(port.getContador()*100)/port.getAcum2();
}

void Mtaller::procesarT(Mmecanico mayorr){
	if(mayorr.calcComision()>mayor)
		mayor = mayorr.calcComision();
	acumulador+=mayorr.getAcum();//Total Comisiones
}
