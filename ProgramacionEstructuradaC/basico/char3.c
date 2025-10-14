#include <stdio.h>    // getchar
#include <string.h>   // para poder usar strlen 
 
int main( ) { 
   char cadena1[1000 + 1]; 
   scanf("%[^\n]", &cadena1[0]); 
 
   int c = getchar( );
 
   char cadena2[1000 + 1]; 
   scanf("%[^\n]", &cadena2[0]); 
 
   printf("%s\n", cadena1); 
   printf("%s\n", cadena2); 
 
   return 0; 
}