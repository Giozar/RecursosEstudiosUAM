#include<stdio.h>
#include<string.h> //Biblioteca para las funciones de cadenas de caracteres.
#include<ctype.h>  //Biblioteca para la manipulación de carácter por carácter.

int main(){

	FILE* SALIDA = fopen("salida.txt","w");

    if(SALIDA==NULL){
		printf("EXISTE UN ERROR");
		return 1;
	} else{
	    int i, j;
	    for( i = 0; i < 10; i++){
            for( j = 0; j < 20; j++){
                fputc('p', SALIDA);
                fputc(' ', SALIDA);

            }
            fputc('\n', SALIDA);
	    }
	}
	fflush(SALIDA);
	fclose(SALIDA);

	printf("exito ");


	return 0;
}
