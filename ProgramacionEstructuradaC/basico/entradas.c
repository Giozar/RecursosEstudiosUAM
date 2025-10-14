#include <stdio.h> 
 
int main( ) { 
   int suma = 0, n; 
   while (scanf("%d", &n) == 1) { 
      suma += n; 
   } 
 
   printf("%d", suma); 
   return 0; 
} 