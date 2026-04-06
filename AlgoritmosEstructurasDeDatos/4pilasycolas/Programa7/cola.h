#ifndef COLA_H
#define COLA_H
#include "nodo.h"
//se crea la Cola
struct Cola{
    Nodo *cabeza; //contiene un nodo y sera el primero
    int longitud;//la longitud de la Cola(cuantos nodos hay
};
//se crea la funcion que inica o crea la Cola
void inicializarCola(Cola *);

//una funcion que devuelve un entero si es vacia o no
int esVacia(Cola *);

//inserar al inicio un nodo
void insertarPila(Cola *, int );

void eliminarPila(Cola *);

void imprimir(Cola *);

#endif // COLA_H

