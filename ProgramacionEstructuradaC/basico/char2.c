#include <stdio.h> 
#include <string.h>   // para poder usar strlen 
//imprimir liena por linea sin tomar en cuenta los saltos en linea
 
int main( ) { 
   char cadena[1000 + 1]; 
   scanf("%[^\n]", &cadena[0]); 
   printf("%s\n", cadena); 
 
   return 0; 
}