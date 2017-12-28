#ifndef MMecanico_H_
#define MMecanico_H_
#include <string>
using namespace std;
class Mmecanico{
	private:
		string cedula,nombre;
		int cantidad;//cantidad de reparaciones
		float monto;
		int tipo;//tipo de reparacion
		float acum,acum2;
		int contador;//tren delantero
	public:
		Mmecanico();//constructor
		void setCedula(string);
		string getCedula();
		void setNombre(string);
		string getNombre();
		void setCantidad(int);//cantidad de de reparaciones
		int getCantidad();
		void setTipo(int);
		int getTipo();
		void setMonto(float);
		float getMonto();
		float calcComision();
		float montoneto();//monto total del mecanico
		void procesar();
		void setAcum(float);//Acumular las comisiones
		float getAcum();
		void setAcum2(float);//Acumular el numero de reparaciones
		float getAcum2();
		void setContador(int);//contador tren delantero
		int getContador();
};
#endif
