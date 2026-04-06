#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib> //para el rand()
using namespace std;

void merge(int *Ar, int p, int q, int r)
{
    // Declaracion de variables
    int i, j, k;
    int n_1 = (q - p) + 1;
    int n_2 = (r - q);
    int *L, *R;

    // Asignacion de memoria
    L = (int*)malloc(n_1 * sizeof(int));
    R = (int*)malloc(n_2 * sizeof(int));

    // Copia de datos del arreglo A en los subarreglos L y R
    for (i = 0; i < n_1; i++)
    {
        L[i] = *(Ar + p + i);
    }

    for (j = 0; j < n_2; j++)
    {
        R[j] = *(Ar + q + j + 1);
    }

    i = 0;
    j = 0;

    // Fusion de datos respetando el valor minimos entre dos arreglos
    for (k = p; k < r + 1; k++)
    {
        if (i == n_1)
        {
            *(Ar + k) = *(R + j);
            j =  j+ 1;
        }
        else if(j == n_2)
        {
            *(Ar + k) = *(L + i);
            i = i + 1;
        }
        else
        {
            if (*(L + i) <= *(R + j))
            {
                *(Ar + k) = *(L + i);
                i = i + 1;
            }
            else
            {
                *(Ar + k) = *(R + j);
                j = j + 1;
            }
        }
    }
}

void merge_sort(int *Ar, int p, int r)
{
    if (p < r)
    {
        // Dividir el problema en subproblemas
        int q = (p + r)/2;
        
        // Resolver el problema de manera recursiva hasta llegar a una solucion trivial
        merge_sort(Ar, p, q);
        merge_sort(Ar, q + 1, r);
        
        // Fusion de resultados parciales
        merge(Ar, p, q, r);
    }
}

void unir(int *A, int *B, int *C, int n){
    int p = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        if(i < (n/2)){
            C[i] = A[i];
        }else
        {
            C[i] = B[j];
            j++;
        }
            cout<<C[i]<<" "; 
    }
    merge_sort(C, p, n);
    for (int i = 1; i < n + 1; i++)
    {
        printf("%i ", *(C+i));
    } 
}

int main()
{
    srand((unsigned)time(NULL));
    int tam = 10;
    int A[tam];
    int B[tam];
    cout << "El arreglo A de valores es: " << endl;
    for (int i = 0; i < tam; i++)
    {
        A[i] = rand() % 15 + 1;
        cout << A[i] << " ";
    }
    cout<<endl;

    cout << "El arreglo B de valores es: " << endl;
    for (int i = 0; i < tam; i++)
    {
        B[i] = rand() % 15 + 1;
        cout << B[i] << " ";
    }
    cout<<endl;

    cout << "El arreglo Merge: " << endl;
    int ntam = tam + tam;
    int C[ntam];

    unir(A,B,C,ntam);
    
    return 0;
}