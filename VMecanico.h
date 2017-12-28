#ifndef VMecanico_H_
#define VMecanico_H_
#include <iostream>
#include <iomanip>
#include <iostream>

using namespace std;

class Vmecanico{
	public:
		Vmecanico();//constructor
		string leerCedula();
		string leerNombre();
		int leerCantr();//cantidad de reparaciones
		int leerTipo(int);//leer tipo de reparacion
		float leerMonto();//Leer Monto
		void imprimir(string, float,float);//cedula,monto total,comisiones
};
#endif
