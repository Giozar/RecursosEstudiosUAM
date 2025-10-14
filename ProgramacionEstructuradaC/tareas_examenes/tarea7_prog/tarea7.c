#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int esp = 0;
    //tamaño del arreglo
    char n[50 + 1];
    //leer cadena
    scanf("%[^\n]", &n[0]);
    //tamaño de cadena
    int tam = strlen(n);

    //hace los cambios
    for (int i = 0; i < tam; ++i)
    {
        if (isalpha(n[i]))
        {
            //minuscula a mayuscula
            if (n[i] == tolower(n[i]))
            {
                n[i] = toupper(n[i]);
            }
            else
            {
                n[i] = tolower(n[i]);
            }
        }
        else if (isspace(n[i]))
        {
            esp++;
        }
        else if (isdigit(n[i]))
        {
            if (n[i] != 57)
            {
                n[i]++;
            }
        }
    }

    printf("%d %d\n%s\n", tam, esp, n);
    return 0;
}