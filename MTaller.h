#ifndef MTaller_H_
#define MTaller_H_
#include "MMecanico.h"

class Mtaller{
	private:
		float mayor,acumulador,porcentaje;
	public:
		Mtaller();//constructor
		void setMayor(float);
		float getMayor();
		void setAcumulador(float);
		float getAcumulador();
		void setPorcentaje(float);
		float getPorcentaje();
		void porcentajee(Mmecanico port);
		void procesarT(Mmecanico mayorr);
	
};
#endif
