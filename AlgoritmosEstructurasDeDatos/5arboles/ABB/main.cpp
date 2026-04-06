#include <iostream>
#include <ctime>
#include <cstdlib>
#include "nodo.h"
#include "arbol.h"
using namespace std;

int main()
{
    //MANUEL GIOVANNI CORTAZAR DE LA CRUZ
    //2193001368
    //[PROGRAMA 8]: Arbol Binario de BUsqueda
    cout<<"[PROGRAMA 8]: Arbol Binario de BUsqueda"<<endl<<endl;
    cout<<"CORTAZAR DE LA CRUZ MANUEL GIOVANNI"<<endl;
    cout<<"Matricula 2193001368"<<endl<<endl;


    Arbol arbol;

    inicializar(&arbol);


    srand((unsigned)time(NULL));
    int n, num;

    //Genera 20 numeros aleatorios entre 1 y 20
    for (int i=0;i<20;i++){
        n=rand()%40+1;
        arbol.raiz = insertar(n,arbol.raiz);
        //cout << n << endl;
    }
    cout<<"Elementos insertados al arbol"<<endl;
//    arbol.raiz = insertar(20,arbol.raiz);
//    imprimirPreOrden(arbol.raiz);
//    cout<< endl;
//    arbol.raiz = insertar(10,arbol.raiz);
//    imprimirPreOrden(arbol.raiz);
//
//    cout<< endl;
//    arbol.raiz = insertar(25,arbol.raiz);
//    imprimirPreOrden(arbol.raiz);
//
//    cout<< endl;
//    arbol.raiz = insertar(5,arbol.raiz);
//    imprimirPreOrden(arbol.raiz);

//    cout<< endl;
//    arbol.raiz = insertar(2,arbol.raiz);
//    imprimirPreOrden(arbol.raiz);

    cout<< endl;
    arbol.raiz = insertar(10,arbol.raiz);
    cout<<"PreOrden:"<<endl;
    imprimirPreOrden(arbol.raiz);
    cout<< endl;
    cout<<"InOrden: "<<endl;
    imprimirInOrden(arbol.raiz);
    cout<< endl;
    cout<<"PostOrden: "<<endl;
    imprimirPostOrden(arbol.raiz);
    cout<< endl;
    cout<<"Buscar: "<<endl;
    cout<<"Ingresa un elemento a buscar"<<endl;
    cin>>num;
    while(num>=0){

        (buscar(num,arbol.raiz) == NULL ? cout<<"No existe ":cout<<"Si existe");
        cout<< endl;
        cout<<"Ingresa un elemento a buscar"<<endl;
        cin>>num;
    }

    cout<<"Eliminar elemento: "<<endl;
    cout<<"Ingresa un elemento a eliminar"<<endl;
    cin>>num;

    while(num>=0){
        borrar(num, arbol.raiz);
    cout<< endl;
    cout<<"InOrden: "<<endl;
    imprimirInOrden(arbol.raiz);
    cout<< endl;
    cout<<"Ingresa un elemento a eliminar"<<endl;
    cin>>num;
    }

    cout<<"Fin:"<<endl;


    return 0;
}
