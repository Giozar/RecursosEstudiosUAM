#include <stdio.h> 
#include <string.h> 
 
int main( ) { 
   char cadena[10 + 1]; 
   scanf("%s", &cadena[0]); 
 
   int tam = strlen(cadena); 
   //imprime tamaño de la cadena
   printf("La cadena es de tamaño %d\n", tam);
   //imprime la cadena total
   printf("%s\n", cadena); 
   //imprime la cdena caracter por caracter
   for (int i = 0; i < tam; ++i) { 
      printf("%c", cadena[i]); 
   } 
   printf("\n"); 
   //imprime la cadena pero el entero asociado al simbolo(al caracter)
   for (int i = 0; i < tam; ++i) { 
      printf("%hhd ", cadena[i]); 
   } 
   printf("\n"); 
   //imprime la cadena pero el entero asociado al simbolo(al caracter) pero imprime todo el arreglo hasta la basura
   for (int i = 0; i < 10 + 1; ++i) { 
      printf("%hhd ", cadena[i]); 
   } 
   printf("\n");
   
   return 0;
}