#include <stdio.h>    
#include <string.h>   // strlen, strcpy, strcat, strcmp
 
int main( ) { 
   char arreglo1[100 + 1]; 
   char arreglo2[100 + 1] = "perrito"; 
   strcpy(arreglo1, arreglo2); 
   printf("%s\n", arreglo1); 
 
   char cadena1[100 + 1] = "perrito"; 
   char cadena2[100 + 1] = "gatito"; 
   strcat(cadena1, cadena2); 
   printf("%s\n", cadena1); 
 
   printf("%d\n", strcmp("perrito", "perrito")); 
   printf("%d\n", strcmp("arbol", "casa")); 
   printf("%d\n", strcmp("monje", "gato")); 
 
   return 0; 
}