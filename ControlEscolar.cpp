/*
 * ControlEscolar.cpp
 *
 *  Created on: May 29, 2020
 *      Author: curso
 */

#include "ControlEscolar.h"
#include <iostream>
#include "ProfesorVista.h"
#include "Menu.h"


ControlEscolar::ControlEscolar() {
	// TODO Auto-generated constructor stub

}

ControlEscolar::~ControlEscolar() {
	// TODO Auto-generated destructor stub
}

int main(){


	int r=0;
	do{

	Menu *menu;
	menu = new Menu();
	menu->muestrameMenu();

	cout<<"Quieres ver de nuevo el menu?"<<endl;
	cin>>r;
	}while(r==1);

}
