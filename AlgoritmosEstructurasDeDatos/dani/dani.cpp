#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
using namespace std;

void escribir();

void lectura();

int main()
{
    int opcion;

    cout << "que desea hacer \n1.escribir archivo  || 2.leer archivo " << endl;
    cin >> opcion;

    while (opcion >= 3 || opcion <= 0)
    {
        cout << "presione una de las opcionciones" << endl;
        cin >> opcion;
    }

    if (opcion == 1)
    {
        escribir();
    }
    else if (opcion == 2)
    {
        lectura();
    }

    return 0;
}

void escribir()
{
    ofstream archivo;
    string nombreArchivo, extencion;
    int op, n, m;
    cout << "ingrese tamano de vector" << endl;
    cin >> n;
    int vector[n];

    cout << "ingrese elementos del vector" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> vector[i];
    }

    cout << "digite el nombre del archivo" << endl;
    cin >> nombreArchivo;
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
    nombreArchivo += extencion;

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
        archivo << vector[i];
    }
}

void lectura()
{

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
