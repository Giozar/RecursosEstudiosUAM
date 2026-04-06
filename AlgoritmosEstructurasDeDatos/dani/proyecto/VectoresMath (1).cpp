#include<iostream>
#include <locale.h>
#include <cmath>
#include <stdio.h>
#include "Biblioteca.h"

using namespace std;

double sumarorestar(double matrizcuentas[100][100], double sor, int f, int c){
	double inicio;
	
	if(sor==2){
	cout<<endl<<"La resultante de los vectores obtenida de la suma es:"<<endl;
	cout<<"(";
		for (int columna=0;columna<c;++columna){
			inicio=0;
			for(int fila=0;fila<f;fila++){
				inicio=inicio+matrizcuentas[fila][columna];
			}
			cout<<inicio;
			if (columna!=c-1)
				cout<<", ";
		}
		cout<<")";
	}
	else if(sor==3){
	cout<<endl<<"La resultante de los vectores obtenida de la resta es:"<<endl;
	cout<<"(";
		for (int columna=0;columna<c;++columna){
			inicio=matrizcuentas[0][columna];
			for(int fila=0;fila<f;fila++){
				inicio=inicio-matrizcuentas[fila+1][columna];
			}
			cout<<inicio;
			if (columna!=c-1)
				cout<<", ";
		}
		cout<<")";
	}
	pregunta();		
}

double productoescalar(double matrizcuentas[100][100], int f, int c){
	double vector[c];
	int i, j, respuesta,respuesta2,N=0;
	double inicio;
		cout<<endl<<"El producto punto de los vectores es: "<<endl;
		for (int columna=0;columna<c;++columna){
			inicio=1;
			for(int fila=0;fila<f;fila++){
				inicio=inicio*matrizcuentas[fila][columna];
			}
			vector[columna]=inicio;
		}
		inicio=0;
		for (int i=0;i<c;++i){
			inicio=inicio+vector[i];
		}
		cout<<inicio;
	
	pregunta();				
}

int magnitud(double matrizcuentas[100][100], int f, int c){
	int respuesta, respuesta2, N=0;
	double inicio=0;
	
	for (int fila=0;fila<f;++fila){
        for(int columna=0;columna<c;columna++){
			inicio=inicio+(matrizcuentas[fila][columna]*matrizcuentas[fila][columna]);
		}
		cout<<endl<<"La magnitud del vector "<<fila+1<<" es: "<<sqrt(inicio)<<endl;
		inicio=0;
	}
	pregunta();		
}

