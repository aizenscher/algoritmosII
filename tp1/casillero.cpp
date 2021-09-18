/*
 * casillero.cpp
 *
 *  Created on: 17 sep. 2021
 *      Author: r00t
 */

#include "casillero.h"

Casillero *conrtruirFicha(){
	Casillero *nuevoCasillero = new Casillero[];
	nuevoCasillero->valor = '+';
	return nuevoCasillero;
}

void eliminarCasillero(Casillero *casillero){
	delete[] casillero;
}

void eliminarCasillero(Casillero **){
}

void inicializarCasillero(Casillero *casillero){
	casillero->valor = ' ';
}

