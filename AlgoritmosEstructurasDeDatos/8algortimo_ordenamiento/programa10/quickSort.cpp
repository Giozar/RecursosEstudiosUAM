#include <iostream> //para cin y cout
#include <ctime>
#include <cstdlib> //para el rand()
#include <stdlib.h> //para el rand()

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

int main()
{
    srand((unsigned)time(NULL));
    int tam = 30;
    int A[tam];
    cout << "El array de valores es: " << endl;
    for (int i = 0; i < tam; i++)
    {
        A[i] = rand() % 15 + 1;
        cout << A[i] << " ";
    }
    cout << endl
        << "Y el array de valores ordenados es: " << endl;
    quickSort(A, 0, tam-1);

    for (int i = 0; i < tam; i++)
    {
        // A[i] = rand();   Comento esto para que solo lo muestre.
        cout << A[i] << " ";
    }
    return 0;
}