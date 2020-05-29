/*
 * Materia.h
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#include<iostream>
#include<string>
#ifndef MATERIA_H_
#define MATERIA_H_
using namespace std;

class Materia {
public:
	Materia();
	virtual ~Materia();
	string nombreMateria;
	int claveMateria;
	int numGrado;

	void setNombreMateria(string nombreMateria);
	string getNombreMateria();
	void setClaveMateria(int claveMateria);
	int getClaveMateria();
	void setNumGrado(int numGrado);
	int getNumGrado();

};

#endif /* MATERIA_H_ */
