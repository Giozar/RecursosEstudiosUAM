#ifndef ARBOL_H
#define ARBOL_H
#include "nodo.h"
struct Arbol{
    Nodo * raiz;
};
void inicializar(Arbol *);
int esVacio(Arbol *);
Nodo * insertar(int , Nodo *);
void imprimirPreOrden(Nodo *);
void imprimirInOrden(Nodo *);
void imprimirPostOrden(Nodo *);
Nodo * buscar(int, Nodo *);
Nodo * borrar(int,Nodo *);
Nodo * buscarMinimo(Nodo *);
Nodo * buscarMaximo(Nodo *);

#endif // ARBOL_H
