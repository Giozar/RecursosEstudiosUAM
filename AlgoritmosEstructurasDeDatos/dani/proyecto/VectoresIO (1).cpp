#include<iostream>
#include <locale.h>
#include <stdio.h>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "Biblioteca.h"

using namespace std;
double opcion, opcion2;
int f, c, r;
double matriz[100][100];
void escribir();
void lectura();
int EscribirV();

int menu(){
	setlocale(LC_ALL, "");
	
	cout<<endl<<"Elige una de las siguientes opciones: "<<endl;
	cout<<endl;
	cout<<"1.- Escribir vectores."<<endl;
	cout<<"2.- Leer vectores. "<<endl;
	cout<<"3.- Sumar vectores."<<endl;
	cout<<"4.- Restar vectores."<<endl;
	cout<<"5.- Producto escalar."<<endl;
	cout<<"6.- Magnitud vectores."<<endl;
	cin>>opcion;

	if(opcion==1 or opcion==2 or opcion==3 or opcion==4 or opcion==5 or opcion==6)
		return opcion;
		else{
			cout<<endl<<"La opción que ingresaste no es válida."<<endl;
			return menu();
		}
}

int EscribirVectores(){
	setlocale(LC_ALL, "");

	if(opcion==1){
	cout<<endl<<"Antes de continuar, ¿quiere que sus vectores sean guardados? 1 para sí 2 para no: "<<endl;
	cin>>r;
	switch(r){
	
		case (1):
			escribir();
		case (2):
			EscribirV();
		default:
			cout<<"Opción no válida.";
			break;
		
		}
	}
}

void LeerVectores(){
    string texto, nombreArchivo, nomAux,
        extencion;
    int op, n, m, N;
    cout << "ingrese la cantidad de archivos que quiere abrir" << endl;
    cin >> N;
    cout << "digite el nombre del archivo que quiere abrir" << endl;
    cin >> nombreArchivo;
    nomAux = nombreArchivo;
    cout << "que extencion tiene el archivo a abrir?? \n1.txt  || 2.dat " << endl;
    cin >> op;

    while (op >= 3 || op <= 0)
    {
        cout << "presione una de las opciones" << endl;
        cin >> op;
    }

    if (op == 1)
    {
        extencion = ".txt";
    }
    else if (op == 2)
    {
        extencion = ".dat";
    }

    cout << "ingrese el numero de filas" << endl;
    cin >> n;

    cout << "ingrese el numero de columnas" << endl;
    cin >> m;

    int matriz[n][m], cont = 1;
    string num;

    while (cont <= N)
    {

        ifstream archivo;
        nombreArchivo = nomAux;
        num = std::to_string(cont);
        nombreArchivo += num + extencion;
        archivo.open(nombreArchivo.c_str(), ios::in); //abrimos archivo
        if (archivo.fail())
        {
            cout << "no se pudo abrir";
            exit(1);
        }

        while (!archivo.fail())
        {
            getline(archivo, texto);
        }
        int a = 0;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                matriz[i][j] = texto[a] - 48;
                a++;
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++)
        {
            int a = 0;
            for (int j = 0; j < m; j++)
            {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }

        archivo.close();
        cont++;
    }
}
		
double MostrarVectores(){
	cout<<endl<<"Tus vectores son: "<<endl;
	for (int fila=0;fila<f;++fila){
		cout<<"Vector "<<fila+1<<": (";
		for(int columna=0;columna<c;columna++){
			cout<<matriz[fila][columna];
				if (columna!=c-1)
					cout<<", ";
		}
	cout<<")"<<endl;
	}
}

int verificador(){
	if(f==1){
		int A;
		cout<<endl<<"Solo puede seleccionarse la opción de calcular la magnitud para este vector."<<endl;
		cout<<"(En caso de querer realizar otra operación escriba los nuevos vectores)"<<endl;
		cout<<endl<<"Elige una de las siguientes opciones: "<<endl;
	cout<<endl;
	cout<<"1.- Escribir nuevos vectores."<<endl;
	cout<<"5.- Magnitud del vector."<<endl;
	cin>>opcion2;
	if(opcion2==1){
	volver(2);		
	}
	else if(opcion2==5)
		return opcion2;
	else{
		cout<<endl<<"La opción que ingresaste no es válida."<<endl;
		return verificador();
	}
	}
	else{
		opcion2=menu();
		
		if(opcion2==1)
		volver(2);
		
		else
		return opcion2;	
		
	}		
}

double llamatriz(double matrizcuentas[100][100]){
	for (int fila=0;fila<f;++fila){
		for(int columna=0;columna<c;columna++){
			matrizcuentas[fila][columna]=matriz[fila][columna];
		}
	}
}

double mandaf(){
	return f;
}

double mandac(){
	return c;
}

double mandaopcion2(){
	return opcion2;
}

void volver(int eleccion){
	if(eleccion==2){
		int paso=2;
		proceso(paso);
		main();
	}
	if(eleccion==3){
		int paso=3;
		opcion2=0;
		proceso(paso);
		main();
	}
}

int proceso(int paso){
	return paso;
}

void pregunta(){
	double respuesta,respuesta2;
	int N=0;
	while(N==0){
	cout<<endl<<"¿Deseas continuar con otra operación?, responde 1 para sí o 2 para no: ";
	cin>>respuesta;
	
	if(respuesta==1){
		respuesta2=verificador();
		N=N+2;
	}

	else if(respuesta==2){
		N=N+2;
		volver(3);
	}
		
	else
		cout<<endl<<"Opción no válida"<<endl;
	}
}

void lectura(){

    ifstream archivo;

    string texto, nombreArchivo,
        extencion;
    int op, n = 1, m;

    cout << "digite el nombre del archivo que quiere abrir" << endl;
    cin >> nombreArchivo;
    cout << "que extencion tiene el archivo a abrir?? \n1.txt  || 2.dat " << endl;
    cin >> op;

    while (op >= 3 || op <= 0)
    {
        cout << "presione una de las opciones" << endl;
        cin >> op;
    }

    if (op == 1)
    {
        extencion = ".txt";
    }
    else if (op == 2)
    {
        extencion = ".dat";
    }
    nombreArchivo += extencion;

    cout << "ingrese el numero de elementos del vector" << endl;
    cin >> m;
    int vectorN[m];

    archivo.open(nombreArchivo.c_str(), ios::in); //abrimos archivo
    if (archivo.fail())
    {
        cout << "no se pudo abrir";
        exit(1);
    }

    while (!archivo.fail())
    {
        getline(archivo, texto);
    }

    for (int i = 0; i < m; i++)
    {
        vectorN[i] = texto[i] - 48;
    }

    for (int i = 0; i < m; i++)
    {
        cout << vectorN[i] << " ";
    }
    archivo.close();
}

void escribir(){

    string nombreArchivo, num, extencion, nomAux;
    int op, n, m, N, cont = 1;
    cout << "digite el nombre del archivo" << endl;
    cin >> nombreArchivo;
    nomAux = nombreArchivo;
    cout << "con que extecion desea guardar el archivo(elija la opcion) \n1.txt  || 2.dat " << endl;
    cin >> op;

    while (op >= 3 || op <= 0)
    {
        cout << "presione una de las opciones" << endl;
        cin >> op;
    }

    if (op == 1)
    {
        extencion = ".txt";
    }
    else if (op == 2)
    {
        extencion = ".dat";
    }

    cout << "ingrese cuantas matrices n*m creara" << endl;
    cin >> N;
    cout << "ingrese numero de fila" << endl;
    cin >> n;
    cout << "ingrese numero de columna" << endl;
    cin >> m;
    int matriz[n][m];

    while (cont <= N)
    {
        ofstream archivo;
        nombreArchivo = nomAux;

        cout << "ingrese elementos de la matriz " << cont << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matriz[i][j];
            }
        }

        cout << endl;

        num = to_string(cont);

        nombreArchivo += num + extencion;

        cout << nombreArchivo << endl;
        // getline(cin,nombreArchivo)
        archivo.open(nombreArchivo.c_str(), ios::out); //se crea abre archivo
        if (archivo.fail())
        {
            cout << "no se pudo abrir";
            exit(1);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                archivo << matriz[i][j];
            }
            cout << endl;
        }

        cont++;
    }
}
int EscribirV(){
	setlocale(LC_ALL, "");
	cout<<"Ingrese el número de vectores: "<<endl;
	cin>>f;
	if(f<1){
		cout<<endl<<"¡Los vectores son insuficientes!"<<endl;
		return EscribirVectores();
	}
	cout<<endl<<"Ingrese el número de dimensiones que tendrá cada vector: ";
	cin>>c;
	if(c<1){
		cout<<endl<<"¡Las dimensiones son insuficientes!"<<endl;
		return EscribirVectores();
	}
	cout<<endl;
	double matrizR[f][c];
		for(int fi=0;fi<f;++fi){
		cout<<"Para el vector "<<fi+1<<endl;
			for(int columna=0;columna<c;columna++){
				cout<<"Escribe la coordenada "<<columna+1<<": ";
				cin>>matrizR[fi][columna];
				cout<<endl;
			}
		}
	for (int fila=0;fila<f;++fila){
		for(int columna=0;columna<c;columna++){
			matriz[fila][columna]=matrizR[fila][columna];
		}
	}
/*	else{
		cout<<endl<<"Primero tiene que escribir los vectores"<<endl;
		return menu();*/
	
	MostrarVectores();
	
	pregunta();
	
	return 99;	
}








