/*
 * ProfesorBD.h
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#ifndef PROFESORBD_H_
#define PROFESORBD_H_
#include <iostream>
#include "Profesor.h"

namespace std {

class ProfesorBD {
public:
	ProfesorBD();
	virtual ~ProfesorBD();
	int guardaProfesor(Profesor profesor);
};

} /* namespace std */

#endif /* PROFESORBD_H_ */
