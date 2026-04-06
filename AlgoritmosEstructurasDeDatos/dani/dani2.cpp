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

    string nombreArchivo, extencion, nomAux;
    std::string num = "";
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

        num = std::to_string(cont);

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

void lectura()
{

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
        num = to_string(cont);
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
