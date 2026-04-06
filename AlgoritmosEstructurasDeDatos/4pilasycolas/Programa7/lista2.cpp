#include <iostream>
#include "lista2.h"
#include "nodo.h"
using namespace std;
//
////funcion que inializa o crea la lista
void inicializarCola(Lista2 *lista2){
    lista2->frente = NULL;
    lista2->fin = NULL;
    lista2->longitud = 0;

}
//
int esVacia2(Lista2 *lista2){
    return (lista2->frente == NULL)?1:0;
}

//funcion que agrega un nuevo nodo(la lista, y el elemento)
void insertarCola(Lista2 *lista2, int elementoNuevo){
    Nodo *nuevoNodo = new Nodo();//se crea un nodo aux que contiene un nuevo nodo
    //se usa -> cuando la variable es un apuntador
    nuevoNodo->valor = elementoNuevo;//el valor del nuevo nodo, será el nuevo elemento
    nuevoNodo->siguiente = NULL;//el nodo siguiente sera null

    if(esVacia2(lista2)==1){//si la lista es vacia
        lista2->frente = nuevoNodo;//la cabeza de la lista sera el nuevo nodo
        cout<<"se agrego un nuevo nodo a COLA: ";
    }else{//si la lista ya tiene elementos
        lista2->fin->siguiente = nuevoNodo;
        cout<<"se agrego otro nodo a COLA: ";
    }
    lista2->fin = nuevoNodo;
    cout<<lista2->fin->valor<<endl;
    //cout<<lista2->frente->siguiente->valor<<endl;
    lista2->longitud = lista2->longitud+1; // al finalizar cualquiera de ls procesos aumenta la longuitud

}

void eliminarCola(Lista2 *lista2){
    int n = lista2->frente->valor;
    Nodo *aux = lista2->frente;

    if(lista2->frente == lista2->fin){
        lista2->frente = NULL;
        lista2->fin = NULL;
    }else{
    lista2->frente = lista2->frente->siguiente;
    }
    delete aux;

}









