/*
 * tablero.cpp
 *
 *  Created on: 17 sep. 2021
 *      Author: r00t
 */
#include "tablero.h"

Tablero *crearTablero(int alto, int largo){
	Tablero *nuevoTablero = new Tablero[];
	nuevoTablero->tablero = new Casillero[alto][largo];
	for(int i=0; i< alto; i++){
		for(int j=0; j<largo; j++){
			nuevoTablero->tablero[i][j]=construirCasillero();
		}
	}
	return nuevoTablero;
}
void destruirTablero(Tablero *t){
	int alto = t->alto;
	int largo = t->largo;
	for(int i=0; i<alto; i++){
		for(int j=0; j<largo; j++){
			eliminarCasillero(t->tablero[i][j]);
		}
	}
	delete [] t->tablero;
	delete [] t;
}

bool posicionValida(Tablero *t, int alto, int largo, char valor){
	if(t->tablero[alto][largo]->valor != valor){
		return false;
	}
	return true;
}

void agregarFicha(Tablero *t, int posAlto, int posLargo, char valor){
	if(!posicionValida(t,posAlto,posLargo,'+')){
		throw ;
	}
	t->tablero[posAlto][posLargo]->valor = valor;
}

void moverFicha(Tablero *t, int *inicial, int *final, char valor){
	bool posicionInicialValida = posicionValida(t, inicial[0],inicial[1],valor);
	bool posicionFinalValida = posicionValida(t,final[0],final[1],'+');
	if(posicionInicialValida && posicionFinalValida){
		t->tablero[inicial[0]][inicial[1]]->valor = '+';
		t->tablero[final[0]][final[1]]->valor = valor;
	}
}



