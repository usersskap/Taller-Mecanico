#ifndef controlador_H_
#define controlador_H_
#include "MTaller.h"
#include "MMecanico.h"
#include "VMecanico.h"
#include "VTaller.h"

class Controlador{
	private:
		Mtaller mtaller;
		Mmecanico mmecanico;
	public:
		Controlador();//contralodor
		void procesarMecanicos();
		void taller();
	
};
#endif
