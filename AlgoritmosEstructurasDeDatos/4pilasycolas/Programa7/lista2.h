#ifndef LISTA2_H
#define LISTA2_H
#include "nodo.h"
//se crea la lista
struct Lista2{
    Nodo *frente;
    Nodo *fin;
    int longitud;//la longitud de la lista(cuantos nodos hay
};
//se crea la funcion que inica o crea la lista
void inicializarCola(Lista2 *);


//inserar al inicio un nodo
void insertarCola(Lista2 *, int );

int esVacia2(Lista2 *);

void eliminarCola(Lista2 *);

#endif // LISTA2_H

