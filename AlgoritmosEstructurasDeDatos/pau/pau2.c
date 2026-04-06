#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int esp = 0;
    int v =0,c =0;
    //tamaño del arreglo
    char n[50 + 1];
    //leer cadena
    scanf("%[^\n]", &n[0]);
    //tamaño de cadena
    int tam = strlen(n);

    //recorres palabra
    for (int i = 0; i < tam; ++i)
    {
        //si son letras
        if (isalpha(n[i]))
        {   //sin son vocales
            if(n[i] == 65 || n[i] == 97 || n[i] == 69 || n[i] == 101||n[i] == 73 || n[i] == 105 ||n[i] == 79 || n[i] == 111||n[i] == 85 || n[i] == 117){
                v++;
            }else{//si no son vocales
                c++;
            }
        }
    }


    printf("vocal: %d Consonante %d",v, c);
    return 0;
}
