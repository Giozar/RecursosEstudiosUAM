#include<stdio.h>
#include<string.h> //Biblioteca para las funciones de cadenas de caracteres.
#include<ctype.h>  //Biblioteca para la manipulaci�n de car�cter por car�cter.

int main(){

	FILE* ENTRADA=fopen("entrada.txt","r");

	FILE* SALIDA=fopen("salida.txt","w");

	char cad[81]; //Nos pide una longitud de 80 pero le sumamos 1 por el caracter nulo.
	char cad2[81];
	int N,i,lon;  //Iterador para poder recorrer nuestro ciclo.

    if(ENTRADA==NULL){
		printf("EXISTE UN ERROR");
	}else{
    fscanf(ENTRADA,"%d \n %s \n %s",&N,cad,cad2);
	lon=strlen(cad);

		for(i=0; i<lon; i++){
            if(isalpha(cad[i])){
                if(cad[i]=='b')
               cad[i]=100;
            else if (cad[i]=='p')
               cad[i]=113;
            else if (cad[i]=='S')
               cad[i]=90;
            else if (cad[i]=='s')
               cad[i]=122;
            else if (cad[i]=='d')
               cad[i]=98;
            else if (cad[i]=='q')
               cad[i]=112;
            else if (cad[i]=='Z')
               cad[i]=83;
            else if (cad[i]=='z')
               cad[i]=115;
            else if (cad[i]=='A')
               cad[i]=65;
            else if (cad[i]=='H')
               cad[i]=72;
            else if (cad[i]=='I')
               cad[i]=73;
            else if (cad[i]=='i')
               cad[i]=105;
            else if (cad[i]=='l')
               cad[i]=108;
            else if (cad[i]=='M')
               cad[i]=77;
            else if (cad[i]=='m')
               cad[i]=109;
            else if (cad[i]=='O')
               cad[i]=79;
            else if (cad[i]=='o')
               cad[i]=111;
            else if (cad[i]=='T')
               cad[i]=84;
            else if (cad[i]=='t')
               cad[i]=116;
            else if (cad[i]=='U')
               cad[i]=85;
            else if (cad[i]=='u')
               cad[i]=117;
            else if (cad[i]=='V')
               cad[i]=86;
            else if (cad[i]=='v')
               cad[i]=118;
            else if (cad[i]=='W')
               cad[i]=87;
            else if (cad[i]=='w')
               cad[i]=119;
            else if (cad[i]=='X')
               cad[i]=88;
            else if (cad[i]=='x')
               cad[i]=120;
            else if (cad[i]=='Y')
               cad[i]=89;
            else if (cad[i]=='n')
               cad[i]=110;
            else
                cad[i]=42;
            }
    	}
    	lon=strlen(cad2);
    	for(i=0; i<lon; i++){
            if(isalpha(cad2[i])){
                if(cad2[i]=='b')
               cad2[i]=100;
            else if (cad2[i]=='p')
               cad2[i]=113;
            else if (cad2[i]=='S')
               cad2[i]=90;
            else if (cad2[i]=='s')
               cad[i]=122;
            else if (cad2[i]=='d')
               cad[i]=98;
            else if (cad2[i]=='q')
               cad[i]=112;
            else if (cad2[i]=='Z')
               cad[i]=83;
            else if (cad2[i]=='z')
               cad[i]=115;
            else if (cad2[i]=='A')
               cad[i]=65;
            else if (cad2[i]=='H')
               cad[i]=72;
            else if (cad2[i]=='I')
               cad[i]=73;
            else if (cad2[i]=='i')
               cad[i]=105;
            else if (cad2[i]=='l')
               cad[i]=108;
            else if (cad2[i]=='M')
               cad[i]=77;
            else if (cad2[i]=='m')
               cad[i]=109;
            else if (cad2[i]=='O')
               cad[i]=79;
            else if (cad2[i]=='o')
               cad[i]=111;
            else if (cad2[i]=='T')
               cad[i]=84;
            else if (cad2[i]=='t')
               cad[i]=116;
            else if (cad2[i]=='U')
               cad[i]=85;
            else if (cad2[i]=='u')
               cad[i]=117;
            else if (cad2[i]=='V')
               cad[i]=86;
            else if (cad2[i]=='v')
               cad[i]=118;
            else if (cad2[i]=='W')
               cad[i]=87;
            else if (cad2[i]=='w')
               cad[i]=119;
            else if (cad2[i]=='X')
               cad[i]=88;
            else if (cad2[i]=='x')
               cad[i]=120;
            else if (cad2[i]=='Y')
               cad[i]=89;
            else if (cad2[i]=='n')
               cad[i]=110;
            else
                cad2[i]=42;
            }
    	}
    	fprintf(SALIDA,"%s \n %s",strrev(cad),strrev(cad2)); // Strrev nos ayudara a imprimir la cadena invertida.
		printf("YA QUEDO TU ARCHIVO");

		fclose(ENTRADA);
		fclose(SALIDA);
	}
	return 0;
}
