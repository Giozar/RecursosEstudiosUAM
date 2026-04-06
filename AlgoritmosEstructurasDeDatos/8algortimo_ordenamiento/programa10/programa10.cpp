#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
//------------PROGRAMA 10: Algoritmos de ordenamiento----------------
//----------CORTAZAR DE LA CRUZ MANUEL GIOVANNI 2193001368----------
using namespace std;
void quickSort(int *A, int izq, int der)
{
    int pivote = A[izq];
    int i = izq;
    int j = der;
    int aux;

    while (i < j)
    {
        while (A[i] <= pivote && i < j)
            i++;
        while (A[j] > pivote)
            j--;
        if (i < j)
        {
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }

    A[izq] = A[j];
    A[j] = pivote;
    if (izq < j - 1)
        quickSort(A, izq, j - 1);
    if (j + 1 < der)
        quickSort(A, j + 1, der);
}

void ordenaCombina( int *a, int *b){

    int resultado [60];
    int posA = 0,
    posB = 0,
    posRes = 0;

    while (posA < 30 && posB < 30)
    {
        if (a[posA] < b[posB])
        {
            resultado[posRes] = a[posA];
            posRes++;
            posA++;
        }
        else
        {
            resultado[posRes] = b[posB];
            posRes++;
            posB++;
        }
    }
    while (posA < 30)
    {
        resultado[posRes] = a[posA];
        posRes++;
        posA++;
    }
    
    while (posB < 30)
    {
        resultado[posRes] = b[posB];
        posRes++;
        posB++;
    }
    
    for (int i = 0; i < 60; i++)
    {
            cout<<resultado[i]<<" ";
    }
    

}

int main(){
    srand((unsigned)time(NULL));
    int tam = 30;
    int A[tam];
    int B[tam];
    cout << "------------PROGRAMA 10: Algoritmos de ordenamiento----------------" << endl;
    cout << "----------CORTAZAR DE LA CRUZ MANUEL GIOVANNI 2193001368----------" << endl;
    cout << "Arreglo 1: " << endl;
    for (int i = 0; i < tam; i++)
    {
        A[i] = rand() % 15 + 1;
        cout << A[i] << " ";
    }
    cout<<endl;
    cout<<endl;
    cout << "Arreglo 2: " << endl;
    for (int i = 0; i < tam; i++)
    {
        B[i] = rand() % 15 + 1;
        cout << B[i] << " ";
    }
    cout<<endl;
    cout<<endl;
    cout<< "Arreglo 1 ordenado (algoritmo de Quicksort ): " << endl;
    quickSort(A, 0, tam-1);

    for (int i = 0; i < tam; i++)
    {
        cout << A[i] << " ";
    }
    cout<<endl;
    cout<<endl;
    cout<< "Arreglo 2 ordenado (algoritmo de Quicksort ): " << endl;
    quickSort(B, 0, tam-1);

    for (int i = 0; i < tam; i++)
    {
        cout << B[i] << " ";
    }
    cout<<endl;
    cout<<endl;
    cout << "Arreglo 3 (algoritmo de Merge sort): " << endl;
    ordenaCombina(A,B);
return 0;
}