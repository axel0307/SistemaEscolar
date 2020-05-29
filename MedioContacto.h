/*
 * MedioContacto.h
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#ifndef MEDIOCONTACTO_H_
#define MEDIOCONTACTO_H_
#include <string>

namespace std {

class MedioContacto {
private:
	string tipo,valor;
public:
	MedioContacto();
	virtual ~MedioContacto();
	void setTipo(string tipo);
	string getTipo();
	void setValor(string valor);
	string getValor();
};

} /* namespace std */

#endif /* MEDIOCONTACTO_H_ */
