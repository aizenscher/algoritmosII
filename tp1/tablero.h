/*
 * tablero.h
 *
 *  Created on: 17 sep. 2021
 *      Author: r00t
 */

#ifndef TABLERO_H_

#include "casillero.h"

typedef struct{
	Casillero ***tablero;
	int alto;
	int largo;
}Tablero;

Tablero *crearTablero(int , int);

void destruirTablero(Tablero *);

bool posicionValida(Tablero *, int , int , char );

void agregarFicha(Tablero *, int , int , char );


void moverFicha(Tablero *, int *, int *, char );


#define TABLERO_H_





#endif /* TABLERO_H_ */
