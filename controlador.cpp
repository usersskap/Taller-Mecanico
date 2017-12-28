#include "controlador.h"
Controlador::Controlador(){}

void Controlador::procesarMecanicos(){
	string n,c;//nombre y cedula
	Vmecanico vistamc;
	Mmecanico mmec;
	float sb;//sueldo base
	int cr,tp;//cantidad de reparaciones y tipo de repuesto
	char respuesta;
	mmec.setContador(0);//Inicializo el contador
	while(true){
		cout<<endl;
		n = vistamc.leerNombre();
		c = vistamc.leerCedula();
		sb = vistamc.leerMonto();
		cr = vistamc.leerCantr();
		mmec.setNombre(n);
		mmec.setCedula(c);
		mmec.setMonto(sb);
		mmec.setCantidad(cr);
		mmec.setAcum(0);//Incializo el acumulador
		for (int i=0;i<cr;i++){
			tp = vistamc.leerTipo(i+1);
			mmec.setTipo(tp);
			mmec.calcComision();
			mmec.procesar();
			mtaller.procesarT(mmec);
		}//for
		vistamc.imprimir(mmec.getCedula(),mmec.montoneto(),mmec.getAcum());
		
		cout<<endl;
		cout<<"Desea registrar otro mecanico (s/n) ?: ";
		cin>>respuesta;
		if (respuesta == 'n')
			break;
}//while
		mtaller.porcentajee(mmec);//proceso el porcentaje
}

void Controlador::taller(){
	Vtaller vt;
	vt.imprimirTaller(mtaller.getMayor(),mtaller.getPorcentaje());
}

