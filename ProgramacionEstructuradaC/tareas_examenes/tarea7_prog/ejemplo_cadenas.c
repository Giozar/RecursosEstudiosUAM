#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main( ) {
   char cadena[100 + 1] = "Hey 1@2 #gatito#";
   int tam = strlen(cadena);

   printf("La cadena tiene longitud %d\n", tam);
   for (int i = 0; i < tam; ++i) {
      if (isalpha(cadena[i])) {
         printf("%c es letra ", cadena[i]);
         if (isupper(cadena[i])) {              // detectar si es mayúscula
            printf("mayuscula\n");
         } else if (islower(cadena[i])) {       // detectar si es minúscula (lo hago explícito para ver cómo se usa la función)
            printf("minuscula\n");
         }

         char mayus = toupper(cadena[i]);
         char minus = tolower(cadena[i]);
         printf("    Versiones de la letra: %c %c\n", mayus, minus);
      } else if (isdigit(cadena[i])) {
         printf("%c es digito\n", cadena[i]);
      } else if (isspace(cadena[i])) {
         printf("%c es espacio\n", cadena[i]);
      } else if (cadena[i] == '@') {
         printf("%c es arroba\n", cadena[i]);
      } else {
         printf("es otra cosa\n");
      }
   }
}
