#include <ctype.h> 
#include <stdio.h> // :)
 
int main( ) { 
   char n; 
   scanf("%c", &n); 
   // char m = '@';
 
   if (isalpha(n)) { 
      printf("%hhd asociado con letra (%c)\n", n, n); 
      printf("version mayuscula: %c\n", toupper(n)); 
      printf("version minuscula: %c\n", tolower(n)); 
   } else if (isdigit(n)) { 
      printf("%hhd asociado con digito (%c)\n", n, n); 
   } else if (isspace(n)) { 
      printf("%hhd asociado con espacio (%c)\n", n, n); 
   } else if (ispunct(n)) { 
      printf("%hhd asociado con puntuacion (%c)\n", n, n); 
   } 
 
   return 0; 
} 