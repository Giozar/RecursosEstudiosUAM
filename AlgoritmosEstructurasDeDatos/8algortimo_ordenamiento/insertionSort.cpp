#include <iostream>
using namespace std;

int main(){
    int numero[] = {4,2,3,1,5}; //arreglo a ordenar
    int i,pos,aux;  //variables iniciales
    for (i = 0; i < 5; i++)// inicio de ciclo
    {
        pos = i; //posicion actual
        aux = numero[i]; //valor actual del arreglo

        while ( (pos>0) && (numero[pos-1]) > aux)  //mientras pos > 0 y el valor a la izquierda es mayor al actual
        {
            numero[pos] = numero[pos-1]; //se realiza el cambio de elementos

            pos--;  // se reduce una posicion
        }
        numero[pos] = aux;  //el valor actual es igual a valor actual  
    }
        //se imprime el arreglo
        cout<<"orden: "<<endl;
        for (i = 0; i < 5; i++)
        {
                cout<<numero[i]<<endl;
        }
return 0;
}