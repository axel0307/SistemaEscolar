/*
 * Inscripcion.cpp
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#include "Inscripcion.h"
#include<iostream>
#include<string>
using namespace std;
#include "Alumno.h"
#include "Profesor.h"
#include "Materia.h"

Inscripcion::Inscripcion() {
	// TODO Auto-generated constructor stub

}

Inscripcion::~Inscripcion() {
	// TODO Auto-generated destructor stub
}

void Inscripcion::setFolio(int folio){
	this ->folio= folio;
}

int Inscripcion::getFolio(){
	return folio;
}

void Inscripcion::setNombreInstitucion(string nombreInstitucion){
	this ->nombreInstitucion= nombreInstitucion;
}

string Inscripcion::getNombreInstitucion(){
	return nombreInstitucion;
}
