#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
//se crea la lista
struct Lista{
    Nodo *cabeza; //contiene un nodo y sera el primero
    int longitud;//la longitud de la lista(cuantos nodos hay
};
//se crea la funcion que inica o crea la lista
void inicializarLista(Lista *);

//una funcion que devuelve un entero si es vacia o no
int esVacia(Lista *);

//inserar al inicio un nodo
void insertarPila(Lista *, int );

void eliminarPila(Lista *);

void imprimir(Lista *);

#endif // LISTA2_H

