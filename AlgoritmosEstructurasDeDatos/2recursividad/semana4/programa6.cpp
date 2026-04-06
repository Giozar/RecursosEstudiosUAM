#include <iostream>
using namespace std;

void recorrerRecursivo(int[], int, int);
void invertidoRecursivo(int[], int, int);
double sumaElementos(int[], int, int);
void buscarRecursivo(int[], int, int, int);

int main()
{
    int n;
    int res;
    int buscar;
    cout << "------------PROGRAMA 6 ARRREGLOS Y RECURSIVIDAD----------------" << endl;
    cout << "----------CORTAZAR DE LA CRUZ MANUEL GIOVANNI 2193001368----------" << endl<<endl;
    cout << "Ingrese la cantidad de elementos para el arreglo (maximo 20 elementos)" << endl;
    cin >> n;
    int arreglo[n];

    for (int i = 0; i < n; i++)
    {
        //genera los elementos aleatorios
        //%(hasta-desde+1)+desde;
        arreglo[i] = rand() % (100 - 10 + 1) + 10;
    }
    int posicionFinal = n;
    int posicion = 0;
    cout << "Arreglo original:" << endl;
    recorrerRecursivo(arreglo, posicion, posicionFinal); //se crea la funcion
    cout << endl;
    cout << "Arreglo invertido:" << endl;
    invertidoRecursivo(arreglo, n - 1, posicion); //funcion inversa
    cout << endl;
    cout << "Suma de los elementos: " << endl;
    res = sumaElementos(arreglo, posicion, n); //sumatoria de elementos
    cout << res << endl;
    cout << "Existencia de un entero:" << endl;
    cout << "ingrese un entero a buscar" << endl;
    cin >> buscar;
    buscarRecursivo(arreglo, posicion, posicionFinal, buscar); //buscar elemento
    cout << endl;

    return 0;
}
void recorrerRecursivo(int arreglo[], int posicion, int posFinal)
{ //lo que hace la funcion
    if (posFinal <= 0)
    {
        cout << "no hay elementos";
    }
    else
    {
        if (posicion == posFinal - 1)
        {
            cout << arreglo[posicion] << " ";
        }
        else
        {
            cout << arreglo[posicion] << " ";
            recorrerRecursivo(arreglo, posicion + 1, posFinal);
        }
    }
}

void invertidoRecursivo(int arreglo[], int pos, int posInicial)
{
    if (pos < 0)
    {
        cout << "no hay elementos";
    }
    else
    {
        if (pos == posInicial)
        {
            cout << arreglo[pos] << " ";
        }
        else
        {
            cout << arreglo[pos] << " ";
            invertidoRecursivo(arreglo, pos - 1, posInicial);
        }
    }
}

double sumaElementos(int arreglo[], int posicion, int posFinal)
{ //lo que hace la funcion
    if (posFinal - 1 < 0)
    {
        cout << "no hay elementos ";
        return 0;
    }
    if (posicion == posFinal - 1)
    {
        return arreglo[posicion];
    }
    else
    {
        return arreglo[posicion] + sumaElementos(arreglo, posicion + 1, posFinal);
    }
}

void buscarRecursivo(int arreglo[], int posicion, int posFinal, int buscar)
{ //lo que hace la funcion
    if (posFinal <= 0)
    {
        cout << "no hay elementos para buscar";
    }
    else
    {
        if (posicion == posFinal - 1)
        {
            if (arreglo[posicion] == buscar)
            {
                cout << "el entero " << arreglo[posicion] << " existe en la posicion " << posicion + 1;
            }
            else
            {
                cout << "el entero no existe ";
            }
        }
        else
        {
            if (arreglo[posicion] == buscar)
            {
                cout << "el entero " << arreglo[posicion] << " existe en la posicion " << posicion + 1;
            }
            else
                buscarRecursivo(arreglo, posicion + 1, posFinal, buscar);
        }
    }
}