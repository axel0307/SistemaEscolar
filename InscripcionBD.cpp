/*
 * InscripcionBD.cpp
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#include "InscripcionBD.h"
#include "Inscripcion.h"
#include <iostream>
using namespace std;

InscripcionBD::InscripcionBD() {
	// TODO Auto-generated constructor stub

}

InscripcionBD::~InscripcionBD() {
	// TODO Auto-generated destructor stub
}

int InscripcionBD::guardaInscripcion(Inscripcion inscripcion){
	int respuesta;
	respuesta = 1;
	if (respuesta==1){
		cout <<"Se realizo con exito la inscripcion";
		return respuesta;
	} else
		return 0;
}
