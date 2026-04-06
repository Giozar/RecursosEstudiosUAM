#include <iostream>
using namespace std;

void recorrerRecursivo(int [], int, int);

int main(){
    int arreglo [10] = {1,2,3,4,5,6,7,8,9,10};
    int posicionFinal = 10;
    int posicion = 0;
    recorrerRecursivo(arreglo,posicion,posicionFinal);//se crea la funcion
    return 0;
}

void recorrerRecursivo(int arreglo[], int posicion, int posFinal){//lo que hace la funcion
            if (posicion == posFinal-1)
            {
                cout << arreglo[posicion] <<" ";
            }else
            {
                cout <<arreglo[posicion] <<" ";
                recorrerRecursivo(arreglo, posicion + 1,posFinal);
            }
        }