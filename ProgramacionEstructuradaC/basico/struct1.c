#include <stdio.h>

typedef struct
{
    char id[8 + 1];
    float promedio;
    int edad;
} usuario;

void intercambia(usuario *a, usuario *b)
{
    usuario c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int n;
    scanf("%d", &n);

    usuario arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%s%f%d", &arr[i].id[0], &arr[i].promedio, &arr[i].edad);
    }

    for (int k = 0; k < n - 1; ++k)
    {
        for (int i = 1; i < n; ++i)
        {
            if (arr[i - 1].edad > arr[i].edad)
            {
                intercambia(&arr[i - 1], &arr[i]);
            }
        }
    }

    int k;
    scanf("%d", &k);

    if (0 <= k && k < n)
    {
        printf("%s %.2f %d\n", arr[k].id, arr[k].promedio, arr[k].edad);
    }
    else
    {
        printf("ERROR\n");
    }
}