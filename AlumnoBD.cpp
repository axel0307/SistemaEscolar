/*
 * AlumnoBD.cpp
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#include "AlumnoBD.h"
#include <iostream>

AlumnoBD::AlumnoBD() {
	// TODO Auto-generated constructor stub

}

AlumnoBD::~AlumnoBD() {
	// TODO Auto-generated destructor stub
}
int AlumnoBD::guardaAlumno(Alumno alumno){
	int res;
	res = 1;

	if(res==1){
	cout<<"Se guardo correctamente";
	return res;
	}else
		return 0;
}
