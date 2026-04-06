#include <iostream>
#include "nodo.h"
#include "arbol.h"
using namespace std;

void inicializar(Arbol *arbol){
    arbol->raiz = NULL;
}

int esVacio(Arbol *arbol){
    if(arbol->raiz == NULL){
        return 1;
    }else{
        return 0;
    }
}

Nodo *insertar(int dato, Nodo *nodo){
    if(nodo == NULL){
        Nodo *nuevoNodo = new Nodo();
        nuevoNodo->valor = dato;
        nodo = nuevoNodo;
    }else if(dato < nodo->valor){
        nodo->izquierda = insertar(dato, nodo->izquierda);
    }else if(dato > nodo->valor){
        nodo->derecha = insertar(dato, nodo->derecha);
    }else{
        cout<<"El elemento ya se encuentra"<<endl;
    }
    return nodo;
}

void imprimirPreOrden(Nodo *nodo){
    if(nodo != NULL){
        cout<< nodo->valor <<" ";
        imprimirPreOrden(nodo->izquierda);
        imprimirPreOrden(nodo->derecha);
    }
}

void imprimirInOrden(Nodo *nodo){
    if(nodo != NULL){
            imprimirInOrden(nodo->izquierda);
            cout<< nodo->valor<<" ";
            imprimirInOrden(nodo->derecha);
    }
}
void imprimirPostOrden(Nodo *nodo){
    if(nodo != NULL){
            imprimirPostOrden(nodo->izquierda);
            imprimirPostOrden(nodo->derecha);
            cout<< nodo->valor<<" ";
    }
}

Nodo *buscar(int buscado, Nodo *nodo){
    if(nodo == NULL){
        return NULL;
    }else if(buscado < nodo->valor){
        return buscar(buscado, nodo->izquierda);
    }else if(buscado > nodo->valor){
        return buscar(buscado, nodo->derecha);
    }else{
        return nodo;
    }
}

Nodo *borrar(int datoBorrar, Nodo *nodo){
    if(nodo == NULL){
        cout<<"el elemento no encuentra"<<endl;
        return nodo;
    }else if(datoBorrar < nodo->valor){
        nodo->izquierda = borrar(datoBorrar, nodo->izquierda);
    }else if(datoBorrar > nodo->valor){
        nodo->derecha = borrar(datoBorrar, nodo->derecha);
    }else if(nodo->izquierda == NULL && nodo->derecha == NULL){
        nodo = NULL;
    }
    else if(nodo->izquierda != NULL && nodo->derecha != NULL){
            //Utilizando menor de mayores
            nodo->valor = buscarMinimo(nodo->derecha)->valor;
            nodo->derecha = borrar(nodo->valor, nodo->derecha);
            //utilizando mayor de menores
            nodo->valor = buscarMaximo(nodo->izquierda)->valor;
            nodo->izquierda = borrar(nodo->valor,nodo->izquierda);
    }
    else{
        if(nodo->izquierda != NULL){
            nodo = nodo->izquierda;
        }
        if(nodo->derecha != NULL){
            nodo = nodo->derecha;
        }
    }
    return nodo;
}

Nodo *buscarMinimo(Nodo *nodo){
    if(nodo == NULL){
        return NULL;
    }else if(nodo->izquierda == NULL){
        return nodo;
    }
    return buscarMinimo(nodo->izquierda);
}

Nodo *buscarMaximo(Nodo *nodo){
    if(nodo == NULL){
        return NULL;
    }else if(nodo->derecha == NULL){
        return nodo;
    }
    return buscarMaximo(nodo->derecha);
}
