#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i=0;
    //Declaramos la cadena destino
    char cadena[30]="";
    //Y las cadenas origen
    char palabra[10];

    printf("cantidad de palabras\n");
    scanf("%d",&n);

    while(i<n){
        printf("ingresa palabra\n");
        scanf("%s",&palabra);
        strcat(cadena, palabra);
        strcat(cadena, "\n");
        i++;
    }

    printf("%s",cadena);

    return 0;
}
