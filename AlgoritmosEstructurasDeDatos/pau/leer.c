#include<stdio.h>
#include<string.h> //Biblioteca para las funciones de cadenas de caracteres.
#include<ctype.h>  //Biblioteca para la manipulación de carácter por carácter.

int main(){

	FILE* ENTRADA = fopen("entrada.txt","rb");

    if(ENTRADA==NULL){
		printf("EXISTE UN ERROR");
		return 1;
	}

	fseek(ENTRADA, 0, SEEK_END);
	int num_elementos = ftell(ENTRADA);
	rewind(ENTRADA);

	char * cad =(char *)calloc(sizeof(char), num_elementos);
	if(cad == NULL){
        perror("error en memoria");
        return 2;
	}
	int num_elementos_leidos = fread(cad, sizeof(char),num_elementos, ENTRADA);
    if(num_elementos_leidos != num_elementos){
        perror("error al leer");
        return 3;
    }

    printf("%s", cad);

    free(cad);

	fclose(ENTRADA);
	return 0;
}
