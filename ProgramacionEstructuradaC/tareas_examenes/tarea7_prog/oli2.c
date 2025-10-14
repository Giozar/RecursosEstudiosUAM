#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int punt = 0;
    //tamaño del arreglo
    char n[50 + 1];
    //leer cadena
    scanf("%[^\n]", &n[0]);
    //tamaño de cadena
    int tam = strlen(n);

    //imprime la cadena caracter por caracter
    for (int i = 0; i < tam; ++i)
    {
            printf("%c",n[i]);
            if (n[i] == 58)
            {
                printf("\"");
                punt = 1;
            }
    }
    if (punt == 1)
    {
        printf("\"");
    }
    

    return 0;
}