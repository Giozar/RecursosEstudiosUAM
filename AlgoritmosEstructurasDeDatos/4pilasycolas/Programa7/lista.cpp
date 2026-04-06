#include <iostream>
#include "lista.h"
#include "nodo.h"

using namespace std;
//funcion que inializa o crea la lista
void inicializarLista(Lista *lista){
    lista->cabeza = NULL;//si el primer nodo osea la cabeza de la lista es nulo
    lista->longitud = 0;//no tiene ningun nodo
}

int esVacia(Lista *lista){

    if(lista->cabeza == NULL){//si el primer nodo es nulo, sigifica que la lista esta vacia
        return 1;//es vacia
    }else{
        return 0;//hay elementos en la lista
    }
}
//funcion que agrega un nuevo nodo(la lista, y el elemento)
void insertarPila(Lista *lista, int elementoNuevo){
    if(esVacia(lista)==1){//si la lista es vacia
        Nodo *nuevoNodo = new Nodo();//se crea un nodo aux que contiene un nuevo nodo
        //se usa -> cuando la variable es un apuntador
        nuevoNodo->valor = elementoNuevo;//el valor del nuevo nodo, será el nuevo elemento
        nuevoNodo->siguiente = NULL;//el nodo siguiente sera null
        lista->cabeza = nuevoNodo;//la cabeza de la lista sera el nuevo nodo
        cout<<"se agrego un nuevo nodo a PILA:";

    }else{//si la lista ya tiene elementos
        Nodo *nuevoNodo = new Nodo();//se crea un nodo aux que crea el nuevo nodo
        nuevoNodo->valor = elementoNuevo;//el valor del nuevo nodo es el nuevo elemento
        nuevoNodo->siguiente = lista->cabeza;//el nodo que ya estaba, sera el siguiente
        lista->cabeza = nuevoNodo;//y el de la cabeza sera el nodo nuevo
        cout<<"se agrego otro nodo a PILA:";
    }
    lista->longitud = lista->longitud+1; // al finalizar cualquiera de ls procesos aumenta la longuitud
    cout<<lista->cabeza->valor<<endl;
}



void eliminarPila(Lista *lista){
    if(esVacia(lista)){//verifica si la lista es vacia
       cout<<"lista vacia"<<endl;
    }
    else{

        lista->cabeza = lista->cabeza->siguiente;//la lista cabeza sera la siguiente de la primera
        lista->longitud = lista->longitud-1;//la longuitud se reduce 1
    }
}

void imprimir(Lista *lista){//se pasa una lista
    Nodo *nodoActual;//se declara una variable aux nodoactual
    nodoActual = lista->cabeza;//nodo actual es la primera varible

    while(nodoActual != NULL){//si nodo actual es nula no hace nada
        cout << nodoActual->valor<< " ";//imprime el valor del nodo
        nodoActual = nodoActual->siguiente;//mi nodo actual ahora sera el siguinte
    }
    cout <<endl;
}






