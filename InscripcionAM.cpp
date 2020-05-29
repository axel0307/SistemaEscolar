/*
 * InscripcionAM.cpp
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#include "InscripcionAM.h"
#include "Inscripcion.h"
#include "InscripcionBD.h"
#include <iostream>
#include <string>
using namespace std;

InscripcionAM::InscripcionAM() {
	// TODO Auto-generated constructor stub

}

InscripcionAM::~InscripcionAM() {
	// TODO Auto-generated destructor stub
}

int InscripcionAM::registrarInscripcion(Inscripcion inscripcion){
	int respuestaValidacion;
	respuestaValidacion = validarInscripcion(inscripcion);
	if (respuestaValidacion == 1){
		InscripcionBD *inscripcionBD;
		inscripcionBD = new InscripcionBD();
		int respuestaInscribirAA;
		respuestaInscribirAA = inscripcionBD->guardaInscripcion(inscripcion);
		if(respuestaInscribirAA==1){
			return respuestaInscribirAA;
		}
	}else {
		return -1;
	}
	return 1;

}


int InscripcionAM::validarInscripcion(Inscripcion inscripcion){
	cout <<"Inscripcion valida"<<endl;
	return 1;
}
