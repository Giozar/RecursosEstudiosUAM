#include<iostream>
#include <locale.h>
#include <cmath>
#include <stdio.h>

#include "Biblioteca.h"

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	double matrizcuentas[100][100];
	int opcion,opcion2, f, c, paso, G;
	
	paso=proceso(paso);
	
	if(paso==2)
	opcion=1;
	else if (paso==3){
	opcion=0;
	G=99;
	}
	else 
	opcion=menu();
	
	while (G!=99 or opcion==1){
		G=EscribirVectores();
		opcion=0;
	}

	if(paso!=3)
	llamatriz(matrizcuentas);
	
	opcion2=mandaopcion2();
	
	f=mandaf();
	c=mandac();
	
	while(opcion2==2 or opcion2==3 or opcion2==4 or opcion2==5 or opcion2==6){

	opcion2=mandaopcion2();
	
	if(opcion2==2 or opcion2==3){
		sumarorestar(matrizcuentas,opcion2, f, c);
	}
	
	if(opcion2==4){
		productoescalar(matrizcuentas, f, c);
	}
	
	if(opcion2==5){
		magnitud(matrizcuentas, f, c);
	}
	
	}
	
	return 0;
	
} 




