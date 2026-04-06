//MANUEL GIOVANNI CORTAZAR DE LA CRUZ
//Matricula: 2193001368
#include <iostream>
using namespace std;
int main()
{
    //variable, tamaños de elementos
    int n, suma = 0, sumb = 0, sumc = 0, p = 0, im = 0;
    do
    {
        cout << "Ingrese la cantidad(enteros) de elementos que tendran los arreglo (cantidad maxima son 20 elementos)" << endl;
        cin >> n;

    } while ((n < 0) || (n > 20));
    //declaracion de los arreglos
    int a[n];
    int b[n];
    int c[n];
    //tamaño de arreglo

    //entrada de datos a
    cout << "Agregue los elementos del arreglo A" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //relleno de arreglos b y c

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] * 10;
        c[i] = a[i] + b[i];
    }

    //imprimir datos solicitados
    cout << "El contenido del arreglo A:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        suma += a[i];
    }
    cout << endl;

    cout << "El contenido del arreglo B:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
        sumb += b[i];
    }
    cout << endl;

    cout << "El contenido del arreglo C:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
        sumc += c[i];
    }
    cout << endl;

    cout << "La cantidad de numeros pares que hay en el arreglo A:" << endl;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] % 2) == 0)
        {
            p++;
            //cout << a[i] << " ";
        }
    }
    cout << p << endl;

    cout << "La cantidad de numeros impares que hay en el arreglo B:" << endl;
    for (int i = 0; i < n; i++)
    {
        if ((b[i] % 2) != 0)
        {
            im++;
            //cout << b[i] << " ";
        }
    }
    cout << im << endl;
    cout << "La sumatoria de los elementos del arreglo A:   " << suma << endl;
    cout << "La sumatoria de los elementos del arreglo B:   " << sumb << endl;
    cout << "La sumatoria de los elementos del arreglo C:   " << sumc << endl;

    return 0;
}
