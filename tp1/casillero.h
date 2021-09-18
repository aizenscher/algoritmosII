/*
 * casillero.h
 *
 *  Created on: 17 sep. 2021
 *      Author: r00t
 */

#ifndef CASILLERO_H_


typedef struct{
	char valor;
}Casillero;

Casillero *construirCasillero();
void eliminarCasillero(Casillero *);
void eliminarCasillero(Casillero **);
void inicializarCasillero(Casillero *);

#define CASILLERO_H_





#endif /* CASILLERO_H_ */
