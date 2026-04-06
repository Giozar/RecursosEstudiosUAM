#include <ctime>
#include <iostream>
#include <cstdlib>
#include "lista.h"
#include "lista2.h"
#include "nodo.h"
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    Lista lista;
    Lista2 lista2;
    inicializarLista(&lista);
    inicializarCola(&lista2);

    int n;
    cout << "------------PROGRAMA 7 Pilas y Colas----------------" << endl;
    cout << "----------CORTAZAR DE LA CRUZ MANUEL GIOVANNI 2193001368----------" << endl;
    cout << "generar 50 numeros aleatorios que estaran entre 1 y 20" << endl;
    cout << "pila almacena numeros que son PARES, cola se almacena numeros NONES" << endl;
    cout<<endl;


    //se agregan los elementos
    for (int i = 0; i < 50; i++)
    {
        //genera los elementos aleatorios entre 1 y 20
        n = rand()%20+1;
        if((n%2)==0){
            insertarPila(&lista,n);
        }else{
            insertarCola(&lista2,n);
        }
    }

    cout<<endl;

//    if(esVacia(&lista)) {
//        cout <<"la pila esta vacia"<<endl;
//    }else{
//        cout <<"la pila tiene elementos"<<endl;
//    }
//    insertarPila(&lista, 1);
    cout<<"salida de los elementos de la PILA en el siguiente orden:"<<endl;
    imprimir(&lista);


//    if(esVacia2(&lista2)) {
//        cout <<"la cola esta vacia"<<endl;
//    }else{
//        cout <<"la cola tiene elementos"<<endl;
//    }
//    insertarCola(&lista2,1);

    cout<<endl;
    cout<<"Salida de los elementos de la COLA en el siguiente orden:"<<endl;
    while(lista2.frente != NULL){
        cout<<lista2.frente->valor<<" ";
        eliminarCola(&lista2);

//        if(lista2.frente != NULL){
//            cout<<lista2.frente->valor<<endl;
//        }else{
//            cout<<lista2.fin->valor<<endl;
//        }
    }

    cout<<endl;
    return 0;
}
