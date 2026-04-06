#include <iostream>
using namespace std;

void shell(int array[], int size)

{
    int i, j, intervalo, temp;

    intervalo = size / 2;

    while (intervalo > 0)
    {

        for (i = intervalo; i < size; i++)
        {
            j = i;
            temp = array[i];
            while ((j >= intervalo) && (array[j - intervalo] > temp))
            {
                array[j] = array[j - intervalo];
                j = j - intervalo;
            }
            array[j] = temp;
        }
        intervalo /= 2;
    }
}

int main(int argc, char *const argv[])
{
    int numeros[] = {45, 27, 53, 17, 73, 56, 49, 19, 31, 34, 75, 45, 67, 21, 34, 12};
    /* Se muestra el arreglo original */
    for (int i = 0; i < 16; ++i)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
    shell(numeros, 16);

    /* Se muestra el arreglo ordenado */
    for (int i = 0; i < 16; ++i)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
}
